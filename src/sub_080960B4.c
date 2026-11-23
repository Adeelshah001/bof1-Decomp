typedef struct Entity96 {
    u8 pad00[0x06];
    u8 unk6;
    u8 pad07[0x38 - 0x07];
    u16 unk38;
    u8 unk3A;
    u8 pad3B[0x44 - 0x3B];
    u16 unk44;
    u8 pad46[0x4C - 0x46];
    u8 unk4C;
    u8 unk4D;
    u8 pad4E[0x54 - 0x4E];
    u8 unk54;
    u8 pad55[0x61 - 0x55];
    u8 unk61;
    u8 pad62[0x6C - 0x62];
    struct Entity96 *unk6C;
} Entity96;

extern s32 D_030040F0;

void sub_08038264(void);
void sub_0809206C(Entity96 *arg0);
void sub_08096128(Entity96 *arg0);
void sub_08096154(Entity96 *arg0);
void sub_08038178(Entity96 *arg0, Entity96 *arg1);

void sub_08096154(Entity96 *arg0)
{
    sub_08038264();
    if (arg0->unk6 > 0x9F) {
        arg0->unk4C++;
        arg0->unk61 = 0;
    } else {
        sub_0809206C(arg0);
    }
}

void sub_080960E8(Entity96 *arg0)
{
    if (arg0->unk4D != 0) {
        sub_08096128(arg0);
    } else {
        if ((u8)D_030040F0 > 0xF) {
            arg0->unk4D++;
        } else {
            D_030040F0++;
        }
        sub_08096154(arg0);
    }
}

void sub_080960B4(Entity96 *arg0)
{
    u8 val;
    sub_08038178(arg0, *(Entity96 **)((u8 *)arg0 + 0x78));
    val = arg0->unk61;
    arg0->unk44 = (val & 0xF0) << 8;
    arg0->unk4C = 1;
    arg0->unk54 = 0;
    arg0->unk38 = 0xE0;
}

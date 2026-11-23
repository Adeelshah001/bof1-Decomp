typedef struct Entity90 {
    u8 pad00[0x02];
    u16 unk2;
    u16 unk4;
    u16 unk6;
    u8 pad08[0x24];
    u16 unk2C;
    u8 pad2E[0x0A];
    u16 unk38;
    u8 pad3A[0x12];
    u8 unk4C;
    u8 unk4D;
    u8 pad4E[0x13];
    u8 unk61;
    u8 pad62[0x0A];
    u32 unk6C;
    u8 pad70[0x04];
    struct Entity90 *unk74;
    struct Entity90 *unk78;
    u8 pad7C[0x64];
    u8 unkE0;
} Entity90;

void sub_0807B248(Entity90 *arg0);
void sub_08038278(void);
void sub_08083484(Entity90 *arg0);
void sub_08083BB4(Entity90 *arg0);
void sub_08037FC4(Entity90 *arg0, s32 arg1);
void sub_08091618(Entity90 *arg0);
void sub_0807C484(Entity90 *arg0);
void sub_08090D24(Entity90 *arg0);

void sub_08090DD0(Entity90 *arg0)
{
    Entity90 *unk74;
    u16 y;
    sub_08038278();
    unk74 = arg0->unk74;
    y = arg0->unk6 + 0xF0;
    arg0->unk2C = y;
    unk74->unk2C = y;
    if ((u16)(arg0->unk78->unk6 - 0x20) < arg0->unk6) {
        u8 state;
        if (arg0->unkE0 == 6) {
            arg0->unk6C = (u32)arg0->unk74;
            sub_08083484(arg0);
            state = 0xE;
        } else {
            sub_08083BB4(arg0);
            state = 0xC;
        }
        arg0->unk4D = state;
    }
    sub_0807B248(arg0);
}

void sub_08090B1C(Entity90 *arg0)
{
    Entity90 *unk74 = arg0->unk74;
    u8 four = 4;
    arg0->unk4D = four;
    unk74->unk4C = four;
    arg0->unk61 = 0;
    unk74->unk61 = 0;
    arg0->unk38 = 0x20;
    sub_08037FC4(arg0, 4);
    if (arg0->unkE0 != 2) {
        arg0->unkE0 = 6;
        sub_08091618(arg0);
    } else {
        sub_0807C484(arg0);
    }
    sub_08090D24(arg0);
}

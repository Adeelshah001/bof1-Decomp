extern u16 D_03001864;

void sub_08037FC4(void *arg0, s32 arg1);
void sub_0803815C(void *arg0, s32 arg1);
void sub_0803A8EC(void *arg0);

typedef struct {
    u8 pad00[0x2C];
    u8 unk2C;
    u8 pad2D[0x38 - 0x2D];
    u16 unk38;
    u8 pad3A[0x44 - 0x3A];
    u16 unk44;
    u8 pad46[0x54 - 0x46];
    u8 unk54;
    u8 pad55[0x61 - 0x55];
    u8 unk61;
    u8 pad62[0x78 - 0x62];
    u32 unk78;
    u8 pad7C[0xD8 - 0x7C];
    u8 unkD8;
    u8 padD9[0xF1 - 0xD9];
    u8 unkF1;
} Unk;

void sub_08076B50(void *arg0) {
    Unk *t = (Unk *)arg0;
    u8 b;
    t->unk38 = 0xE0;
    t->unkD8 = 0x0A;
    t->unk54 = 0xFF;
    sub_0803815C(arg0, t->unk78);
    b = t->unk61;
    t->unk44 = (u16)((b & 0xF0) << 8);
    sub_08037FC4(arg0, 0x10);
    if (t->unkF1 & 0x80) {
        t->unk2C = 0;
    } else {
        *(u16 *)((u8 *)arg0 + 0x2C) = (u16)(*(u16 *)((u8 *)arg0 + 6) + 0x18);
    }
    if ((u16)(D_03001864 - 0x10) > 1) {
        sub_0803A8EC(arg0);
    }
}

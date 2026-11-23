struct Actor4E4 {
    u8 pad00[2];
    u16 unk2;
    u16 unk4;
    u16 unk6;
    u8 pad08[0x2A - 0x8];
    u16 unk2A;
    u16 unk2C;
    u16 unk2E;
    u8 pad30[0x38 - 0x30];
    u16 unk38;
    u8 unk3A;
    u8 unk3B;
    u8 pad3C[0x54 - 0x3C];
    s8 unk54;
    s8 unk55;
    u8 pad56[0x61 - 0x56];
    u8 unk61;
    u8 pad62[0x64 - 0x62];
    void (*unk64)(struct Actor4E4 *);
};

void sub_08037FC4(struct Actor4E4 *, s32);
void sub_0803828C(struct Actor4E4 *, u16 *, u16, u8);
void sub_0803A8EC(struct Actor4E4 *);
struct Actor4E4 *sub_0804E628(struct Actor4E4 *);
void sub_0804E6BC(struct Actor4E4 *);
void sub_0804E648(struct Actor4E4 *);

void sub_0804E510(struct Actor4E4 *arg0) {
    struct Actor4E4 *child;

    sub_0803828C(arg0, &arg0->unk4, arg0->unk38, arg0->unk61);
    sub_0803A8EC(arg0);
    if (--arg0->unk54 == 0) {
        arg0->unk54 = 2;
        child = sub_0804E628(arg0);
        child->unk64 = sub_0804E6BC;
        sub_08037FC4(child, 8);
        if (--arg0->unk55 == 0) {
            arg0->unk64 = sub_0804E648;
        }
    }
}

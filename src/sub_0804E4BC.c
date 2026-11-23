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
    u8 unk54;
    u8 unk55;
    u8 pad56[0x61 - 0x56];
    u8 unk61;
    u8 pad62[0x64 - 0x62];
    void (*unk64)(struct Actor4E4 *);
};

extern void (* const D_080FD50C[])(struct Actor4E4 *);

void sub_08037FC4(struct Actor4E4 *, s32);
void sub_0804E364(struct Actor4E4 *);
void sub_0803828C(struct Actor4E4 *, u16 *, u16, u8);
void sub_0803A8EC(struct Actor4E4 *);
struct Actor4E4 *sub_0804E628(struct Actor4E4 *);
void sub_0804E6BC(struct Actor4E4 *);
void sub_0804E648(struct Actor4E4 *);
void sub_0804E5E0(struct Actor4E4 *);
void sub_0804E5B4(struct Actor4E4 *);
void sub_08048250(struct Actor4E4 *);

void sub_0804E4BC(struct Actor4E4 *arg0) {
    sub_08037FC4(arg0, 6);
    arg0->unk2E = 0x3800;
}

void sub_0804E4D4(struct Actor4E4 *arg0) {
    D_080FD50C[arg0->unk3B](arg0);
    arg0->unk3A |= 2;
    arg0->unk64 = sub_0804E364;
    arg0->unk64(arg0);
}

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

void sub_0804E570(struct Actor4E4 *arg0) {
    arg0->unk2 = 0x1C0;
    arg0->unk6 = 0x716F;
    arg0->unk2C = 0x716F;
    if (arg0->unk3B != 0) {
        arg0->unk54 = 0x30;
        arg0->unk64 = sub_0804E5E0;
    } else {
        arg0->unk64 = sub_0804E5B4;
    }
    sub_08048250(arg0);
}

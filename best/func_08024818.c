extern u8 D_03002AB0[], D_030023DC[], D_030023E0[], D_0202DBD0[];
void sub_08004EA0(s32);
void sub_080391F4(void *, s32, s32, s32);
void sub_080041B8(void);
u8 sub_08001770(u16);
u8 sub_0805CF40(u16, u16 *);

void func_080247C0(void) {
}

void func_08024818(void) {
    u16 slot;
    u8 *save = D_0202DBD0;
    if (sub_08001770(0x6D) == 0 && ((u8 *)D_0202DBD0 + 0x3BE)[0] == 0xFF &&
        sub_0805CF40(0x146, &slot) == 0) {
        D_03004830[0x40]++;
    } else {
        D_03004830[0x40] = 8;
    }
}

void sub_08024A70(void) {
    if (D_030023DC[0] == 0) {
        sub_08004EA0(0x8287);
        D_03002AB0[0xB8] &= 0xFB;
        D_03004830[0x40]++;
    }
}

void sub_08024AAC(void) {
    u8 *flags = D_030023E0;
    u16 id = *(u16 *)(flags + 0xA4);
    if (id == 0 || id == 0xD4) {
        sub_080391F4(D_03002AB0, 0x40, 7, 0);
        sub_080041B8();
        D_03004830[0x40] = 0;
        D_03004830[0x3F] = 0;
    }
}

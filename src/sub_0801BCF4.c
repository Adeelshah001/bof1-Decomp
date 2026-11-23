void sub_080379D4(s32);
void sub_08004EA0(s32);
u8 sub_08019DBC(s32);
u8 sub_08019E04(s32);
void sub_08019720(void);
void sub_08037A74(s32);
void sub_0800312C(s32, s32);
void sub_08001F80(s32, s32, s32);

void sub_0801BD50(void) {
    sub_080379D4(0x19);
    sub_08004EA0(0x87E1);
    D_03004830[0x2B]++;
}

void sub_0801BD74(void) {
    if (sub_08019DBC(6) == 0) {
        D_03004830[0x2C] = 0xA0;
        D_03004830[0x2B]++;
    }
}

void sub_0801BD24(void) {
    if (sub_08019E04(3) == 0) {
        sub_08019720();
        D_03004830[0x2C] = 0x5A;
        D_03004830[0x2B]++;
    }
}

void sub_0801BCF4(void) {
    sub_08037A74(0x100);
    sub_0800312C(0x10, 6);
    sub_08001F80(0, 0, 0);
    D_03004830[0x2B]++;
}

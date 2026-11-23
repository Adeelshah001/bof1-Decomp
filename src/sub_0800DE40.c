void sub_080030D4(void);
void sub_0802FD60(s32);
void sub_08003378(s32);
void sub_08003528(s32, s32, s32, s32, s32);
void sub_08004EA0(s32);

void sub_0800DE40(void) {
    D_03004830[0x2A] = 0;
    sub_080030D4();
}

void sub_0800DE58(void) {
    sub_0802FD60(8);
    D_03004830[0x2C] = 0x10;
    D_03004830[0x2B]++;
}

void sub_0800DE10(void) {
    sub_08003378(0x34);
    sub_08003528(0, 0, 0, 0x100, 1);
    D_03004830[0x2B]++;
}

void sub_0800DE9C(void) {
    sub_08004EA0(0x8170);
    D_03004830[0x2C] = 0x10;
    D_03004830[0x2B]++;
}

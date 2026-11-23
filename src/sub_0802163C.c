extern u16 D_03002508;

void sub_080073C8(s32);
void sub_08021A28(s32, s32);
void sub_08072CC4(s32);
void sub_0800312C(s32, s32);

void sub_0802163C(void) {
    u8 *p = D_03004830;
    if (p[0x2D] & 8) {
        sub_080073C8(0x24);
        p[0x2B]++;
    }
}

void sub_08021668(void) {
    u8 *p = D_03004830;
    if (((s8 *)p)[0x2D] < 0) {
        sub_08021A28(1, 0x78);
        p[0x2B]++;
    }
}

void sub_080215F8(void) {
    u8 *p = D_03004830;
    if (p[0x2D] & 1) {
        D_03002508 = 0;
        sub_08072CC4(0x46);
        D_03002508 = 1;
        p[0x2D] |= 2;
        p[0x2B]++;
    }
}

void sub_08021698(void) {
    u8 *p = D_03004830;
    if (((s8 *)p)[0x2C] < 0) {
        p[0x2B]++;
        sub_0800312C(0x10, 0);
    }
}

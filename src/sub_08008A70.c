extern u8 D_03002AB0[];
extern u16 D_03004120;

void sub_0803EE88(void *);
void sub_0800312C(s32, s32);
void sub_08001F80(s32, s32, s32);
void sub_0800421C(s32, s32, s32);

void sub_08008A70(void) {
    sub_0803EE88(D_03003420);
    D_03002AB0[0xB8] &= 0xFB;
}

void sub_08008A90(void) {
    u8 *p = D_03004830;
    if ((s8)p[0x2C] < 0) {
        p[0x2C] = 0x7F;
        p[0x2B]++;
    }
}

void sub_08008AB0(void) {
    u8 *p = D_03004830;
    if ((s8)p[0x2C] < 0) {
        p[0x2B]++;
    }
}

void sub_08008AD0(void) {
    sub_0800312C(0x10, 0xA);
    sub_08001F80(0, 0, 0);
    D_03004120 = 0;
    sub_0800421C(0x89, 0xA08, 0x241C);
    D_03004830[0x2B]++;
}

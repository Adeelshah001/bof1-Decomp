extern u8 D_03002AB0[];
extern u8 D_030033F0[];

void sub_08040A74(s32);
void sub_080379D4(s32);

void sub_08024E10(void) {
    u8 *p;
    {
        u32 v = D_030033F0[0];
        v |= 1;
        D_030033F0[0] = v;
    }
    sub_08040A74(0x23);
    p = D_03004830;
    p[0x40]++;
}

void sub_08024E38(void) {
    u8 *base;
    sub_080379D4(0x12);
    base = D_03004830;
    base[0x41] = 0x28;
    base[0x40]++;
}

void sub_08024E5C(void) {
    u8 *base = D_03004830;
    u32 tmp = base[0x41];
    u8 cnt;
    tmp--;
    base[0x41] = tmp;
    cnt = tmp;
    if (cnt == 0) {
        u8 *p = D_03002AB0;
        p[0xB8] &= 0xFB;
        base[0x3F] = cnt;
        base[0x40] = cnt;
    }
}

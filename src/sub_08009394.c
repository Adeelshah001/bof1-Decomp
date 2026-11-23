extern u8 D_03002AB0[];

void sub_08009358(void) {
    u32 val = 0x28;
    u8 *p = D_03004830;
    p[0x2C] = val;
    p[0x2B]++;
}

void sub_08009394(void) {
    u32 val = 0x50;
    u8 *p = D_03004830;
    p[0x2C] = val;
    p[0x2B]++;
}

void sub_080093AC(void) {
    u32 val = 0x8081;
    u8 *event = D_03002AB0;
    u8 *p;
    *(u32 *)(event + 0x94) = val;
    D_030023D0[0] = 2;
    p = D_03004830;
    p[0x2B]++;
}

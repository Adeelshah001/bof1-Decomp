extern u8 D_03002AB0[];

void sub_08009148(void) {
    u8 *p = D_03004830;
    u32 val;
    u8 *event;
    p[0x2C] = 0x3C;
    val = 0x80B3;
    p[0x2B]++;
    event = D_03002AB0;
    *(u32 *)(event + 0x94) = val;
    D_030023D0[0] = 2;
}

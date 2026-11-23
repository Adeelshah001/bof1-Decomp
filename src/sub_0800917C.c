void sub_08009200(void) {
    u8 *base = D_03004830;
    if ((s8)base[0x2D] != 0) {
        u8 *timer = base + 0x2C;
        *timer = 120;
        --timer;
        ++*timer;
    }
}

void sub_0800518C(s32, s32, s32);

void sub_0800917C(void) {
    u8 *p = D_03004830;
    if ((s8)p[0x2C] < 0) {
        sub_0800518C(0, 0xAE8, 0x54C);
        p[0x2B]++;
    }
}

extern u8 D_03002AB0[];

void sub_08009284(void) {
    u8 *p = D_03004830;
    if ((s8)p[0x2C] < 0) {
        u32 val;
        u8 *event;
        p[0x2C] = 0x3C;
        p[0x2B]++;
        val = 0x80B4;
        event = D_03002AB0;
        *(u32 *)(event + 0x94) = val;
        D_030023D0[0] = 2;
    }
}

void sub_08009148(void) {
    u8 *p = D_03004830;
    u32 val;
    u8 *event;
    p[0x2C] = 0x3C;
    p[0x2B]++;
    val = 0x80B3;
    event = D_03002AB0;
    *(u32 *)(event + 0x94) = val;
    D_030023D0[0] = 2;
}

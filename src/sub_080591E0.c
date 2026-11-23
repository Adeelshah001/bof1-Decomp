extern u8 D_03002AB0[];
extern u16 D_030023D4;
extern u16 D_030040E0;

void sub_080591E0(u8 *arg0) {
    u8 *p = D_03002AB0;
    *(u16 *)(arg0 + 0x12) = (*(u16 *)(p + 2) >> 4) + 0x50;
    *(u16 *)(arg0 + 0x16) = *(u16 *)(p + 6) >> 4;
}

void sub_0805919C(u8 *arg0) {
    u32 x;
    u32 y;
    u16 val;

    val = *(u16 *)(arg0 + 0x12);
    if (val <= 0xAB) {
        x = 0xAB;
    } else if (val > 0x149) {
        x = 0x149;
    } else {
        x = *(u16 *)(arg0 + 0x12);
    }
    *(u16 *)(arg0 + 2) = x;
    D_030023D4 = x;

    val = *(u16 *)(arg0 + 0x16);
    if (val <= 0x8E) {
        y = 0x8E;
    } else if (val > 0x14C) {
        y = 0x14C;
    } else {
        y = *(u16 *)(arg0 + 0x16);
    }
    *(u16 *)(arg0 + 6) = y;
    D_030040E0 = y;
}

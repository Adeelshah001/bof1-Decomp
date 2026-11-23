extern u8 D_03002AB0[];
extern u8 D_03004448[];
extern u8 D_03004830[];

void sub_0801F22C(void) {
    u32 *p = *(u32 **)D_03004448;
    u16 *st = (u16 *)D_03002AB0;
    u8 *base;

    if (((st[3] & 0xFFF0) == ((p[5] & 0xFFFFFF) >> 8)) &&
        ((st[1] & 0xFFF0) == ((p[4] & 0xFFFFFF) >> 8))) {
        base = D_03004830;
        base[0x2C] = 0x1C;
        base[0x2B]++;
    }
}

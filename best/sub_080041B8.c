extern u16 D_03004138;
extern s16 D_030040F8;
extern u8 D_030045B0[];
extern u8 D_03002AB0[];

void sub_080041B8(void) {
    u8 *r4;
    u8 *r5;
    D_03004138 = 8;
    D_030040F8 = 0;
    r4 = D_030045B0;
    r5 = D_03002AB0;
    do {
        if (r4[4] & 1) {
            r5[D_030040F8 * 0x124 + 0xF0] |= 0x40;
        }
        r4[4] >>= 1;
    } while (++D_030040F8 <= 7);
}

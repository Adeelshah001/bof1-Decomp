extern u8 D_030045B0[];
extern s16 D_030040F8;
extern u8 D_03004124[];
extern u8 D_03002AB0[];

void sub_08004154(void) {
    u8 *p;
    u8 val;
    u8 shifted;

    D_030045B0[4] = 0;
    D_030040F8 = 0;
    do {
        p = D_03002AB0 + D_030040F8 * 0x124;
        val = p[0xF0];
        D_03004124[0] = val;
        shifted = D_030045B0[4] >> 1;
        D_030045B0[4] = shifted;
        if (val & 0x40) {
            D_030045B0[4] = shifted | 0x80;
        }
        D_030040F8 += 1;
    } while (D_030040F8 <= 7);
}

extern u8 D_03002AB0[];
extern u8 D_030045B0[];
extern u8 D_0200BA61[];
extern u8 D_0200BA20[];
extern const u8 * const D_08100618[];

u8 sub_0805D584(s32, u8 *);

void sub_0805CA84(void) {
    D_03002AB0[0xBF] = 0x28;
}

void sub_0805CA64(void) {
    D_030045B0[0x2C] |= 0x80;
    D_03002AB0[0xBF] = 0x28;
}

void sub_0805CA4C(s32 arg0) {
    D_0200BA61[-1] = sub_0805D584(arg0, D_0200BA61);
}

void sub_0805CA24(s32 arg0) {
    const u8 *src = D_08100618[arg0];
    if (src != NULL) {
        u8 *dst = D_0200BA20;
        u8 c;
        do {
            c = *src;
            *dst = c;
            src++;
            dst++;
        } while (c != 0);
    }
}

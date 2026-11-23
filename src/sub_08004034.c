extern u8 D_020211C0[];
extern u8 D_030043DC[];
extern u8 D_030043D8[];
extern u8 D_080F4A48[];
extern u8 D_081A0DFC[];

void sub_08004034(u16 arg0) {
    u8 i;
    u8 offset;
    u8 *p;
    u8 *q;

    offset = D_080F4A48[arg0];
    i = 0;
    p = D_030043DC;
    q = D_030043D8;

    do {
        D_020211C0[i + 0x20] = D_081A0DFC[offset + i];
        D_020211C0[i + 0x21] = D_081A0DFC[offset + i + 1];
        i += 2;
    } while (i <= 0x1F);

    *p = 1;
    *q |= 1;
}

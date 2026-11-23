extern u8 D_03002AB0[];

void sub_08033D78(u8 arg0) {
    u8 i;

    for (i = 0; i <= 7; i++) {
        u8 *obj = i * 0x124 + D_03002AB0;
        if (obj[0x3C] == arg0) {
            u8 *p = obj + 0x3A;
            *p = 0;
            p += 0xB6;
            *p = 0;
        }
    }
}

extern u8 D_03002AB0[];

u8 sub_08055F0C(void) {
    u8 count = 0, i = 0;
    do {
        u8 *p = D_03002AB0 + i * 0x124;
        u32 r = 0;
        if (p[0x3A]) {
            r = *(u16 *)(p + 0xF6) != *(u16 *)(p + 0xF4);
        }
        if (r && !(p[0xF1] & 0x80)) {
            count++;
        }
        i++;
    } while (i <= 7);
    return count;
}

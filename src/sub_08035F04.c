extern u8 D_03002490[];

u8 *sub_08035F04(void) {
    u8 *r = 0;
    u8 i;
    for (i = 0; i < 4; i++) {
        u8 *p = (u8 *)(i * 0x1C + (u32)D_03002490);
        if (p[0x18] == 0) {
            r = p;
            break;
        }
    }
    return r;
}

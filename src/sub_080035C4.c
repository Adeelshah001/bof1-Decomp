extern u8 D_03002AB0[];

void sub_080035C4(void) {
    u16 i = 0;
    do {
        u16 j = 0;
        do {
            *(u8 *)((i * 0x124 + j) + (u32)D_03002AB0) = 0;
            j++;
        } while (j < 0x124);
        i++;
    } while (i < 8);
}

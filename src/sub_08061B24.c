extern u8 D_03004620[];
extern u8 D_03004760[];

s32 sub_08061B24(void) {
    D_03004620[3] = 2;
    D_03004760[0x18] = 0x1C;
    return 0;
}

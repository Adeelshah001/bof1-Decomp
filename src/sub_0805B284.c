extern u8 D_03000AE0[];

void sub_0805B284(void) {
    u8 *p = D_03000AE0;
    *(u32 *)(p + 4) = 0x080FFA80;
    *(u32 *)(p + 0x18) = 0x20;
    *(u32 *)(p + 0x20) = 0;
}

extern u8 *D_03004154;

void sub_0800BAB8(void) {
    u8 *ptr;
    u16 val2;
    sub_0800D178();
    ptr = D_03004154;
    *(u16 *)(ptr + 2) = 0xEA8;
    val2 = 0xFDB0;
    *(u16 *)(ptr + 6) = val2;
    *(u16 *)(ptr + 0x2C) = val2;
    D_03004830[0x2C] = 0x0F;
    D_03004830[0x2B]++;
}

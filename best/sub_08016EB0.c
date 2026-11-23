extern u8 D_03003620[];
extern u8 D_03004830[];

void sub_08016EB0(void) {
    u8 *base = D_03003620;
    u8 *src = base - 0x180;

    *(u16 *)(base + 0x02) = *(u16 *)(src + 0x02);
    *(u16 *)(base + 0x06) = *(u16 *)(src + 0x06);
    *(u16 *)(base + 0x2C) = *(u16 *)(src + 0x06);
    *(u16 *)(base - 0x24) = 1;
    *(u8 *)(base - 0x0A) = 0;
    *(u16 *)(base - 0x2C) = 0x1001;
    D_03004830[0x2B]++;
}

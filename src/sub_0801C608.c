extern u8 D_03002510[];

void sub_08019DA0(void);

void sub_0801C608(void) {
    D_03002510[0xD1] = 0x3C;
    D_03002510[0x161] = 0x3C;
    sub_08019DA0();
}

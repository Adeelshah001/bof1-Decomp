extern void sub_08030AD8(u16);
extern u8 D_03004830[];

void sub_08014FDC(void) {
    *(u16 *)0x030040F8 = 0x60;
    sub_08030AD8(0x60);
    D_03004830[0x2B]++;
}

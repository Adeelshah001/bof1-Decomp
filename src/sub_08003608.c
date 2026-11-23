extern u8 D_030023E0[];
void sub_08003770(void);
void sub_080029C8(void);

void sub_08003608(void) {
    u8 *p = D_030023E0;
    if (*(u16 *)(p + 0xA4) == 0x18F || (s8)D_03004830[0x2A] == 0xC) {
        sub_08003770();
    } else {
        sub_080029C8();
    }
}

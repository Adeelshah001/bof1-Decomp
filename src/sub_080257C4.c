extern u8 D_03004830[];
void sub_080257C4(void) {
    u8 *ptr = D_03004830;
    u8 v;
    ptr[0x42] = ((v = 2 + (ptr[0x42] >> 8)), v | ptr[0x42]);
}

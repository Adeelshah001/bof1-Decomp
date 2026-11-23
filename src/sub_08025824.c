/* identical to sub_080257C4 (matched), with its names changed by decompdecomp */
extern u8 D_03004830[];
void sub_08025824(void) {
    u8 *ptr = D_03004830;
    u8 v;
    ptr[0x42] = ((v = 2 + (ptr[0x42] >> 8)), v | ptr[0x42]);
}

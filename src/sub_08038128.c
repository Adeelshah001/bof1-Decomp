/* identical to sub_080380F4 (matched), with its names changed by decompdecomp */
u8 sub_08037ED4(void *, u16, u16);

u8 sub_08038128(u8 *arg0, u8 *arg1, u16 arg2, u16 arg3) {
    u8 val = sub_08037ED4(arg0, *(u16 *)(arg1 + 2) - arg2, *(u16 *)(arg1 + 6) - arg3);
    arg0[0x61] = val;
    return val;
}

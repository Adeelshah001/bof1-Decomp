/* identical to sub_080073F0 (matched), with its names changed by decompdecomp */
void sub_0800B104(void *arg0);
void sub_08054820(void *arg0, u8 arg1);
void sub_08084EDC(void *arg0, u16 arg1);

void sub_08007494(void) {
    sub_0800B104((void *)0x03003420);
}

u32 sub_08007468(u16 arg0, u16 arg1) {
    u16 *base = (u16 *)0x03002AB0;

    return base[1] != arg0 || base[3] != arg1;
}

void sub_08007524(void) {
    u8 *p = *(u8 **)(0x03002AB0 + 0x94);

    p[0x6F] = *(u16 *)0x0300413C;
    sub_08054820(p, *(u8 *)0x0300413C);
}

void sub_08084ECC(void *arg0, u16 arg1) {
    sub_08084EDC(arg0, arg1);
}

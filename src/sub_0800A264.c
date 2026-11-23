extern u8 D_03002AB0[];
void sub_0800B0E0(s32 arg0);
void sub_08033B88(s32 arg0, s32 arg1);

void sub_08009F3C(s32 arg0) {
    u8 *base = D_03002AB0;
    if (base[0xB8] & 4)
        *(s32 *)(arg0 + 0x68) += 2;
}

void sub_08009F80(s32 arg0) {
    u8 *base = D_03004830;
    if (*(u16 *)(base + 0x2A) == 0x109)
        *(s32 *)(arg0 + 0x68) += 2;
}

void sub_0800A264(s32 arg0) {
    u8 *base = D_03004830;
    if ((s8)base[0x2A] == 0x0C && (s8)base[0x2B] == 4)
        sub_0800B0E0(arg0);
}

void sub_0800A294(s32 arg0) {
    u8 *g = D_03002AB0;
    u32 *ptr;
    sub_08033B88((s32)g, 3);
    ptr = (u32 *)(g + 0x94);
    *ptr = 0x80EF;
    *(u8 *)D_030023D0 = 2;
    *(s32 *)(arg0 + 0x68) += 2;
}

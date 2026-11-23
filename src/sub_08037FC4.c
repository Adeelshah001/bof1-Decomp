extern u8 D_0300169C[];
u8 sub_08037ED4(void *arg0, u16 arg1, u16 arg2);
void sub_08037BE0(u8 *arg0, u16 arg1);

void sub_08037FC4(u8 *arg0, s32 arg1) {
    u32 table[1] = { 0x081F4ABC };
    u8 *p;
    u8 *base;
    u16 v;
    p = (u8 *)table[D_0300169C[0]] + *(u16 *)(arg0 + 0x2A);
    base = (u8 *)table[D_0300169C[0]];
    v = p[0] | (p[1] << 8);
    base += (u16)(v + arg1);
    v = base[0] | (base[1] << 8);
    *(u16 *)(arg0 + 0x22) = v;
    sub_08037BE0(arg0, *(u16 *)(arg0 + 0x22));
}

void sub_0803815C(u8 *arg0, u8 *arg1) {
    u8 *p = arg0;
    s32 v;
    v = sub_08037ED4(arg0, *(u16 *)(arg1 + 2), *(u16 *)(arg1 + 6));
    p[0x61] = v;
}

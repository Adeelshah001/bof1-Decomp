extern u8 D_0300169C[];
extern u32 D_081F4ABC[];
s32 sub_08037ED4(void *arg0, u16 arg1, u16 arg2);
void sub_08037BE0(u8 *arg0, u16 arg1);
void sub_0803832C(u8 *arg0);

void sub_0803815C(u8 *arg0, u8 *arg1) {
    u8 *p = arg0;
    p[0x61] = (u8)sub_08037ED4(arg0, *(u16 *)(arg1 + 2), *(u16 *)(arg1 + 6));
}

void sub_08037FC4(u8 *arg0, s32 arg1) {
    u32 table[1] = { 0x081F4ABC };
    u8 *base;
    u8 *p;
    u16 v;
    base = (u8 *)table[D_0300169C[0]];
    p = base + *(u16 *)(arg0 + 0x2A);
    v = p[0] | (p[1] << 8);
    p = base + (u16)(v + arg1);
    v = p[0] | (p[1] << 8);
    *(u16 *)(arg0 + 0x22) = v;
    sub_08037BE0(arg0, *(u16 *)(arg0 + 0x22));
}

void sub_0803832C(u8 *arg0) {
    u32 *p = (u32 *)arg0;
    p[4] += ((p[0x11] >> 8) & 0xFFFF) << 8;
    p[5] += ((p[0x12] >> 8) & 0xFFFF) << 8;
    p[0] += p[4];
    p[1] += p[5];
}

void sub_08038360(u8 *arg0) {
    u8 *p = arg0;
    p[0x51] = 4;
    sub_0803832C(arg0);
}

void sub_0803EE38(u8 *arg0) {
    s32 zero8;
    s32 zero32;
    u8 *p;
    p = arg0 + 0x4C;
    zero8 = 0;
    zero32 = 0;
    *(u16 *)p = zero32;
    p += 4;
    *(u16 *)p = zero32;
    *(u16 *)(arg0 + 0x22) = zero32;
    p -= 0x16;
    *(u8 *)p = zero8;
    p += 6;
    *(u8 *)p = zero8;
    *(u32 *)(arg0 + 0x64) = zero32;
}

void sub_0803EE54(u8 *arg0) {
    s32 zero8;
    s32 zero32;
    u8 *p;
    p = arg0 + 0x4C;
    zero8 = 0;
    zero32 = 0;
    *(u16 *)p = zero32;
    p += 4;
    *(u16 *)p = zero32;
    *(u16 *)(arg0 + 0x22) = zero32;
    p -= 0x16;
    *(u8 *)p = zero8;
    *(u32 *)(arg0 + 0x78) = zero32;
}

extern u8 D_0202DBD0[];
extern u8 D_08221D40[];
void sub_0803F7E8(u8 *arg0, u8 *arg1, u8 arg2);

void sub_0803EEA0(u16 arg0) {
    s32 zero = 0;
    u8 *flag = (u8 *)0x03004E20;
    u8 *q;
    u16 v;
    *flag = zero;
    q = D_0202DBD0;
    *(u16 *)(q + 0x4BA) = zero;
    v = D_08221D40[arg0 * 2] | (D_08221D40[arg0 * 2 + 1] << 8);
    if (v != 0) {
        sub_0803F7E8(D_08221D40 + (v & 0x7FFF), (u8 *)0x080FB990, 0xE0);
    }
    *flag = 0;
}

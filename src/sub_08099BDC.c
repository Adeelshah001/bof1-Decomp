extern u8 D_03004F50[];
extern u8 D_08152E94[];

void sub_0809A0E4(u8 *);

void sub_08099BDC(u8 *arg0) {
    u8 *p;
    u16 v;
    v = 0x160;
    *(u16 *)(arg0 + 0x38) = v;
    p = arg0 + 0x54;
    p[0] = 3;
    p[-8] = 2;
    sub_0809A0E4(arg0);
}

void sub_08099AFC(u8 *arg0, u8 arg1, s16 *arg2, s16 *arg3) {
    u8 *base;
    u32 t;
    u8 idx;
    u8 v0;
    u8 v1;

    base = D_03004F50 + 0x5F;
    t = ((u32)(base[0] - 0x20) << 24) & 0xF0000000u;
    idx = (u8)((t >> 26) + arg1);
    v0 = D_08152E94[idx];
    *(u16 *)(arg0 + 0x44) = (u16)(v0 << 8);
    *arg2 = (u16)(v0 | 0xF00);
    v1 = D_08152E94[idx + 1];
    *arg3 = (u16)(v1 | 0x2F00);
}

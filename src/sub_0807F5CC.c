extern u16 D_050001E8[];
extern u16 D_050001F0[];

extern u8 D_0202DBD0[];
extern u8 D_03004584[];
extern u8 D_03004F50[];

extern void sub_08002BBC(u8);

void sub_0807F61C(void *arg0) {
    u8 *base = arg0;
    u16 v = *(u16 *)(base + 2);
    *(u16 *)(base + 0x46) = v;
    *(u16 *)(base + 0x4A) = *(u16 *)(base + 6);
    *(u16 *)(base + 0x2C) = *(u16 *)(base + 6);
}

void sub_0807F5CC(s16 arg0, s16 arg1, s16 arg2) {
    u8 *base = D_0202DBD0;
    u32 off = 0xA4 << 2;
    u8 *ptr = base + off;
    *(u16 *)ptr = arg0;
    *(u16 *)(base + 0x16) = arg1;
    *(u16 *)(base + 0x1A) = arg2;
    *D_03004584 = 1;
    sub_08002BBC(D_03004F50[0x5B]);
}

s32 sub_08082F60(void *arg0) {
    u8 *base = arg0;
    u16 *val_ptr = (u16 *)(base + 0x38);
    u16 newval = *val_ptr + 1;
    u8 val = (u8)newval;
    s32 ret = 0;

    *val_ptr = newval;

    if (val > 0x77) ret = 1;

    if (val == 0x78) {
        (*(u8 *)(base + 0x50))++;
        return 0;
    }

    if ((val & 1) == 0) {
        u16 *e8 = D_050001E8;
        u16 *f0 = D_050001F0;
        u16 tmp = e8[0];
        e8[0] = f0[0];
        f0[0] = e8[8];
        e8[8] = tmp;
    }

    return ret;
}

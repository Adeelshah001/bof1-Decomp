extern u8 D_03000AE0[];
extern u8 D_03004550[];
extern u8 D_08117DD4[];
extern u8 D_081479A8[];

void sub_0805B26C(void) {
    u8 *p = D_03000AE0;
    *(u32 *)(p + 4) = 0x080FFA00;
    *(u32 *)(p + 0x18) = 0x20;
    *(u32 *)(p + 0x20) = 0;
}

void sub_0805B29C(void) {
    u8 *p = D_03000AE0;
    *(u32 *)(p + 4) = 0x080FF990;
    *(u32 *)(p + 0x18) = 0x1C;
    *(u32 *)(p + 0x20) = 0;
}

void sub_0805B2B4(u16 arg0, s32 arg1) {
    u8 *dst;
    u16 idx;
    u8 v;

    if (arg1 != 0) {
        dst = D_03004550;
        *(u32 *)dst = ((u32 *)D_081479A8)[arg0];
    } else {
        idx = arg0;
        if (idx > 0x6FF) {
            idx -= 0x100;
        }
        dst = D_03004550;
        *(u32 *)dst = ((u32 *)D_08117DD4)[idx];
    }
    dst[0x1A] = 0;
    dst[0x1C] = 0;
    dst[0x1D] = ((v = 0xC + (dst[0x1D] >> 8)), v | dst[0x1D]);
}

u16 sub_0805B1F4(void) {
    u8 *base = D_03000AE0;
    return *(u16 *)(base + 2);
}

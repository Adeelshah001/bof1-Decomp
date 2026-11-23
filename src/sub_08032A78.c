extern u8 D_030023D0[];
extern u8 D_0202DBD0[];
void sub_08038F90(s32 arg0);

void sub_08032A78(u8 *base, u32 v) {
    u8 *a = base + 0x90;
    u8 *b = base + 0x94;
    *(u32 *)b = v;
    *(u32 *)a = v;
    D_030023D0[0] = 2;
}

void sub_08032B24(u32 arg0) {
    sub_08038F90((((arg0 << 16) & 0xF0000) >> 17) + 8);
}

s32 sub_08032B3C(u8 *arg0, u32 arg1) {
    u8 *p = arg0;
    u32 v = arg1;
    s32 result;

    if ((D_0202DBD0[0xAE * 4] & 0xF0) == 0x40) {
        *(u32 *)(p + 0xA4) = v;
        p[0x4D] = 4;
        p[0x50] = 0;
        result = 1;
    } else {
        result = 0;
    }
    return result;
}

void sub_08032990(u8 *arg0) {
    u8 *base = arg0;
    u8 v = base[0xBE];

    if (v != 2) {
        D_030023D0[0] = v;
        base[0xBE] = 0;
    } else {
        base[0x4D] = 8;
        base[0x50] = 0;
    }
}

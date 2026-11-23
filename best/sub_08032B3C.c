extern u8 D_030023D0[];
extern u8 D_0202DBD0[];
void sub_08038F90(s32 arg0);

void sub_08032A78(u8 *base, u32 v) {
    *(u32 *)(base + 0x94) = v;
    *(u32 *)(base + 0x90) = v;
    D_030023D0[0] = 2;
}

void sub_08032B24(s32 arg0) {
    sub_08038F90((((arg0 << 16) & 0xF0000) >> 17) + 8);
}

s32 sub_08032B3C(u8 *arg0, u32 arg1) {
    if ((D_0202DBD0[0xAE * 4] & 0xF0) != 0x40) {
        return 0;
    }
    *(u32 *)(arg0 + 0xA4) = arg1;
    arg0[0x4D] = 4;
    arg0[0x50] = 0;
    return 1;
}

void sub_08032990(u8 *arg0) {
    u8 v = arg0[0xBE];
    if (v != 2) {
        D_030023D0[0] = v;
        arg0[0xBE] = 0;
        return;
    }
    arg0[0x4D] = 8;
    arg0[0x50] = 0;
}

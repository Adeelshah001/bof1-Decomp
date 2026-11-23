extern u8 D_081011E2[];

void sub_0805B568(s32, s32, s32, s32, s32);

void sub_08069640(u16 arg0, s32 arg1) {
    s32 x = (arg0 & 0x3E) << 2;
    s32 y = (arg0 & 0x7C0) >> 3;
    u8 val = D_081011E2[arg1];
    sub_0805B568(x - 8, y + 4, 0, 0, val + 0x3C0);
}

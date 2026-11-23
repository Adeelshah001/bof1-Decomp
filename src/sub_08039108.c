extern u8 D_02019B00[];
extern u8 D_02020FC0[];
extern u8 D_030040E4;
extern u8 D_030040EC;
extern u8 D_030045B0[];
extern const u8 D_080A6524[8];
void sub_080A0A68(void *, const void *, s32);

void sub_08039108(void) {
    u16 i;

    for (i = 0x100; i <= 0x1FF; i++) {
        D_02019B00[i] = D_02020FC0[i];
    }
}

u8 sub_080390CC(u8 arg0, u8 *arg1) {
    u8 masks[8] = {1, 2, 4, 8, 16, 32, 64, 128};
    return arg1[0x46E + (arg0 >> 3)] & masks[arg0 & 7];
}

s32 sub_08039088(u16 arg0, u8 *arg1) {
    u8 masks[8] = {1, 2, 4, 8, 16, 32, 64, 128};
    arg1[0x46E + (u8)(arg0 >> 3)] |= masks[arg0 & 7];
    return 0;
}

u16 sub_0803A584(void *arg0) {
    u16 val = *(u16 *)((u8 *)arg0 + 0x2C);
    if (D_030040E4 != 0 && D_030040EC == 0) {
        u8 flags = D_030045B0[0x25];
        if (flags & 0x10) {
            val = *(u16 *)((u8 *)arg0 + 2);
        }
        if (flags & 0x20) {
            val = -val;
        }
    }
    return val;
}

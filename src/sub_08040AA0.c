extern u8 D_03001790[];

u8 sub_08040A34(u8 arg1, u8 *arg2) {
    u8 i = 0;
    u8 found = 0;
    for (; i <= 3; i++) {
        u8 *p = D_03001790 + i * 0x30;
        if (p[0x29] != 0 && p[0x1E] == arg1) {
            found = 1;
            *arg2 = i;
        }
    }
    return found;
}

void sub_08040AA0(void) {
    u8 i = 0;
    u8 *base = D_03001790;
    u8 *unk2c_base = base + 0x2C;
    for (; i <= 3; i++) {
        *(u32 *)(unk2c_base + i * 0x30) = 0;
        base[i * 0x30 + 0x29] = 0;
    }
}

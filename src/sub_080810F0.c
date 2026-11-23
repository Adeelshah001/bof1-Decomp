extern const u8 D_08151FB0[][1];

u8 sub_08081F0C(void);

u8 sub_080810F0(u8 *arg0, u8 *arg1) {
    if (*(u16 *)(arg1 + 0xFA) <= 4) {
        arg0[0x48] = 0xA;
    } else if (arg0[0] != 0) {
        arg0[0x48] = 0;
    } else {
        u8 id = D_03004830[0x2E];
        s32 bit = id & 7;
        u8 mask = D_08151FB0[bit + 0x10][0];
        mask &= D_08151FB0[id >> 3][0];
        if (mask != 0) {
            arg0[0x48] = 8;
            return sub_08081F0C();
        }
        arg0[0x48] = mask;
    }
    return 2;
}

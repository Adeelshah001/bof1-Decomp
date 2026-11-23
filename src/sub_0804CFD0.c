void sub_0804BF28(void);

void sub_0804CFD0(u8 *arg0) {
    *(u16 *)(arg0 + 2) -= 0x100;
    *(u16 *)(arg0 + 0xA6) += 2;
}

void sub_0804CFE8(u8 *arg0) {
    u8 *state = D_03004830;
    if (*(u16 *)(state + 0x2A) == 0x1D0D) {
        *(u16 *)(arg0 + 2) = 0xC28;
        *(u16 *)(arg0 + 0xA6) += 2;
    }
}

void sub_0804CFB0(u8 *arg0) {
    u8 *state = D_03004830;
    if (*(u16 *)(state + 0x2A) == 0x1A0D) {
        *(u16 *)(arg0 + 0xA6) += 2;
    }
}

void sub_0804D010(u8 *arg0) {
    u8 *state = D_03004830;
    if (*(u16 *)(state + 0x2A) == 0x1E0D) {
        *(u32 *)(arg0 + 0x64) = (u32)sub_0804BF28;
        arg0[0x62] = 0xFF;
        *(u16 *)(arg0 + 0xA6) += 2;
    }
}

void sub_0800F8A4(u8 *);

void sub_08012610(void *arg0) {
    u8 *state = D_03004830;

    state[0x2A] = 0x10;
    state[0x2B] = 0x11;
    *(u32 *)((u8 *)arg0 + 0x68) += 2;
}

void sub_080125D4(u8 *arg0) {
    u8 *q = *(u8 **)(arg0 + 0x68);

    *(u16 *)0x0300413C = (q[2] | (q[3] << 8)) & 0x7FFF;
    *(s32 *)(arg0 + 0xE8) = *(s16 *)0x0300413C + 0x08221D40;
    *(u32 *)(arg0 + 0x68) += 4;
}

void sub_08012668(u8 *arg0) {
    u8 *base = (u8 *)0x03002AB0;
    u8 *p = arg0;

    if (*(u16 *)(base + 0x112) != 9) {
        sub_0800F8A4(p);
    } else {
        *(u32 *)(p + 0x68) += 2;
    }
}

void sub_08012598(u8 *arg0) {
    u8 *q = *(u8 **)(arg0 + 0x68);

    *(u16 *)0x0300413C = (q[2] | (q[3] << 8)) & 0x7FFF;
    *(s32 *)(D_03003420 + 0x68) = *(s16 *)0x0300413C + 0x08221D40;
    *(u8 **)(arg0 + 0x68) = q + 4;
}

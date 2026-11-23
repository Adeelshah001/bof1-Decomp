void sub_08019C90(s32);

void sub_08019C4C(void) {
    u8 *base = D_03004830;
    u32 timer = base[0x2C];
    timer--;
    base[0x2C] = timer;
    if ((u8)timer == 0) {
        u16 val = *(u16 *)(base + 0x10) & 3;
        if (val != 3) {
            sub_08019C90(val | 0x8400);
        } else {
            sub_08019C90(0x84DF);
        }
    }
}

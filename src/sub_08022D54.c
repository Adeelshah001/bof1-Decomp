extern u8 D_02020FC0[];
extern u8 D_020211C0[];
extern u8 D_03001864[];
void *sub_0803ED98(void);

void sub_08022AE0(void) {
    u32 val;
    u32 val2;

    val = D_03004830[0x41] - 1;
    D_03004830[0x41] = val;
    if (((u32)val << 24) == 0) {
        val2 = D_03004830[0x42] - 1;
        D_03004830[0x42] = val2;
        if (((u32)val2 << 24) == 0) {
            D_03004830[0x40] += 1;
        } else {
            D_03004830[0x41] = 1;
            D_03004830[0x40] -= 2;
        }
    }
}

void sub_08022A98(void) {
    u32 val;
    u32 bit;

    val = D_03004830[0x41] - 1;
    D_03004830[0x41] = val;
    bit = (u32)((s32)(s8)val << 24) >> 24;
    if (bit == 0) {
        D_03004830[0x41] = 8;
        D_020211C0[0] = bit;
        D_02020FC0[0] = bit;
        D_020211C0[1] = bit;
        D_02020FC0[1] = bit;
        *(u16 *)0x03001864 = 0x17;
        D_03004830[0x40]++;
    }
}

void sub_08022A4C(void) {
    u32 val;
    u32 bit;

    val = D_03004830[0x41] - 1;
    D_03004830[0x41] = val;
    bit = (u32)((s32)(s8)val << 24) >> 24;
    if (bit == 0) {
        D_03004830[0x41] = 8;
        *(u16 *)0x03001864 = bit;
        D_020211C0[0] = (u8)-1;
        D_02020FC0[0] = 0xFF;
        D_020211C0[1] = bit;
        D_02020FC0[1] = 0x7F;
        D_03004830[0x40]++;
    }
}

void sub_08022D54(void) {
    void *entity;
    u8 *base;
    u32 zero;

    entity = sub_0803ED98();
    if (entity != NULL) {
        base = (u8 *)entity;
        base += 0x3A;
        zero = 0;
        *base = 1;
        base = (u8 *)entity;
        base[0x3C] = 0x14;
        base[0x3B] = 0x14;
        base[0x54] = 0x40;
        base[0x55] = 4;
        *(u32 *)(base + 0x48) = zero;
        *(u32 *)(base + 0x44) = 0x28000;
        D_03004830[0x40]++;
    }
}

extern u8 D_0300169C[];
extern u8 D_03004830[];
extern u8 D_03004E94[];
extern u16 D_03002AB0[];
extern u16 D_0202DBD0[];
extern u16 D_030023E0[];
extern u8 D_03003420[];
extern u8 D_081DFD38[];

void sub_080008B8(void) {
    s8 state;
    u8 val;
    vu32 *dma3;
    u32 src;

    if (D_0300169C[0] != 0)
        return;

    state = (s8)D_03004830[0x2A];
    if (state != 0x20 && state != 0x17 && state != 0x1D) {
        D_03004E94[0] = 0;
    }
    if (D_03004E94[1] != 0) {
        dma3 = (vu32 *)0x040000D4;
        src = 0x020127A0;
        dma3[0] = src;
        dma3[1] = src + 0xFFFFF600;
        dma3[2] = 0x08000500;
        *(vu16 *)0x04000200 = 0x2003;
        *(vu16 *)0x04000004 = 0x18;
        val = D_03004E94[1];
        D_03004E94[0] = val;
        D_03004E94[1] = 0;
    }
}

void sub_080022A0(void *arg0) {
    u8 *base;
    u16 val1;
    u16 val2;
    u16 val3;

    base = arg0;
    val1 = D_03002AB0[1];
    val2 = D_03002AB0[3];

    *(u16 *)(base + 0x02) = val1;
    *(u16 *)(base + 0x46) = val1;
    *(u16 *)(base + 0x82) = val1;

    *(u16 *)(base + 0x06) = val2;
    *(u16 *)(base + 0x4A) = val2;
    *(u16 *)(base + 0x86) = val2;

    val3 = *(u16 *)(base + 0x06);
    *(u16 *)(base + 0x2C) = val3;

    *(u16 *)(base + 0x50) = 0;
    *(u8 *)(base + 0x4D) = 0;
}

void sub_08002CCC(void) {
    u16 *table;
    u16 entry;
    u16 masked;
    u8 byte_val;

    table = D_0202DBD0;
    entry = table[0xA4];

    if (entry & 0x8000) {
        D_03004830[0x36] = 0;
    }

    masked = entry & 0x7FFF;

    D_030023E0[0xA4] = masked;
    table[0xA1] = masked;

    table[3] = table[0x0B];
    table[5] = table[0x0D];

    byte_val = D_0202DBD0[0x2B9];
    D_0202DBD0[0x2AC] = byte_val;
}

void sub_08002EF4(void) {
    u8 *base;
    u8 *table;
    int i;
    u16 idx1;
    u16 val1;
    u16 idx2;
    u16 val2;

    base = D_03003420 + 0x24;
    table = D_081DFD38;

    for (i = 0x11; i >= 0; i--) {
        if (base[0x16] != 0 && base[0x19] == 0) {
            idx1 = *(u16 *)(base + 0x06);
            val1 = table[idx1] | (table[idx1 + 1] << 8);
            idx2 = *(u16 *)(base + 0x00) + val1;
            val2 = table[idx2] | (table[idx2 + 1] << 8);
            *(u16 *)(base + 0x04) = val2;
        }
        base += 0x80;
    }
}

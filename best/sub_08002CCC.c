extern u16 D_03002AB0[];
extern u16 D_0202DBD0[];
extern u8 D_03004830[];
extern u8 D_030023E0[];
extern u8 D_081DFD38[];
extern u32 D_03000814[];
extern vu32 D_040000D4[];
extern u8 D_0201AFC0[];
extern u8 D_02020FC0[];
extern u8 D_020211C0[];

void sub_080022A0(void *arg0) {
    u8 *base = (u8 *)arg0;
    u16 val1 = D_03002AB0[1];
    u16 val2 = D_03002AB0[3];

    *(u16 *)(base + 0x02) = val1;
    *(u16 *)(base + 0x46) = val1;
    *(u16 *)(base + 0x82) = val1;

    *(u16 *)(base + 0x06) = val2;
    *(u16 *)(base + 0x4A) = val2;
    *(u16 *)(base + 0x86) = val2;

    *(u16 *)(base + 0x2C) = *(u16 *)(base + 0x06);

    *(u16 *)(base + 0x50) = 0;
    *(u8 *)(base + 0x4D) = 0;
}

void sub_08002CCC(void) {
    u16 *table = (u16 *)D_0202DBD0;
    u16 entry = table[0xA4 * 2];
    u16 masked;

    if (entry & 0x8000) {
        D_03004830[0x36] = 0;
    }

    masked = table[0xA4 * 2] & 0x7FFF;

    *(u16 *)(D_030023E0 + 0xA4) = masked;
    table[0xA1 * 2] = masked;

    table[3] = table[0xB];
    table[5] = table[0xD];

    ((u8 *)table)[0x2AC] = ((u8 *)table)[0x2B9];
}

void sub_08002F4C(void) {
    u8 *table = D_081DFD38;
    u8 i;
    u8 *ent;
    u16 idx1;
    u16 val1;
    u16 idx2;
    u16 val2;

    for (i = 0; i <= 3; i++) {
        ent = (u8 *)D_03002AB0 + i * 0x124;
        if (ent[0x3A] != 0) {
            idx1 = *(u16 *)(ent + 0x2A);
            val1 = table[idx1] | (u16)(table[idx1 + 1] << 8);
            idx2 = (u16)(*(u16 *)(ent + 0x24) + val1);
            val2 = table[idx2] | (u16)(table[idx2 + 1] << 8);
            *(u16 *)(ent + 0x28) = val2;
        }
    }
}

void sub_080052E0(void) {
    u32 val = D_03000814[0];
    if ((val & 8) != 0) {
        vu32 *dma = (vu32 *)D_040000D4;
        u32 src = (u32)D_0201AFC0;
        dma[0] = src;
        dma[1] = (u32)D_02020FC0;
        dma[2] = 0x80000100u;
        (void)dma[2];
        src += 0x800000u;
        dma[0] = src;
        dma[1] = (u32)D_020211C0;
        dma[2] = 0x80000100u;
        (void)dma[2];
    }
}

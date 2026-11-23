extern u8 D_03002AB0[];
extern u32 D_03000814[];
extern u8 D_0201AFC0[];
extern u8 D_02020FC0[];
extern u8 D_020211C0[];
extern u8 D_03001620[];
extern u8 D_03001640[];
extern u8 D_03001678[];
extern u8 D_030016D0[];

void sub_080046D4(void);
s32 sub_08001770(s32);
s32 sub_08007468(s32, s32);

void sub_080022A0(void *arg0) {
    u8 *base = (u8 *)arg0;
    u16 v1 = *(u16 *)(D_03002AB0 + 2);
    u16 v2 = *(u16 *)(D_03002AB0 + 6);

    *(u16 *)(base + 2) = v1;
    *(u16 *)(base + 0x46) = v1;
    *(u16 *)(base + 0x82) = v1;

    *(u16 *)(base + 6) = v2;
    *(u16 *)(base + 0x50) = v2;
    *(u16 *)(base + 0x8C) = v2;

    v2 = *(u16 *)(base + 6);
    *(u16 *)(base + 0x2C) = v2;

    *(u16 *)(base + 0x50) = 0;
    *(u8 *)(base + 0x4D) = 0;
}

void sub_080052E0(void) {
    if (D_03000814[0] & 8) {
        vu32 *dma = (vu32 *)0x040000D4;
        dma[0] = (u32)D_0201AFC0;
        dma[1] = (u32)D_02020FC0;
        dma[2] = 0x80000100u;
        dma[0] = (u32)D_0201AFC0 + 0x800;
        dma[1] = (u32)D_020211C0;
        dma[2] = 0x80000100u;
    }
}

void sub_080055C8(void) {
    sub_080046D4();
    *(u16 *)D_03001620 = 9;
    *(u16 *)D_03001640 = 0x109;
    *(u16 *)D_030016D0 = 0x20B;
    *(u16 *)D_03001678 = 0x30B;
}

void sub_08005618(void) {
    if (sub_08001770(0x2C) == 0 && sub_08001770(0x24) != 0 && sub_08007468(0x9F8, 0x23CC) == 0) {
        u8 val = D_03002AB0[0x4C];
        if (val == 0) {
            D_03002AB0[0xB8] |= 4;
            D_03004830[0x2A] = 2;
            D_03004830[0x2B] = val;
        }
    }
}

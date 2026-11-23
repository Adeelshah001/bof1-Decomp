extern u8 D_03004620[];
extern u8 *D_03004760[];
extern u8 sub_0814C2A4[];
extern u8 D_0200BAA0[];
extern vu32 D_040000D4[];
extern u8 D_0814BAD4[];
extern u8 D_020210C0[];
extern u8 D_020212C0[];
extern u8 D_0814BCF4[];
extern u8 sub_0814C2F6[];

void sub_0805B404(s32);
void sub_0805D634(u8, u8 *);
void sub_08059978(void);
void sub_0805B308(void *);
void sub_0805A9FC(void);
void sub_0805B358(u32, u8, u8, u8, s32);

void sub_0806970C(void)
{
    u8 *p;
    sub_0805B404(1);
    p = D_03004620;
    p[7] = 0;
    p[2] = 0x12;
}

void sub_080696B4(void)
{
    u8 *p;
    u32 val;
    if (D_03004760[3][8] & 0x20) {
        p = sub_0814C2A4 + 0x38;
    } else {
        p = sub_0814C2A4 + 0x2C;
    }
    D_0200BAA0[0] = p[0];
    val = (u32)(p + 1);
    D_0200BAA0[1] = val;
    D_0200BAA0[2] = val >> 8;
    D_0200BAA0[3] = val >> 16;
    D_0200BAA0[4] = val >> 24;
    sub_0805D634(D_03004760[3][0xF], D_0200BAA0 - 0x80);
    sub_0805D634(D_03004760[3][0xE], D_0200BAA0 - 0x40);
}

void sub_08069680(void)
{
    vu32 *dma = D_040000D4;
    dma[0] = (vu32)D_0814BAD4;
    dma[1] = (vu32)D_020210C0;
    dma[2] = 0x80000030;
    dma[2];
    dma[0] = (vu32)D_0814BAD4;
    dma[1] = (vu32)D_020212C0;
    dma[2] = 0x80000030;
    dma[2];
}

s32 sub_0806913C(void)
{
    u8 *p;
    sub_08059978();
    sub_0805B308(D_0814BCF4 + 1);
    sub_0805A9FC();
    p = D_03004620;
    p[0xB1] = p[0xB6];
    sub_0805B358((u32)(sub_0814C2F6 + 0x92), p[0xB2], 0x10, 0, 2);
    p[3] = 6;
    return 0;
}

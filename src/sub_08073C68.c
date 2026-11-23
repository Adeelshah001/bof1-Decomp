extern u8 gEntityPool[];
extern u8 D_02004810[];

u32 sub_08073C68(void) {
    vu32 *dma = (vu32 *)0x040000D4;
    dma[0] = (u32)gEntityPool;
    dma[1] = (u32)D_02004810;
    dma[2] = 0x800005B0;
    return dma[2];
}

s32 sub_08073B9C(u8 *arg0) {
    s32 ret = 0;
    if ((*(u16 *)(arg0 + 0xF0) & 0x8050) == 0 && (*(u16 *)(arg0 + 0xDC) & 0x240) == 0) {
        ret = 1;
    }
    return ret;
}

extern s32 D_03000F84;
extern s32 D_03000F70;

void sub_08073B80(void) {
    if (D_03000F84 != 0) {
        D_03000F84 = 0;
        D_03000F70 = 0;
    }
}

extern const u16 D_082D5C24[][16];

void sub_08073B5C(s32 arg0) {
    const u16 *src = D_082D5C24[arg0];
    u16 *dst = (u16 *)0x050003E0;
    s32 i = 0xF;
    do {
        *dst++ = *src++;
        i--;
    } while (i >= 0);
}

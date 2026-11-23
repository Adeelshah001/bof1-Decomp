typedef struct {
    u32 unk0;
    u32 unk4;
    u16 *unk8;
    s32 unkC;
} Unk08150C68;

extern Unk08150C68 D_08150C68;
extern vu32 D_040000D4[];
extern s32 D_03004F40;
void sub_08073B80(void);
void sub_080739D0(s32 arg0);

void sub_08073790(void) {
    vu16 fillVal;
    s32 stride;
    vu16 *src;
    vu32 *dma;
    u16 *dst;
    s32 i;

    sub_08073B80();
    stride = D_08150C68.unkC;
    src = &fillVal;
    dma = D_040000D4;
    dst = D_08150C68.unk8;
    for (i = 0; i < 32; i++) {
        *src = 0x8040;
        dma[0] = (vu32)&fillVal;
        dma[1] = (vu32)dst;
        dma[2] = 0x81000020;
        dma[2];
        dst += stride;
    }
    sub_080739D0(1);
    D_03004F40 = 1;
}

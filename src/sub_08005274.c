extern void (*D_080F5828[])(void);
extern u8 D_0201AFC0[];
extern u8 D_02020FC0[];
extern u8 D_020211C0[];
extern vu32 REG_DMA3SAD[];

void sub_08005274(s32 index)
{
    vu32 *dma = REG_DMA3SAD;
    u8 *dest;
    u32 control;

    dma[0] = (u32)D_02020FC0;
    dest = D_0201AFC0;
    dma[1] = (u32)dest;
    control = 0x80000100;
    dma[2] = control;
    (void)dma[2];
    dma[0] = (u32)D_020211C0;
    dma[1] = (u32)(dest + 0x800);
    dma[2] = control;
    (void)dma[2];
    D_080F5828[index]();
}

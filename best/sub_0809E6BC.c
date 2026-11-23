typedef struct {
    u32 ident;
    u8 unk4;
    u8 pad5[0x0B - 0x05];
    u8 unkB;
} SoundInfo;

void sub_0809E6BC(void)
{
    SoundInfo *info = *(SoundInfo **)0x03007FF0;
    volatile u16 *dma = (volatile u16 *)0x040000BC;
    u32 d;

    d = info->ident - 0x68736D53;
    if (d > 1)
        return;
    if (--info->unk4 > 0)
        return;
    info->unk4 = info->unkB;
    if (*(volatile u32 *)&dma[4] & 0x02000000)
        *(volatile u32 *)&dma[4] = 0x84400004;
    if (*(volatile u32 *)&dma[10] & 0x02000000)
        *(volatile u32 *)&dma[10] = 0x84400004;
    dma[5] = 0x0400;
    dma[11] = 0x0400;
    dma[5] = 0xB600;
    dma[11] = 0xB600;
}

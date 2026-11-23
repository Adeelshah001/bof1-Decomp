typedef struct {
    const volatile u16 *source;
    u16 *destination;
    u32 control;
} DmaChannel;

extern u16 D_02019FC0[];
extern volatile u32 D_03001694;
extern u8 D_03004790[];

void sub_08068850(void)
{
    volatile u16 fill;
    volatile u16 *source;
    volatile DmaChannel *dma;
    u16 *destination = D_02019FC0;
    volatile u32 *flags = &D_03001694;
    s32 first = (s32)D_03004790;
    u8 zero = 0;
    s32 cursor = first + 0x60;

    do {
        *(u8 *)cursor = zero;
        cursor -= 0xC;
    } while (cursor >= first);

    source = &fill;
    *source = 0x140;
    dma = (volatile DmaChannel *)0x040000D4;
    dma->source = source;
    dma->destination = destination;
    dma->control = 0x81000C00;
    (void)dma->control;

    *flags |= 0x10000;
    *flags |= 0x20000;
    *flags |= 0x40000;
}

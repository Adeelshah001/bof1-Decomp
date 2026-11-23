typedef struct {
    const volatile u16 *source;
    u16 *destination;
    u32 control;
} DmaChannel;

typedef struct {
    u8 pad00[0x50];
    u8 unk50;
    u8 pad51[0x54 - 0x51];
    u8 unk54;
    u8 pad55[0xB8 - 0x55];
    u16 unkB8;
} Unk4E91C;

extern u16 D_02019FC0[];
extern volatile u32 D_03001694;

u8 sub_0804ECF0(Unk4E91C *);

void sub_0804E91C(Unk4E91C *arg0) {
    volatile u16 fill;
    u32 timer;
    u8 rem;

    timer = arg0->unk54;
    timer--;
    arg0->unk54 = timer;
    rem = timer;
    if (rem == 0) {
        arg0->unk54 = 4;
        if (sub_0804ECF0(arg0) != 0) {
            volatile u16 *source;
            volatile DmaChannel *dma;
            arg0->unkB8 |= 0x8000;
            arg0->unk50++;
            source = &fill;
            *source = 0;
            dma = (volatile DmaChannel *)0x040000D4;
            dma->source = source;
            dma->destination = D_02019FC0;
            dma->control = 0x81000800;
            (void)dma->control;
            D_03001694 |= 0x10000;
        }
    }
}

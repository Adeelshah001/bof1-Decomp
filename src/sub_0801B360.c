typedef struct {
    u8 pad00[0x88];
    u32 unk88;
} State2AB0;

typedef struct {
    const volatile void *source;
    void *destination;
    u32 control;
} DmaChannel;

extern State2AB0 D_03002AB0;
extern u8 D_030023DC;
extern u16 D_03004164;

void sub_0800312C(s32, s32);
void sub_080379D4(s32);
void sub_08001F80(s32, s32, s32);
void sub_08037A74(s32);
u8 sub_08019DBC(s32);

void sub_0801B3BC(void) {
    D_03002AB0.unk88++;
    D_03004830[0x2B]++;
}

void sub_0801B3F8(void) {
    sub_0800312C(0x10, 0x1A);
    sub_080379D4(0x24);
    D_03004830[0x2C] = 0x25;
    D_03004830[0x2B]++;
}

void sub_0801B360(void) {
    vu32 fill = 0;
    volatile DmaChannel *dma = (volatile DmaChannel *)0x040000D4;
    dma->source = &fill;
    dma->destination = (void *)0x06000000;
    dma->control = 0x85006000;
    (void)dma->control;
    sub_0800312C(0x10, 8);
    sub_08001F80(0x10, 0, 0);
    D_030023DC = 0xFF;
    D_03004830[0x2C] = 0x80;
    D_03004830[0x2B]++;
}

void sub_0801B424(void) {
    sub_08037A74(0x100);
    if (sub_08019DBC(6) == 0) {
        D_03004830[0x2C] = 0x2C;
        D_03004164 = 0x12C;
        D_03004830[0x2D] = 1;
        D_03004830[0x2B]++;
    }
}

typedef struct {
    u8 pad00[0x2A];
    u8 unk2A;
    u8 unk2B;
    u8 pad2C[0x31 - 0x2C];
    s8 unk31;
} Struct4830;

typedef struct {
    u32 vramOffset;
    s32 stride;
    s32 count;
    u32 src;
} StructF49C8;

extern StructF49C8 D_080F49C8[];

typedef struct {
    vu32 src;
    vu32 dst;
    vu32 cnt;
} DmaChannel;

void sub_0800359C(void) {
    Struct4830 *s = (Struct4830 *)D_03004830;

    s->unk2A = 0;
    s->unk2B = 0x10;
    do {
        if (s->unk31 != 0) {
            s->unk2B = 0;
        }
    } while (0);
}

void sub_080034C8(s32 arg0) {
    s32 i;
    u32 src = D_080F49C8[arg0].src;
    u32 dst = 0x06010000 + D_080F49C8[arg0].vramOffset;
    s32 step = D_080F49C8[arg0].stride << 5;

    for (i = 0; i < D_080F49C8[arg0].count; i++) {
        volatile DmaChannel *dma = (volatile DmaChannel *)0x040000D4;
        dma->src = src;
        dma->dst = dst;
        dma->cnt = (step >> 1) | 0x80000000;
        dma->cnt;
        src += step;
        dst += 0x400;
    }
}

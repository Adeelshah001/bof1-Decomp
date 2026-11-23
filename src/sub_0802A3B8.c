extern const u16 D_080A6334[16];
void sub_080A0A68(void *, const void *, s32);

typedef struct {
    vu32 src;
    vu32 dst;
    vu32 cnt;
} DmaChannel;

void sub_0802A3B8(void) {
    u16 buf[16];
    u16 i;
    volatile DmaChannel *dma;

    sub_080A0A68(buf, D_080A6334, sizeof(buf));
    i = 0;
    dma = (volatile DmaChannel *)0x040000D4;
    do {
        dma->src = (vu32)&buf[i];
        dma->dst = 0x06004000 + (i << 5);
        dma->cnt = 0x81000010;
        dma->cnt;
        i++;
    } while (i <= 0xF);
}

s32 sub_0802A400(s32 arg0, u16 arg1, s32 arg2) {
    u32 a = arg1 & 0xFF;
    u32 b = arg2 & 0xFF;
    return (u16)((arg1 & 0x100) << 2) + ((a >> 3) + ((b & 0xF8) << 2));
}

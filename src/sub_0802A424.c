u8 sub_08029A9C(u16 *, u16 *, u8 *, u8 *);
void sub_0802A52C(s32, u8, u16, u16);
void sub_080379D4(s32);

extern const u16 D_080A6334[16];
void sub_080A0A68(void *, const void *, s32);

extern u8 D_0202B1C0[];

typedef struct {
    vu32 src;
    vu32 dst;
    vu32 cnt;
} DmaChannel;

s32 sub_0802A400(s32 arg0, u16 arg1, u8 arg2) {
    return (u16)((arg1 & 0x100) << 2) + ((u8)arg1 >> 3) + ((arg2 & 0xF8) << 2);
}

void sub_0802A424(u8 *arg0, u16 arg1, u16 arg2) {
    u16 sp0;
    u16 sp2;
    u8 sp4;
    u8 sp5;
    u8 res;
    u8 old;

    sp0 = arg1;
    sp2 = arg2;
    res = sub_08029A9C(&sp0, &sp2, &sp4, &sp5);
    old = arg0[0xC5];
    arg0[0xC5] = sp5;
    if (res != 0 && sp5 != old) {
        sub_0802A52C(0, sp4, sp0, sp2);
        sub_080379D4(0x11);
    }
}

void sub_0802A3B8(void) {
    u16 buf[16];
    u16 i;
    volatile DmaChannel *dma;

    sub_080A0A68(buf, D_080A6334, sizeof(buf));
    i = 0;
    dma = (volatile DmaChannel *)0x040000D4;
    do {
        vu32 tmp;
        dma->src = (vu32)&buf[i];
        dma->dst = 0x06004000 + (i << 5);
        dma->cnt = 0x81000010;
        tmp = dma->cnt;
        i++;
    } while (i <= 0xF);
}

s32 sub_0802A38C(u16 *arg0, u16 *arg1) {
    *arg0 = (*arg0 & 0x1F00) >> 8;
    *arg1 = (*arg1 & 0xFF00) >> 3;
    return D_0202B1C0[*arg0 + *arg1] << 6;
}

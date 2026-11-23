u32 sub_08003A28(void) {
    vu32 *dma = (vu32 *)0x040000D4;
    dma[0] = 0x06010000;
    dma[1] = 0x020131B0;
    dma[2] = 0x80002000;
    dma[2];
    dma[0] = 0x06014000;
    dma[1] = 0x02000810;
    dma[2] = 0x80002000;
    return dma[2];
}

extern u16 D_03001670;
extern s32 D_03001694;
void sub_08000248(s32);

void sub_08003954(void) {
    D_03001670 &= 0xBFFF;
    D_03001694 &= ~8;
    sub_08000248(1);
}

extern u8 D_030023E0[];
void sub_08003770(void);
void sub_080029C8(void);

void sub_08003608(void) {
    if (*(u16 *)(D_030023E0 + 0xA4) == 0x18F || (s8)D_03004830[0x2A] == 0xC) {
        sub_08003770();
    } else {
        sub_080029C8();
    }
}

extern u8 D_03002AB0[][0x124];

void sub_080035C4(void) {
    u16 i = 0;
    do {
        u16 j = 0;
        do {
            D_03002AB0[i][j] = 0;
            j++;
        } while (j <= 0x123);
        i++;
    } while (i <= 7);
}

extern u8 D_030023E0[];
extern u8 D_0202DBD0[];
extern u8 D_030033FC[];
extern u8 D_03004830[];
s32 sub_08001770(s32);
void sub_080029C8(void);
void sub_08003420(s32);
void sub_08003764(void);
void sub_08003780(void);

u32 sub_08003790(void) {
    vu32 *dma = (vu32 *)0x040000D4;
    dma[0] = 0x020131B0;
    dma[1] = 0x06010000;
    dma[2] = 0x80002000;
    dma[2];
    dma[0] = 0x02000810;
    dma[1] = 0x06014000;
    dma[2] = 0x80002000;
    return dma[2];
}

void sub_080036F4(void) {
    if (*(u16 *)(D_030023E0 + 0xA4) != 0 || !(*(u8 *)(D_0202DBD0 + 0x2B8) & 2)) {
        if ((sub_08001770(0xC5) << 24) != 0) {
            sub_08003764();
            return;
        }
        if ((sub_08001770(0xC6) << 24) == 0) {
            sub_080029C8();
        }
    } else if (D_030033FC[0] != 0x29) {
        sub_08003420(0x29);
    }
}

void sub_080036B8(void) {
    s8 temp;
    if (*(u16 *)(D_030023E0 + 0xA4) != 0) {
        sub_080029C8();
        return;
    }
    temp = (s8)D_03004830[0x2A];
    if (temp == 0x17 || temp == 0x1D) {
        sub_08003764();
    }
    sub_080029C8();
}

void sub_08003664(void) {
    u16 *p = (u16 *)(D_030023E0 + 0xA4);
    if (*p == 0x198) {
        sub_08003420(0x2C);
        return;
    }
    if ((sub_08001770(0x94) << 24) != 0 || (sub_08001770(0x93) << 24) == 0 || *p != 0) {
        sub_080029C8();
        return;
    }
    sub_08003780();
    sub_08003420(0x11);
}

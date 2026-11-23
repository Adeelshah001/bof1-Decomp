void sub_0801970C(void);
extern u8 D_03002AB0[];
extern u8 D_03004830[];
extern u8 D_030023E0[];
extern u16 D_03004164;

void *sub_0801CC4C(void) {
    return (void *)(D_03002AB0 + 0x40);
}

void sub_0801CBC4(void) {
    D_03002AB0[0xB8] &= 0xFB;
    sub_0801970C();
}

void sub_0801CB8C(void *arg0) {
    u8 *p = (u8 *)arg0;
    D_03004830[0x2D] += 1;
    *(u32 *)(p + 0x68) += 2;
    if (*(u16 *)(D_030023E0 + 0xA4) == 0x1CE) {
        p[0x41] = (u8)((p[0x41] & 0x0F) | 0x20);
    }
}

void sub_0801CD5C(void) {
    if ((D_03004164 -= 1) == 0) {
        D_03004830[0x2C] = 0;
        D_03004830[0x2D] = 0;
        D_03004830[0x2B] += 1;
    }
}

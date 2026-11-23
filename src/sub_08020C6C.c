extern void (*D_080F86D8[])(void);
extern void (*D_080F86F0[])(void);
extern s16 D_03001864;
extern u8 D_030045B0[];

void sub_08021958(void);
void sub_0802198C(void);
void sub_08020CF0(void);

void sub_08020C48(void) {
    void (**table)(void) = D_080F86D8;
    u8 *base = D_03004830;
    table[(s8)base[0x2B]]();
}

void sub_08020C6C(void) {
    void (**table)(void) = D_080F86F0;
    u8 *base = D_03004830;
    table[(s8)base[0x2B]]();
}

void sub_08020C90(void) {
    u8 *state = D_03004830;
    if ((s8)state[0x2B] != 0) {
        sub_08021958();
    } else {
        state[0x2C] = 0;
        state[0x2D] = 0;
        state[0x2B]++;
        sub_0802198C();
    }
}

void sub_08020CC4(void) {
    D_03001864 = 0;
    D_03004830[0x2B]++;
    *(s32 *)(D_030045B0 + 0xC) = 0;
    sub_08020CF0();
}

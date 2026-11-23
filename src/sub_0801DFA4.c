extern u8 D_03004830[];
extern void (*D_080F7F28[])(void);
extern void (*D_080F7F14[])(void);
extern void (*D_080F7F3C[])(void);
extern void (*D_080F7EFC[])(void);

void sub_0801DF6C(void) {
    u8 *base = D_03004830;
    D_080F7F28[(s8)*(base + 0x2B)]();
}

void sub_0801DF3C(void) {
    u8 *base = D_03004830;
    if (*(s8 *)(base + 0x2B) >= 0) {
        D_080F7F14[(s8)*(base + 0x2B)]();
    }
}

void sub_0801DFA4(void) {
    u8 *base = D_03004830;
    if (*(s8 *)(base + 0x2B) >= 0) {
        D_080F7F3C[(s8)*(base + 0x2B)]();
    }
}

void sub_0801DF0C(void) {
    u8 *base = D_03004830;
    if (*(s8 *)(base + 0x2B) >= 0) {
        D_080F7EFC[(s8)*(base + 0x2B)]();
    }
}

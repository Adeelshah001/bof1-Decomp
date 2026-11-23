extern void (*D_080F8660[])(void);
extern void (*D_080F8684[])(void);
extern void (*D_080F8694[])(void);
extern void (*D_080F86B8[])(void);

void sub_08020BB8(void) {
    void (**table)(void) = D_080F8660;
    u8 *base = D_03004830;
    table[(s8)base[0x2B]]();
}

void sub_08020BDC(void) {
    void (**table)(void) = D_080F8684;
    u8 *base = D_03004830;
    table[(s8)base[0x2B]]();
}

void sub_08020C00(void) {
    void (**table)(void) = D_080F8694;
    u8 *base = D_03004830;
    table[(s8)base[0x2B]]();
}

void sub_08020C24(void) {
    void (**table)(void) = D_080F86B8;
    u8 *base = D_03004830;
    table[(s8)base[0x2B]]();
}

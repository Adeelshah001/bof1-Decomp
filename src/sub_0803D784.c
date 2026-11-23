extern u8 D_0202DBD0[];
extern void (*D_080FB850[])(void);
extern void (*D_080FB85C[])(void);
extern void (*D_080FB868[])(void);
extern void (*D_080FB874[])(void);

void sub_0803D75C(void) {
    void (**handlers)(void) = D_080FB850;
    u8 *state = D_0202DBD0;
    handlers[state[0x4FE]]();
}

void sub_0803D784(void) {
    void (**handlers)(void) = D_080FB85C;
    u8 *state = D_0202DBD0;
    handlers[state[0x4FE]]();
}

void sub_0803D7AC(void) {
    void (**handlers)(void) = D_080FB868;
    u8 *state = D_0202DBD0;
    handlers[state[0x4FE]]();
}

void sub_0803D7D4(void) {
    void (**handlers)(void) = D_080FB874;
    u8 *state = D_0202DBD0;
    handlers[state[0x4FE]]();
}

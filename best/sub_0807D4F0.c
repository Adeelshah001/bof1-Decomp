void sub_0807C8C0(void);
void sub_0807D7DC(void);
void sub_0807C814(void);
void sub_0807C86C(void);
void sub_0807D6C0(void);
void sub_0807D6E4(void);
void sub_0807D708(void);
void sub_0807D690(void *arg0, s32 arg1);

void sub_0807D590(void *arg0) {
    u8 *p = (u8 *)arg0;
    switch (p[0x4D]) {
        case 0:
            sub_0807C8C0();
            break;
        case 1:
            sub_0807D7DC();
            break;
    }
}

void sub_0807D5B0(void *arg0) {
    u8 *p = (u8 *)arg0;
    switch (p[0x4D]) {
        case 0:
            sub_0807C814();
            break;
        case 1:
            sub_0807C86C();
            break;
        case 2:
            sub_0807D6C0();
            break;
        case 3:
            sub_0807D6E4();
            break;
        case 4:
            sub_0807D708();
            break;
    }
}

void sub_0807D4F0(void *arg0) {
    u8 *p = (u8 *)arg0;
    s32 t;
    p[0x41] = 0x0E;
    p[0x4C] = 0x0A;
    *(u16 *)(p + 0x16) = 8;
    p[0x06] = 0;
    *(u16 *)(p + 0x1C) = 0xA0;
    *(u16 *)(p + 0x2A) = 0xDC;
    sub_080957AC(0x58A0);
    t = p[0xE8] ^ 5;
    sub_08037FC4(arg0, (((0 - t) | t) >> 0x1F) & 2);
}

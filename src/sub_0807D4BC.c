void sub_0807C8C0(void);
void sub_0807D7DC(void);
void sub_0807C814(void);
void sub_0807C86C(void);
void sub_0807D6C0(void);
void sub_0807D6E4(void);
void sub_0807D708(void);
void sub_08037FC4(void *arg0, s32 arg1);
void sub_080957AC(s32 arg0);
void sub_0807D690(void *arg0, s32 arg1);

void sub_0807D590(Entity *arg0) {
    switch (arg0->unk4D) {
        case 0:
            sub_0807C8C0();
            break;
        case 1:
            sub_0807D7DC();
            break;
    }
}

void sub_0807D5B0(Entity *arg0) {
    switch (arg0->unk4D) {
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
    p[0x41] = 0x0E;
    p[0x4C] = 0x0A;
    *(u16 *)(p + 0x16) = 8;
    p[0x06] = 0;
    *(u16 *)(p + 0x1C) = 0xA0;
    *(u16 *)(p + 0x2A) = 0xDC;
    sub_080957AC(0x58A0);
    sub_08037FC4(arg0, ((p[0xE8] ^ 5) == 0) << 1);
}

void sub_0807D4BC(void *arg0) {
    u8 *p = (u8 *)arg0;
    u8 *e;
    p[0x41] = 0x0A;
    p[0x54] = 0xA0;
    e = *(u8 **)(p + 0x6C);
    sub_08037FC4(arg0, (e[0x3C] == 0x54) ? 8 : 6);
    sub_0807D690(arg0, 0x12);
}

extern u8 D_03004F50[];
void sub_08038278(void *);
void sub_0807CF2C(void *);
void sub_0802B6D4(s32);
void sub_0807CC84(void *, s32);

void sub_0807BF60(void *arg0) {
    Entity *e = arg0;
    u8 v = *(u8 *)((u8 *)e + 0x4D);
    if (v == 0) {
        *(u8 *)((u8 *)e + 0x4D) = v + 1;
        *(u8 *)((u8 *)e + 0x61) = v;
        *(u16 *)((u8 *)e + 0x38) = 0xE0;
    }
    sub_08038278(e);
    if (*(u8 *)((u8 *)e + 6) & 0x80) {
        D_03004F50[0x5F] -= 1;
        sub_0807CF2C(e);
    }
}

void sub_0807BE88(void *arg0) {
    Entity *e = arg0;
    (*(u8 *)((u8 *)e + 0x4D)) += 1;
    *(u8 *)((u8 *)e + 0x61) = 0;
    *(u16 *)((u8 *)e + 0x38) = 0xE0;
    *(u16 *)((u8 *)e + 0x2A) = 0x17C;
    *(u16 *)((u8 *)e + 0x1C) = 0xA0;
    sub_0802B6D4(0x1DC);
    *(u8 *)((u8 *)e + 0x41) = 0x0E;
    *(u8 *)((u8 *)e + 0x54) = 2;
    sub_0807CC84(e, 0x58A0);
}

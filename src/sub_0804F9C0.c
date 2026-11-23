extern void (*D_080FD670[])(u8 *);
extern void (*D_080FD5A4[])(u8 *);
extern void sub_0804FDE4(u8 *);
extern void sub_0804FD6C(u8 *, s32);
extern void sub_0803EE6C(u8 *);

void sub_0804F988(u8 *object) {
    D_080FD670[object[0xCB]](object);
}
void sub_0804F9A4(u8 *object) {
    D_080FD5A4[object[0x50]](object);
}
void sub_0804F9C0(u8 *object) {
    *(u16 *)(object + 0x54) = 0;
    sub_0804FDE4(object);
}
void sub_0804F948(u8 *object) {
    sub_0804FD6C(object, 0);
    sub_0804FD6C(object, 1);
    sub_0804FD6C(object, 2);
    sub_0804FD6C(object, 3);
    if (object[0x3B] != 0x28)
        sub_0804FD6C(object, 4);
    sub_0803EE6C(object);
}

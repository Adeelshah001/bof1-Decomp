void sub_080869CC(u8 *);
u8 *sub_0807C638(u8 *, s32);

void sub_08086E6C(u8 *arg0) {
    u8 *p;
    u8 z;
    sub_080869CC(arg0);
    p = sub_0807C638(arg0, 3);
    p += 0x3C;
    z = 0;
    *p = 3;
    arg0[0x55] = z;
}

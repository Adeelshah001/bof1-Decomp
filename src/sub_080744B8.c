void sub_080744C8(u8 *);

void sub_080744B8(u8 *arg0, u8 arg1) {
    u8 zero = 0;
    arg0[2] = arg1;
    arg0[3] = zero;
    sub_080744C8(arg0);
}

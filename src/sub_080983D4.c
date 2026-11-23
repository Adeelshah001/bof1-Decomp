void sub_080983E4(void *arg0);

void sub_080983D4(void *arg0, s8 arg1) {
    ((u8 *)arg0)[0xF1] = arg1;
    sub_080983E4(arg0);
}

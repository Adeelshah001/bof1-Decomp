extern int saved_r5;
extern int r7_val;
extern int r6_val;
extern int r4_val;
extern int r5_val;

void sub_080FBC9A(void) {
    volatile int x = 0;
    (void)x;
}

void sub_080FBC9E(int arg1, int arg2, int arg3) {
    *(short *)(arg2 + arg1) = saved_r5;
}

int sub_080FBCA4(int arg1, int arg3) {
    int r5 = 0;
    short r4 = *(short *)(arg1 + r5);
    arg3 <<= 9;
    r4 = *(signed char *)(r7_val + r4);
    r4 = 0x080454AD;
    arg3 = arg1 << 1;
    return 0x08044421;
}

int sub_080FBCB4(int arg0, int arg1, int arg2) {
    unsigned int r3 = (unsigned int)__builtin_return_address(0);
    r7_val = r3 << 3;
    r6_val = *(unsigned char *)(r6_val + arg0);
    *(unsigned int *)(r3 + arg1) = arg2;
    arg2 = arg1 << 1;
    r7_val += 0x2E;
    r5_val = r5_val;
    r4_val = 0x0804452D;
    arg2 = *(unsigned short *)(r3 + r5_val);
    r7_val += 0;
    *(unsigned char *)(r3 + arg1) = arg1;
    r3 = arg2 << 1;
    *(unsigned short *)(r7_val + r4_val) = r4_val;
    return *(short *)(arg2 + arg1);
}

extern u8 D_03004F50[];

void sub_0807B248(void *arg0);
s32 sub_0807CA70(void *arg0);
void sub_08083BB4(void *arg0);
void sub_080877A4(void *arg0);

void sub_08087710(void *arg0) {
    u8 *p = arg0;
    u8 zero;
    u8 *q;

    q = *(u8 **)(p + 0x74);
    q = q + 0x4C;
    zero = 0;
    *q = 4;
    p[0x50]++;
    sub_08083BB4(arg0);
    D_03004F50[0x5D] = zero;
    if (sub_0807CA70(arg0) != 0) {
        sub_080877A4(arg0);
    } else {
        sub_0807B248(arg0);
    }
}

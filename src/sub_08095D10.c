void sub_08095D48(void *);
void sub_08095D10(void *arg0) {
    ((u8 *)arg0)[0x50]++;
    sub_08095D48(arg0);
}

void sub_08091D0C(void *);
void sub_08091D60(void *);
void sub_08095D80(void *);
void sub_08095E14(void *);

void sub_08095D48(void *arg0) {
    u8 v = ((u8 *)arg0)[0x4D];
    if (v == 2) {
        sub_08091D60(arg0);
    } else if (v > 2) {
        if (v == 3) {
            sub_08095E14(arg0);
        } else {
            sub_08091D0C(arg0);
        }
    } else if (v == 1) {
        sub_08095D80(arg0);
    } else {
        sub_08091D0C(arg0);
    }
}

void sub_0809568C(void *, s32);
void sub_08096E08(void *, s32, s32, s32);

void sub_08095CCC(void *arg0) {
    u8 *p = (u8 *)arg0;
    u8 v = p[0x54] - 1;
    p[0x54] = v;
    if (v == 0) {
        sub_0809568C(arg0, 0x10);
        p[0x4C] = 4;
        p[0x51]++;
        sub_08096E08(arg0, 0x14, 0xF78, 0x2F00);
    }
}

void sub_08095DD4(void *);

void sub_08095DB0(void *arg0, u8 arg1) {
    sub_0809568C(arg0, arg1);
    ((u8 *)arg0)[0x55] = ((u8 *)arg0)[0x54];
    sub_08095DD4(arg0);
}

void sub_08083484(u8 *);
void sub_08087E00(u8 *);
void sub_08087E0C(u8 *, s32);

void sub_08087DAC(u8 *arg0) {
    u8 *p = arg0 + 0x54;
    s32 v = *p - 1;
    *p = v;
    if ((v << 24) != 0) {
        if (!(*(vu8 *)p & 1)) {
            sub_08087E00(arg0);
        } else {
            sub_08087E0C(arg0, 0xE);
        }
    } else {
        u8 *q;
        sub_08083484(arg0);
        q = *(u8 **)(arg0 + 0x74);
        q[6] -= 0x26;
        arg0[0x4D] = 6;
        sub_08087E00(arg0);
    }
}

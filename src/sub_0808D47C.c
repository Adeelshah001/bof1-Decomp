extern u8 D_03004F50[];

void sub_0808D42C(u8 *);
void sub_0807B27C(u8 *);
void sub_08037FC4(u8 *, s32);
void sub_08083300(u8 *, s32);
void sub_0808D530(u8 *);
void sub_0808D574(u8 *);

void sub_0808D410(u8 *arg0, u8 arg1) {
    arg0[0x41] = arg1;
    (*(u8 **)(arg0 + 0x6C))[0x41] = arg1;
    sub_0808D42C(arg0);
}

void sub_0808D438(u8 *arg0) {
    u8 v = *(u8 *)(*(u8 **)(arg0 + 0x74) + 0x3A);
    if (v != 0) {
        sub_0807B27C(arg0);
    } else {
        D_03004F50[0x5D] = v;
        sub_08037FC4(arg0, 0);
        arg0[0x4C] = 2;
        arg0[0x4D] = v;
        sub_0807B27C(arg0);
    }
}

void sub_0808D47C(u8 *arg0) {
    s32 v = arg0[0x54] - 1;
    arg0[0x54] = (u8)v;
    if ((v << 24) == 0) {
        sub_08083300(arg0, 0x40);
        arg0[0x4D] = 6;
    }
    sub_0808D530(arg0);
}

void sub_0808D548(u8 *arg0) {
    u8 *p = arg0 + 0x54;
    u8 v = *p - 1;
    *p = v;
    if (v == 0) {
        p[-8] = 2;
        arg0[0x4D] = v;
    }
    sub_0808D574(arg0);
}

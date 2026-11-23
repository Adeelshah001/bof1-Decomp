void sub_0808D574(u8 *);

void sub_0808D548(u8 *arg0) {
    u8 *p = arg0 + 0x54;
    s32 t = *p - 1;
    u8 v;
    *p = t;
    v = t;
    if (v == 0) {
        p[-8] = 2;
        arg0[0x4D] = v;
    }
    sub_0808D574(arg0);
}

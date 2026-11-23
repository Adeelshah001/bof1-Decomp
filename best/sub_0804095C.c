void sub_0803FC58(void *);
void sub_08040844(void *);

void sub_0804095C(u8 *arg0) {
    s32 v;
    if (arg0[0x27] == 1) {
        v = *(u16 *)(arg0 + 0x1C) - 1;
        *(u16 *)(arg0 + 0x1C) = v;
        if ((v << 16) == 0) {
            sub_08040844(arg0);
            arg0[0x29] = 0;
            return;
        }
    }
    sub_0803FC58(arg0);
}

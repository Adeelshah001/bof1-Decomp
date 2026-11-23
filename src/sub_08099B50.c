void sub_08099C50(void *, s32);

void sub_08099B50(void *arg0) {
    u16 v;
    v = 0x160;
    *(u16 *)((u8 *)arg0 + 0x38) = v;
    v = 6;
    sub_08099C50(arg0, v);
}

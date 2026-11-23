void sub_080A5908(void *, void *);
void sub_080A5DB0(void *, void *);

void sub_080A5E94(s32 arg0, s32 arg1) {
    u32 sp0[4];
    u32 sp10[4];
    s32 sp20;
    s32 sp24;

    sp20 = arg0;
    sp24 = arg1;
    sub_080A5908(&sp20, sp0);
    sub_080A5908(&sp24, sp10);
    sub_080A5DB0(sp0, sp10);
}

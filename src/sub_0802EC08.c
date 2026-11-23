s32 sub_08037C98(u8 *arg0, s32 arg1);
u8 sub_0802BDC0(u8 *arg0);
void sub_0803273C(u8 *arg0, u16 *arg1, u16 *arg2);
void sub_0802A424(u8 *arg0, u16 arg1, u16 arg2);
void sub_0802EB98(u8 *arg0, s32 arg1);

s32 sub_0802EC08(u8 *arg0) {
    u16 sp0;
    u16 sp2;
    u16 v2;
    u16 v6;

    sub_08037C98(arg0, 0);
    if ((sub_0802BDC0(arg0) << 24) != 0) {
        v2 = *(u16 *)(arg0 + 2);
        *(u16 *)(arg0 + 0x82) = v2;
        v6 = *(u16 *)(arg0 + 6);
        *(u16 *)(arg0 + 0x86) = v6;
        if (--arg0[0xC3]) {
            sub_0803273C(arg0, &sp0, &sp2);
            sub_0802A424(arg0, sp0, sp2);
        } else {
            sub_0802EB98(arg0, 0);
        }
    }
    return 0;
}

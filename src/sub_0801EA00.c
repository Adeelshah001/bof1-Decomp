extern void sub_0802411C(s32 arg0, s32 arg1);

void sub_0801EA00(void) {
    u8 *state;
    u8 *p2a;
    u8 *p2b;
    u16 *ptr = (u16 *)0x03002AB0;
    if (ptr[3] <= 0xED5B) {
        sub_0802411C(0x2A20, 0x1C0);
        state = (u8 *)0x03004830;
        p2a = state + 0x2A;
        *p2a = 0;
        p2b = state + 0x2B;
        *p2b = 0;
    }
}

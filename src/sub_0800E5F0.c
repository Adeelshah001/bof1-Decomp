extern u8 D_030045B0[];
extern u16 D_0300084C[];
extern void sub_08035B50(void);
extern s32 sub_08038458(s32);
extern void sub_08004EA0(s32);

void sub_0800E564(void) {
    u16 val;
    D_030045B0[2] = 9;
    sub_08035B50();
    val = 0x96 << 1;
    D_0300084C[0] = val;
    D_03004830[0x2B]++;
}

void sub_0800E5F0(void) {
    s32 result;
    result = sub_08038458(1);
    if ((result << 24) != 0) {
        sub_08004EA0(0x81FB);
        D_03004830[0x2B]++;
    }
}

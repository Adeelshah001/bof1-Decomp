extern u8 D_030023E0[];
extern u8 D_03002AB0[];
extern u8 D_03004830[];

void sub_080391F4(s32, s32, s32, s32);
void sub_08024008(s32);

void sub_0801EE18(void) {
    u8 *base = D_030023E0;
    u16 *flag = (u16 *)(base + 0xA4);
    s32 mask;
    u8 val;
    if (*flag == 1) {
        sub_080391F4((s32)D_03002AB0, 0x40, 7, 0);
        sub_08024008(0x4A);
        val = D_03004830[0x2B];
        mask = 0x80;
        mask = -mask;
        D_03004830[0x2B] = val | mask;
    }
}

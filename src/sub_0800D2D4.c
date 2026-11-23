u8 sub_08001770(s32);
void sub_0800421C(s32, s32, s32);
extern u8 D_03002AB0[];
extern s16 D_03004114;
extern s16 D_03004120;

void sub_0800D2D4(void) {
    u8 val = sub_08001770(0x5E);
    u8 *p2AB0;

    if (val != 0) {
        goto zero;
    }
    p2AB0 = D_03002AB0;
    if (p2AB0[0x4C] == 0) {
    zero:
        D_03004114 = 0;
        return;
    }
    D_03004120 = val;
    sub_0800421C(0xB1, 0x1788, 0x56EC);
}

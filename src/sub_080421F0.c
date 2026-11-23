extern u8 D_03004410[];
extern u16 D_030016E0[];
extern u8 D_0300459C;

u8 sub_0805B040(s32);
void sub_080379D4(s32);
void sub_0805B404(s32);

s32 sub_080421F0(void) {
    u8 val = sub_0805B040(1);
    if (D_030016E0[3] & 2) {
        sub_080379D4(0x15);
        sub_0805B404(1);
        D_03004410[0xC] = 0;
        D_03004410[0xE] = 0;
    } else if (D_030016E0[3] & 1) {
        sub_080379D4(2);
        D_0300459C = val;
        D_03004410[0xE] = 4;
    }
    return 0;
}

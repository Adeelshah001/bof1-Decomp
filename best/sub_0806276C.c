extern u16 D_030016E0[];
extern u8 D_03004620[];

s32 sub_080379D4(s32);
s32 sub_0805B404(s32);
s32 sub_08067C50(s32, s32);
s32 sub_08067E38(s32, s32);
s32 sub_08068B00(void);

s32 sub_0806276C(void) {
    u16 val;

    sub_08067E38(2, 1);
    val = D_030016E0[3];
    if (val & 1) {
        sub_080379D4(2);
        D_03004620[3] = 4;
    } else {
        if (val & 2) {
            sub_080379D4(3);
            D_03004620[7] = (u8)(val & 1);
            D_03004620[2] = 6;
            sub_0805B404(1);
        } else if (val & 4) {
            sub_080379D4(0x15);
            return sub_08068B00();
        }
    }
    sub_08067C50(0x7C, 0x25C);
    return 0;
}

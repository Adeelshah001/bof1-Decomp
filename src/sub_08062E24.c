void sub_080379D4(s32);
void sub_0805B404(s32);
s32 sub_08062B50(s32);
s32 sub_08068B00(void);

extern u16 D_030016E0[];
extern u8 D_03004620[];

s32 sub_08062E24(void) {
    u16 bit = D_030016E0[3] & 4;
    if (bit != 0) {
        sub_080379D4(0x15);
        return sub_08068B00();
    }
    if (D_030016E0[3] & 2) {
        sub_080379D4(3);
        sub_0805B404(2);
        D_03004620[2] = 8;
        D_03004620[3] = 0;
        D_03004620[7] = 0;
        return 0;
    }
    if (D_030016E0[3] & 1) {
        sub_080379D4(2);
        sub_0805B404(2);
        return sub_08062B50(0);
    }
    return 0;
}

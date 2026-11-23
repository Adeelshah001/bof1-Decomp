extern u16 D_030016E0[];
extern u8 D_03004410[];

void sub_080379D4(s32);
u8 sub_0805B040(s32);
void sub_0805B404(s32);
void sub_080675B8(s32);

s32 sub_08040D54(void) {
    u8 r2 = sub_0805B040(2);

    if (D_030016E0[3] & 2) {
        sub_080379D4(3);
        sub_080675B8(0);
        sub_0805B404(2);
        D_03004410[0xA] = 2;
        return 0;
    }
    if (D_030016E0[3] & 1) {
        if (r2 == 1) {
            sub_080379D4(3);
            sub_080675B8(0);
            sub_0805B404(2);
            D_03004410[0xA] = 2;
        } else {
            sub_080379D4(2);
            D_03004410[0xA] = 0xE;
        }
    }
    return 0;
}

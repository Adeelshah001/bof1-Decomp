s32 sub_0805A9FC(void);
void sub_080379D4(s32);
s32 sub_08068B0C(void);
void sub_08059978(void);
void sub_0805B26C(void);
void sub_0805B3F4(s32);
void sub_080675B8(s32);
void sub_08067314(s32);

extern u16 D_030016E0[];
extern u8 D_03004620[];

s32 sub_08063004(void) {
    if (sub_0805A9FC() != 0) {
        u16 bit = D_030016E0[3] & 4;
        if (bit != 0) {
            sub_080379D4(0x15);
            return sub_08068B0C();
        }
        if (D_030016E0[3] & 3) {
            sub_080379D4(2);
            sub_08059978();
            sub_0805B26C();
            sub_0805B3F4(1);
            sub_080675B8(4);
            sub_08067314(2);
            D_03004620[2] = 8;
            D_03004620[3] = 0;
            D_03004620[7] = 0;
        }
    }
    return 0;
}

extern u8 D_03004760[];
extern u8 D_03004620[];
extern u8 D_030023DC[];
extern u16 D_030016E0[];
extern s32 (*D_08100E20[])(void);
extern s32 (*D_08100DEC[])(void);
extern s32 (*D_08100EF8[])(void);
extern u8 sub_0805B040(s32);
extern s32 sub_0805C934(u8);
extern void sub_080379D4(s32);
extern void sub_0805CA64(void);
extern s32 sub_08068AE8(void);
extern void sub_0805F040(void);
extern u16 sub_0805B1F4(void);

s32 sub_08061D48(void) {
    return D_08100E20[D_03004760[0x19] >> 1]();
}
s32 sub_08061C64(void) {
    u8 selection;
    if (D_030023DC[0] != 1) {
        selection = sub_0805B040(0);
        if (2 & D_030016E0[3]) {
            sub_080379D4(3);
            sub_0805CA64();
            return sub_08068AE8();
        }
        if (sub_0805C934(selection) != 0)
            D_03004620[0] = selection;
    }
    return 0;
}
s32 sub_08061C34(void) {
    s32 result = D_08100DEC[D_03004620[3] >> 1]();
    sub_0805F040();
    return result;
}
s32 sub_08061EB4(void) {
    if (D_03004620[3] != 0 && sub_0805B1F4() != 0 && sub_0805B1F4() != 3)
        return 0;
    return D_08100EF8[D_03004620[3] >> 1]();
}

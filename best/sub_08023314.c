extern u8 D_03003F98[];
extern u8 D_03003F9C[];
extern u16 D_03004114[];
extern u8 D_03004830[];
extern s8 sub_08023374(void);

s32 sub_08023314(void) {
    u8 zero;
    u8 result;
    s32 extended;
    zero = 0;
    D_03004114[0] = zero;
    if ((D_03003F9C[0] & 0x80) == 0) {
        D_03004830[0x4D] = 0x30;
        D_03003F9C[0] = 0x80;
        D_03004830[0x3F] = 2;
        D_03004830[0x40] = 2;
        D_03004830[0x41] = zero;
        D_03003F98[0] |= 0x40;
        extended = 0;
    } else {
        result = sub_08023374();
        extended = (u32)result;
        D_03004114[0] = (u16)extended;
    }
    return extended;
}

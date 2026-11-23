// external data
extern const u8 D_03004620[];
extern const u8 D_03004760[];
extern const u32 D_08100E2C[];
extern const u32 D_08100E54[];
extern const u32 D_08100E5C[];
extern const u32 D_08100E64[];
// function prototypes
s32 sub_080A0770(s32);
s32 sub_08067C50(s32, s32);
// matched functions
s32 sub_08061DB8(void) {
    const u32 *tbl = D_08100E2C;
    u8 *p = (u8 *)D_03004620;
    s32 res = sub_080A0770((s32)tbl[(p[3] >> 1)]);
    sub_08067C50(0xFA, 0x25A);
    return res;
}

s32 sub_08061DEC(void) {
    const u32 *tbl = D_08100E54;
    u8 *p = (u8 *)D_03004760;
    return sub_080A0770((s32)tbl[(p[0x19] >> 1)]);
}

s32 sub_08061E0C(void) {
    const u32 *tbl = D_08100E5C;
    u8 *p = (u8 *)D_03004760;
    return sub_080A0770((s32)tbl[(p[0x19] >> 1)]);
}

s32 sub_08061E2C(void) {
    const u32 *tbl = D_08100E64;
    u8 *p = (u8 *)D_03004620;
    return sub_080A0770((s32)tbl[(p[3] >> 1)]);
}

extern u8 D_03004620[];
extern s32 (*D_0814C17C[])(void);
extern s32 (*D_0814C194[])(void);
extern s32 (*D_0814C1D0[])(void);
extern s32 (*D_0814C20C[])(void);

s32 sub_08068C98(void) {
    return D_0814C17C[D_03004620[3] >> 1]();
}
s32 sub_08068CB8(void) {
    return D_0814C194[D_03004620[3] >> 1]();
}
s32 sub_08068D34(void) {
    return D_0814C1D0[D_03004620[3] >> 1]();
}
s32 sub_08068D54(void) {
    return D_0814C20C[(0x7F & D_03004620[3]) >> 1]();
}

extern u8 D_03004620[];
extern s32 (*D_0814C23C[])(void);
extern u16 D_0202DBD0[][2];
extern volatile u32 D_040000D4[];
extern u8 D_0201CFC0[];
extern void sub_08066B54(void);
extern s32 sub_08066C34(void);

s32 sub_08068E3C(void) {
    return D_0814C23C[D_03004620[3] >> 1]();
}
s32 sub_08068E5C(void) {
    s32 result;
    u8 *state = D_03004620;
    if ((D_0202DBD0[0x81][state[0xB6]] & 0xF00) == 0)
        result = 1;
    else
        result = 0;
    return result;
}
s32 sub_08068E10(void) {
    s32 result;
    u8 *state = D_03004620;
    u8 initial = state[7];
    if (initial == 0) {
        state[0xB2] = initial;
        sub_08066B54();
        state[7] = 0xFF;
        result = 0;
    } else {
        result = sub_08066C34();
    }
    return result;
}
void sub_08068E8C(void) {
    D_040000D4[0] = 0x06000000;
    D_040000D4[1] = (u32)D_0201CFC0;
    D_040000D4[2] = 0x80002000;
    (void)D_040000D4[2];
}

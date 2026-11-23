extern u8 D_03004620[], D_0300169C[], D_030045B0[];
extern u8 D_0814BC5A[], D_0814C438[];
extern s32 (*D_0814C170[])(void);
extern s32 (*D_0814C234[])(void);
extern void sub_08059978(void);
extern void sub_0805B308(void *);
extern void sub_0805B358(void *, s32, s32, s32, s32);
extern s32 sub_08063BE4(void);
extern void sub_08067C50(s32, s32);
extern void sub_08069728(void);

s32 sub_08068C64(void)
{
    s32 result;
    if (D_0300169C[0] == 0)
        result = D_0814C170[D_03004620[3] >> 1]();
    else
        result = 0;
    return result;
}

s32 sub_08068CD8(void)
{
    s32 result;
    u8 *state = D_03004620;
    u8 initial = state[7];
    if (initial == 0) {
        u8 *base;
        sub_08059978();
        sub_0805B308(D_0814BC5A);
        sub_0805B358(D_0814C438, 0, 1, 0, 2);
        base = D_030045B0;
        base[0x5A] = initial;
        sub_08067C50(0x7C, 0x25C);
        state[7] = 0xFF;
        result = 0;
    } else {
        result = sub_08063BE4();
    }
    return result;
}

s32 sub_08068D78(void)
{
    s32 result;
    if (D_0300169C[0] == 0)
        result = D_0814C234[D_03004620[3] >> 1]();
    else
        result = 0;
    return result;
}

s32 sub_08068B40(void)
{
    u8 *state = D_03004620;
    state[6] = 0;
    state[0] = 0;
    sub_08069728();
    state[2] = 0x12;
    state[7] = 0;
    return 0;
}

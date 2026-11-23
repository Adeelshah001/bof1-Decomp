extern u8 D_03004620[];
extern u8 D_0300169C[];
extern u8 D_030045B0[];
extern s32 (*D_0814C14C[])(void);
extern u8 D_0814BCBE[];
extern u8 D_0814C438[];
extern void sub_08059978(void);
extern void sub_0805B308(void *);
extern void sub_0805B358(void *, s32, s32, s32, s32);
extern s32 sub_08062478(void);
extern void sub_08067C50(s32, s32);
extern void sub_080627E0(void);
extern s32 sub_08062984(void);
extern void sub_080621C0(void);
extern s32 sub_080622B0(void);

s32 sub_08068C30(void) {
    s32 result;
    if (D_0300169C[0] == 0)
        result = D_0814C14C[D_03004620[3] >> 1]();
    else
        result = 0;
    return result;
}
s32 sub_08068C0C(void) {
    s32 result;
    if ((D_03004620[7] & 0x80) == 0) {
        sub_080627E0();
        result = 0;
    } else {
        result = sub_08062984();
    }
    return result;
}
s32 sub_08068B8C(void) {
    s32 result;
    u8 *state = D_03004620;
    u8 initial = state[7];
    if (initial == 0) {
        u8 *base;
        sub_08059978();
        sub_0805B308(D_0814BCBE + 1);
        sub_0805B358(D_0814C438, 0, 1, 0, 2);
        base = D_030045B0;
        base[0x5A] = initial;
        sub_08067C50(0x7C, 0x25C);
        state[7] = 0xFF;
        result = 0;
    } else {
        result = sub_08062478();
    }
    return result;
}
s32 sub_08068B60(void) {
    s32 result;
    u8 *state = D_03004620;
    if ((state[7] & 0x80) == 0) {
        sub_080621C0();
        state[7] = 0xFF;
        result = 0;
    } else {
        result = sub_080622B0();
    }
    return result;
}

extern u16 D_0300168C;
extern u16 D_030016A8;
extern u8 *D_03004154;
extern u16 D_0300413C;
extern const s8 D_080F8700[];

void sub_080379D4(s32);
void sub_08021A24(void);
s32 sub_08020A30(s32, s16);

void sub_08021A00(u8 arg0) {
    u8 *state = D_03004830;
    u8 *p = state + 0x2B;
    u8 zero = 0;

    *p = arg0;
    state[0x2C] = zero;
    sub_080379D4(0xF0);
    sub_08021A24();
}

void sub_08021A28(s32 arg0, s16 arg1) {
    D_03004830[0x2C] = 0;
    D_0300168C = 0x3E41;
    D_030016A8 = 0x1000;
    sub_08020A30((0x180000 | (arg0 << 24)) >> 16, arg1);
    *(u16 *)(D_03004154 + 0xB8) = arg1;
}

void sub_080219B8(void) {
    u8 *state = D_03004830;
    s8 *ptr = (s8 *)(state + 0x2D);
    s32 val;

    val = *ptr + 1;
    D_0300413C = val;
    if (val > 3) {
        D_0300413C = 0;
    }
    *ptr = D_0300413C;
    sub_08021A00(2);
}

void sub_0802198C(void) {
    u8 *state = D_03004830;
    u8 *ptr = state + 0x2D;
    u8 zero = 0;

    *ptr = zero;
    state[0x2B] = 1;
    state[0x2C] = zero;
    sub_080379D4(0xF0);
    sub_08021A24();
}

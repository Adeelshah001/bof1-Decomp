typedef struct {
    u8 pad00[0x2B];
    u8 unk2B;
    u8 unk2C;
    u8 unk2D;
} ScriptState21;

extern u16 D_0300168C;
extern u16 D_030016A8;
extern Entity *D_03004154;
extern u16 D_0300413C;
extern const s8 D_080F8700[];

void sub_080379D4(s32);
void sub_08021A24(void);
void sub_08021A00(s32, s16);
s32 sub_08020A30(s32, s16);

void sub_08021A28(s32 arg0, s16 arg1) {
    ((ScriptState21 *)D_03004830)->unk2C = 0;
    D_0300168C = 0x3E41;
    D_030016A8 = 0x1000;
    sub_08020A30((0x180000 | (arg0 << 24)) >> 16, arg1);
    *(u16 *)((u8 *)D_03004154 + 0xB8) = arg1;
}

void sub_080219B8(void) {
    u16 *p13C = &D_0300413C;
    u8 *state = D_03004830;
    s8 *ptr = (s8 *)(state + 0x2D);

    *p13C = *ptr + 1;
    if ((s16)*p13C > 3) {
        *p13C = 0;
    }
    *ptr = *p13C;
    sub_08021A00(2, D_080F8700[*ptr * 2] >> 8);
}

void sub_0802198C(void) {
    ScriptState21 *state = (ScriptState21 *)D_03004830;
    u8 zero = 0;

    state->unk2D = zero;
    state->unk2B = 1;
    state->unk2C = zero;
    sub_080379D4(0xF0);
    sub_08021A24();
}

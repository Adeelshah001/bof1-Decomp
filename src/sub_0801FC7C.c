extern u16 D_03004114;
extern u8 D_03002AB0[];
extern u8 D_030023E0[];

typedef struct {
    u8 pad00[0x18];
    u8 *unk18;
} Unk23E0;

typedef struct {
    u8 pad00[0x2B];
    s8 unk2B;
    u8 unk2C;
} ScriptState1F;

void func_0802002C(void) {
    D_03004114 = 1;
}

void sub_0802016C(void) {
    u8 *state = D_03004830;
    if (--state[0x2C] == 0) {
        u8 *p = D_03002AB0;
        p[0xB8] &= ~8;
        (*(u32 *)(p + 0x88))++;
        state[0x2B]++;
    }
}

void sub_0801FCAC(void) {
    u8 *state;
    ((Entity *)D_03003420)->unk68++;
    ((Unk23E0 *)D_030023E0)->unk18[0x55] = 0;
    state = D_03004830;
    state[0x2C] = 0x78;
    state[0x2B]++;
}

void sub_0801FC7C(void) {
    ((Entity *)D_03003420)->unk68++;
    ((Unk23E0 *)D_030023E0)->unk18[0x55] = 1;
    ((ScriptState1F *)D_03004830)->unk2B |= ~0x7F;
}

extern u16 D_03000854;
extern u8 D_030023DC[];
extern s16 D_030033D4;
extern u8 D_030033D8;
extern u8 D_03002AB0[];

void sub_080446F4(void);
void sub_08048228(void);
void sub_08005274(s32);
void sub_0800312C(s32, s32);
void sub_08001F80(s32, s32, s32);
void sub_0802028C(void);

typedef struct {
    u8 pad00[0x2A];
    u8 unk2A;
    u8 unk2B;
    s8 unk2C;
    s8 unk2D;
} ScriptState;

void sub_0801FD94(void) {
    u16 timer;

    if (D_03000854 == 0x708) {
        sub_080446F4();
        sub_08048228();
        sub_08005274(0xA);
    }
    timer = D_03000854 - 1;
    D_03000854 = timer;
    if (D_030023DC[0] != 1 && timer == 0) {
        D_030033D4 = -8;
        sub_0800312C(0x10, 0);
        sub_08001F80(0, 0, 0);
        D_03004830[0x2B]++;
    }
}

void sub_0801FE04(void) {
    sub_08005274(0xB);
    sub_0800312C(0x10, 2);
    ((ScriptState *)D_03004830)->unk2D = 1;
    D_03004830[0x2B]++;
}

void sub_0801FE30(void) {
    if (((ScriptState *)D_03004830)->unk2D != 0) {
        sub_0802028C();
    }
    if (D_030023DC[0] != 1) {
        D_030033D8 = 3;
    }
}

void sub_0801FE64(void) {
    ((ScriptState *)D_03004830)->unk2A = 1;
    ((ScriptState *)D_03004830)->unk2B = 0;
    D_03002AB0[0xB8] |= 4;
}

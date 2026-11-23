extern u8 D_03002AB0[];
extern u8 D_03004114[];
extern u8 D_030045B0[];
extern u8 D_03004830[];

void sub_08024008(s32);
u8 sub_08001770(s32);
void sub_08037A74(s32);
s32 sub_08005090(s32, s32);

typedef struct {
    u8 pad00[0x2A];
    u8 unk2A;
    s8 unk2B;
    u8 unk2C;
    u8 unk2D;
} ScriptState;

void sub_0801D120(void) {
    if (D_03002AB0[2] == 0x78) {
        sub_08024008(0x42);
    } else {
        sub_08024008(0x44);
    }
    ((ScriptState *)D_03004830)->unk2B |= ~0x7F;
    ((ScriptState *)D_03004830)->unk2C = 0xE0;
    ((ScriptState *)D_03004830)->unk2D = 1;
    D_030045B0[0x40] = 0x34;
}

void sub_0801D7AC(void) {
    u8 res;
    u8 *state;

    res = sub_08001770(0xD7);
    if (res != 0) {
        *(u16 *)D_03004114 = 0;
        return;
    }
    if (*(u16 *)(D_03002AB0 + 6) == 0x8DDC) {
        D_03002AB0[0xB8] |= 4;
        state = D_03004830;
        state[0x2A] = 4;
        state[0x2B] = res;
        sub_08037A74(0x800);
    }
    *(u16 *)D_03004114 = res;
}

s32 sub_08026B74(void *arg0) {
    u8 *p = arg0;
    if (sub_08005090(0x1A78, 0xD97C) == 0 || sub_08005090(0x1A88, 0xD97C) == 0) {
        D_03004830[0x3F] = 0x19;
        D_03004830[0x40] = 0;
        p[0xB8] |= 0x44;
    }
    *(u16 *)D_03004114 = 0;
    return 0;
}

void sub_0800D0F4(void) {
    u8 res;
    u8 *state;

    if (D_03002AB0[0x61] != 0) {
        *(u16 *)D_03004114 = 0;
        return;
    }
    res = sub_08001770(0x5C);
    if (res != 0) {
        *(u16 *)D_03004114 = 0;
        return;
    }
    D_03002AB0[0xB8] |= 4;
    state = D_03004830;
    state[0x2A] = 6;
    state[0x2B] = res;
    *(u16 *)D_03004114 = res;
}

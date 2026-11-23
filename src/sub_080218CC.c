extern u8 D_03001698;

void sub_0800518C(s16, s16, s16);
void sub_08021A28(s32, s32);
void sub_08040A74(s32);
void sub_080073C8(s32);

typedef struct {
    u8 pad00[0x2A];
    u8 unk2A;
    u8 unk2B;
    s8 unk2C;
    u8 unk2D;
} ScriptState;

void sub_08021864(void)
{
    if (((ScriptState *)D_03004830)->unk2C < 0) {
        ((ScriptState *)D_03004830)->unk2A = 8;
        ((ScriptState *)D_03004830)->unk2B = 0;
    }
}

void sub_0802188C(void)
{
    u8 *state;
    u8 *timer;
    u8 zero;

    sub_0800518C(0, 0xAA8, 0x9AC);
    D_03001698 = 0x10;
    state = D_03004830;
    timer = state + 0x2C;
    zero = 0;
    *timer = zero;
    timer[1] = zero;
    state[0x2B]++;
}

void sub_08021834(void)
{
    u8 *state = D_03004830;
    s8 timer = state[0x2C];

    if (timer < 0) {
        sub_08021A28(1, 0x82);
        state[0x2B]++;
    }
}

void sub_080218CC(void)
{
    sub_08040A74(2);
    sub_08021A28(1, 0x84);
    sub_080073C8(0x1E);
    sub_080073C8(0x1F);
    sub_080073C8(0x20);
    D_03004830[0x2B]++;
}

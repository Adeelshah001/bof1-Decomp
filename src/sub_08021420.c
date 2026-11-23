extern u8 D_030023DC;
extern u16 D_0300168C;
extern u16 D_030016A8;

void sub_08021A28(s32, s32);
void sub_08003378(s32);
void sub_0803D3B8(s32);
void sub_0800518C(s16, s16, s16);

void sub_080214CC(void)
{
    u8 *state = D_03004830;
    s8 timer = state[0x2C];

    if (timer < 0) {
        state[0x2A] = 5;
        state[0x2B] = 0;
    }
}

void sub_0802149C(void)
{
    u8 *state = D_03004830;

    if (state[0x2D] & 8) {
        sub_08021A28(1, 0x74);
        state[0x2B]++;
    }
}

void sub_08021454(void)
{
    if (D_030023DC != 1) {
        D_0300168C = 0x1E41;
        D_030016A8 = 0x1010;
        sub_08003378(0x2C);
        D_03004830[0x2B]++;
    }
}

void sub_08021420(void)
{
    u8 *state;

    sub_0803D3B8(3);
    sub_0800518C(0x198, 0x588, -0x7214);
    state = D_03004830;
    state[0x2D] = 0;
    state[0x2B]++;
}

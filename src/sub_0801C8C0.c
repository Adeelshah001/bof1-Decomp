typedef struct {
    u8 pad00[0x204];
    u16 items[65];
} Inventory1C8C0;

typedef struct {
    u8 pad00[0x2B];
    s8 stage[3];
} ScriptState1C888;

extern Inventory1C8C0 D_0202DBD0;
u8 sub_0805CF40(u16, u16 *);
void sub_08019B5C(s32);
void sub_08019B78(s32);

void sub_0801C8B0(void)
{
    D_03004830[0x2D]++;
}

void sub_0801C8C0(void)
{
    u16 slot;

    sub_0805CF40(0x171, &slot);
    D_0202DBD0.items[slot] = 0;
    sub_08019B5C(6);
}

void sub_0801C888(void)
{
    ScriptState1C888 *state = (ScriptState1C888 *)D_03004830;
    s8 *phase = &state->stage[2];

    if (*phase == 3) {
        *phase = 0;
        phase--;
        *phase = 0x30;
        phase--;
        (*(u8 *)phase)++;
    }
}

void sub_0801C8F4(void)
{
    sub_08019B78(0x407);
}

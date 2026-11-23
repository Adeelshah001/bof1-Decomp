extern u8 D_030045B0[];
extern u8 D_03001698;
extern u8 D_03001674;
extern u8 D_0300166C;
extern u8 D_030016A4;
extern u8 D_0202DBD0[];

void sub_0800518C(s16, s16, s16);
u8 sub_0801D9C0(s32, s32, s32);
u8 sub_0805CF40(u16, u16 *);

typedef struct {
    u8 pad00[0x2B];
    s8 step;
} ScriptStepFlags;

typedef struct {
    u8 pad00[0x204];
    u16 slots[65];
} ItemSlots;

void sub_0801DC94(u8 value)
{
    D_030045B0[0x40] = value;
    D_03004830[0x2B]--;
}

void sub_0801DC60(s16 a, s16 b, s16 c)
{
    if (sub_0801D9C0(a, b, c) == 0) {
        ScriptStepFlags *state = (ScriptStepFlags *)D_03004830;
        state->step |= ~0x7F;
        state->step++;
    }
}

u16 sub_0801DCCC(u16 item)
{
    u16 slot;
    u8 status = sub_0805CF40(item, &slot);

    if (status == 0)
        ((ItemSlots *)D_0202DBD0)->slots[slot] = status;
    return slot;
}

void sub_0801DC14(s16 x, s16 y)
{
    sub_0800518C(0, x, y);
    D_03001698 = 8;
    D_03001674 = 8;
    D_0300166C = 32;
    D_030016A4 = 32;
    D_03004830[0x2B]++;
}

extern void (*D_080F7FA4[])(void);

void sub_0801E07C(void)
{
    u8 *base = D_03004830;

    if (*(s8 *)(base + 0x2B) >= 0)
        D_080F7FA4[(s8)*(base + 0x2B)]();
}
extern void (*D_080F7FB8[])(void);

void sub_0801E0AC(void)
{
    u8 *base = D_03004830;

    if (*(s8 *)(base + 0x2B) >= 0)
        D_080F7FB8[(s8)*(base + 0x2B)]();
}
extern void sub_08072CC4(s32);
extern u8 D_03004584[];
extern u16 D_03001864;

void sub_0801E0DC(void)
{
    u8 *state = D_03004830;
    s32 step = (s8)state[0x2B];

    if (step != 0)
        sub_08072CC4(0x5D33);
    if (D_03004584[0] == 0)
        D_03001864 = 0x17;
}
extern void (*D_080F7FC4[])(void);

void sub_0801E114(void)
{
    u8 *state = D_03004830;
    s8 *step = (s8 *)(state + 0x2B);

    if (*step < 0)
        *step = 0;
    else
        D_080F7FC4[*step]();
}

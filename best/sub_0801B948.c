void func_0801B3DC(void)
{
    return;
}

void sub_08004EA0(s32 arg0);
void sub_08054B60(void);
void sub_0800312C(s32 arg0, s32 arg1);
void sub_080379D4(s32 arg0);
u8 sub_08019DBC(s32 arg0);

extern u8 D_03003420[];
extern u8 D_03004830[];

void sub_0801B8E4(void)
{
    sub_08004EA0(0x8479);
    *(void **)(D_03003420 + 0xF8) = &sub_08054B60;
    D_03004830[0x2C] = 0xEC;
    D_03004830[0x2B]++;
}

void sub_0801B91C(void)
{
    sub_0800312C(0x10, 0x1A);
    sub_080379D4(0x24);
    D_03004830[0x2C] = 0x75;
    D_03004830[0x2B]++;
}

void sub_0801B948(void)
{
    if (sub_08019DBC(6) == 0) {
        D_03004830[0x2C] = 0xFF;
        D_03004830[0x2B]++;
    }
}

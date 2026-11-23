extern u8 D_03004410[];
extern const u8 D_081530CC[];

void sub_08001F80(s32, s32, s32);
void sub_08037A74(s32);
void sub_0805B15C(void);
void sub_0805B3F4(s32);
void sub_08066F5C(s32);
void sub_08068850(void);
void sub_08068938(s32, s32);
void sub_08068984(s32, s32, s32, s32, const u8 *);
void sub_0809F2B4(s32);

void sub_0809DAFC(void)
{
    u8 *state;
    u8 zero;

    sub_08037A74(0x400);
    sub_08066F5C(0x19);
    sub_0809F2B4(0x95F800);
    sub_0805B15C();
    sub_08068850();
    sub_08068938(0, 0);
    sub_08068938(1, 0x26);
    sub_08068984(1, 1, 1, 0, D_081530CC + 1);
    sub_0805B3F4(1);
    sub_08001F80(0, 0, 0);

    state = D_03004410;
    zero = 0;
    state[0xE] = 20;
    state[0xF] = zero;
}

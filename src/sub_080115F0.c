void sub_08023FD8(u8);
void sub_0800518C(s32, s32, s32);
void sub_080104D8(void);
void sub_0800F820(void);
void sub_0803ADA8(s32);
void sub_080017EC(s32);
void sub_08037A74(s32);
void sub_08004EA0(s32);

void sub_080115AC(void)
{
    sub_08023FD8(0x42);
    D_03004830[0x2B]++;
}

void sub_080115C8(void)
{
    u8 *state = D_03004830;
    if (state[0x2D] & 2) {
        state[0x2C] = 0x30;
        state[0x2B]++;
    }
}

void sub_08011568(void)
{
    u8 *state;
    sub_0800518C(0, 0xE18, 0xA3C);
    sub_080104D8();
    sub_0800F820();
    sub_0803ADA8(5);
    sub_0803ADA8(0xF);
    sub_080017EC(0x7A);
    state = D_03004830;
    state[0x2A] = 0;
    state[0x2B] = 0;
}

void sub_080115F0(void)
{
    u8 *state = D_03004830;
    u8 timer = --state[0x2C];
    if (timer == 0) {
        sub_08037A74(0x8000);
        sub_08004EA0(0x82CA);
        state[0x2D] = 4;
        state[0x2B]++;
    }
}

extern u8 D_03004584[];
void sub_08004EA0(s32);
void sub_08072CC4(s32);
void sub_080017EC(s32);

void sub_08011168(void)
{
    sub_08004EA0(0x82B4);
    D_03004830[0x2B]++;
}

void sub_08011188(void)
{
    sub_08072CC4(0x2F20);
    if (D_03004584[0] == 0) {
        u8 mask;
        D_03004830[0x2D] = ((mask = 2 + (D_03004830[0x2D] >> 8)),
                            mask | D_03004830[0x2D]);
        sub_080017EC(0x77);
        D_03004830[0x2C] = 5;
        D_03004830[0x2B]++;
    }
}

void sub_080111D0(void)
{
    sub_08004EA0(0x82B6);
    D_03004830[0x2B]++;
}

void sub_080111F0(void)
{
    sub_08072CC4(0x3024);
    if (D_03004584[0] == 0) {
        u8 mask;
        D_03004830[0x2D] = ((mask = 2 + (D_03004830[0x2D] >> 8)),
                            mask | D_03004830[0x2D]);
        sub_080017EC(0x78);
        D_03004830[0x2C] = 5;
        D_03004830[0x2B]++;
    }
}

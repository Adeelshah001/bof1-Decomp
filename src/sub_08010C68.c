extern void *D_03004448;
extern u8 D_03004584[];
extern u16 D_03004120;
void sub_0800764C(s32);
void sub_0803EE54(void *);
void sub_08072CC4(s32);
void sub_08024008(s32);
void sub_0800312C(s32, s32);
void sub_08001F80(s32, s32, s32);
void sub_0800421C(s32, s32, s32);

void sub_08010C4C(void)
{
    sub_0800764C(0x16);
    D_03004830[0x2B]++;
}

void sub_08010C68(void)
{
    sub_0803EE54(D_03004448);
    sub_08072CC4(0x315);
    if (D_03004584[0] == 0) {
        sub_08024008(0x9C);
        D_03004830[0x2B]++;
    }
}

void sub_08010C10(void)
{
    sub_0800312C(0x10, 0x12);
    D_03004830[0x2B]++;
}

void sub_08010CA4(void)
{
    sub_08001F80(0xA, 0, 0);
    D_03004120 = 0;
    sub_0800421C(0x133, 0x1F8, -0x5494);
    D_03004830[0x2B]++;
}

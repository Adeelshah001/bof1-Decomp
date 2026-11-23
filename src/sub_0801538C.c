extern u8 D_030023DC[];
extern u16 D_030040F8;
void sub_080075BC(s32);
void sub_080138A8(void);
void sub_080073C8(s8);
void sub_08030AD8(u16);

void sub_0801536C(void)
{
    sub_080075BC(0x83F5);
}

void sub_0801538C(void)
{
    sub_080138A8();
    D_03004830[0x2B]++;
}

void sub_080153E0(void)
{
    sub_080073C8(0x2E);
    D_03004830[0x2B]++;
}

void sub_080153FC(void)
{
    if (D_030023DC[0] != 1) {
        D_030040F8 = 0x68;
        sub_08030AD8(0x68);
        D_03004830[0x2B]++;
    }
}

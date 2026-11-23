extern u8 D_03004830[];
extern u8 D_030023DC;
extern u16 D_03000854;

void sub_08037A74(s32);
void sub_0800312C(s32, s32);
void sub_0800518C(s32, s32, s32);

void sub_0801FD1C(void)
{
    D_03004830[0x2C]--;
}

void sub_0801FD2C(void)
{
    sub_08037A74(0x50);
    sub_0800312C(0x10, 0x14);
    D_03004830[0x2B]++;
}

void sub_0801FD50(void)
{
    if (D_030023DC != 1) {
        sub_0800518C(0x68, 0x80, 0x707C);
        D_03000854 = 0x708;
        D_03004830[0x2D] = 0;
        D_03004830[0x2B]++;
    }
}

void sub_0801FCE0(void)
{
    u8 *p;
    s8 v;

    p = D_03004830;
    v = --p[0x2C];
    if (v == 0) {
        sub_0800312C(0x10, 0x14);
        sub_08037A74(0x100);
        p[0x2C] = v;
        p[0x2B]++;
    }
}

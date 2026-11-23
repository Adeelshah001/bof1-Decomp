extern u8 D_030023DC[];

void sub_080104AC(s32, s32);
void sub_0800518C(s16, s16, s16);
void sub_0800F820(void);
void sub_0800312C(s32, s32);
void sub_080104D8(void);

void sub_08011ADC(void)
{
    u8 *p = D_03004830;
    p[0x2C] = 0;
    sub_080104AC(0x208, 0x20C);
    p[0x2B]++;
}

void sub_08011AA8(void)
{
    u8 *p = D_03004830;
    if (p[0x2D] & 1) {
        sub_0800518C(0xC, 0x208, 0x20C);
        p[0x2B]++;
    }
}

void sub_08011A70(void)
{
    if (D_030023DC[0] != 1) {
        u8 *p;
        sub_0800F820();
        p = D_03004830;
        p[0x2D] = 0x20;
        sub_0800312C(0x10, 2);
        p[0x2B]++;
    }
}

void sub_08011950(void)
{
    u8 *p = D_03004830;
    if (p[0x2D] & 8) {
        sub_0800518C(0xBB, 0x248, -0x5E04);
        sub_080104D8();
        p[0x2B]++;
    }
}

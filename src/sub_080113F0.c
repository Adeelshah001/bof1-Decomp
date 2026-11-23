void sub_08010504(void);
void sub_08010530(void);
void sub_08010540(void);
void sub_08004EA0(s32);

void func_080114E0(void)
{
    u8 *p = D_03004830;
    if (p[0x2D] & 4) {
        sub_08010540();
        p[0x2B]++;
    }
}

void sub_0801150C(void)
{
    u8 *p = D_03004830;
    if (p[0x2D] & 0x40) {
        sub_08010504();
        p[0x2B]++;
    }
}

void sub_08011538(void)
{
    u8 *p = D_03004830;
    if ((s8)p[0x2D] == 0) {
        sub_08004EA0(0x82C7);
        p[0x2B]++;
    }
}

void sub_080113F0(void)
{
    u8 *p = D_03004830;
    u8 *ptr = p + 0x2C;
    u8 val = --(*ptr);
    if (val == 0) {
        sub_08010530();
        *ptr = 0x80;
        p[0x2B]++;
    }
}

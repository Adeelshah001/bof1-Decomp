void sub_08010504(void);
void sub_0801051C(void);
void sub_08010530(void);

void sub_08011484(void)
{
    u8 *p = D_03004830;
    u8 val = --p[0x2C];
    if (val == 0) {
        sub_0801051C();
        p[0x2B]++;
    }
}

void sub_080114B0(void)
{
    u8 *p = D_03004830;
    if (p[0x2D] & 2) {
        sub_0801051C();
        sub_08010530();
        p[0x2B]++;
    }
}

void sub_08011454(void)
{
    u8 *p = D_03004830;
    if (p[0x2D] & 1) {
        sub_08010504();
        p[0x2C] = 6;
        p[0x2B]++;
    }
}

void sub_08011420(void)
{
    u8 *p = D_03004830;
    u8 val = --p[0x2C];
    if (val == 0) {
        sub_08010504();
        p[0x2D] = 0x20;
        p[0x2B]++;
    }
}

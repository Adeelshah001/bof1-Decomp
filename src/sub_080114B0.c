void sub_0801051C(void);
void sub_08010530(void);

void sub_080114B0(void)
{
    u8 *p = D_03004830;
    if (p[0x2D] & 2) {
        sub_0801051C();
        sub_08010530();
        p[0x2B]++;
    }
}

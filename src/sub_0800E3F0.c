extern s16 D_030040F8;
extern u16 D_0300413C;
extern u16 D_0300084C;
void sub_08004EA0(s32);

void sub_0800E3F0(void)
{
    u8 *p;
    D_030040F8 = -0x7E82;
    sub_08004EA0(0x817E);
    D_0300413C = 0x80;
    p = D_03004830;
    p[0x2C] = 0x7E;
    p[0x2D] = 0x81;
    p[0x2B]++;
}

void sub_0800E358(void)
{
    u8 *p = D_03004830;
    p[0x2C]--;
    D_0300084C--;
    if (D_0300084C == 0) {
        p[0x2B]++;
    }
}

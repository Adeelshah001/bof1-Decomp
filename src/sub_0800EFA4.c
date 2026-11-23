extern u32 D_03001694;
extern u16 D_03004114;

void sub_08023FD8(s32);
void sub_080379D4(s32);

void sub_0800EFA4(void)
{
    u8 *p = D_03004830;
    s32 val = (s8)--p[0x2C];
    if (val != 0) {
        D_03004114 = 0;
    } else {
        p[0x2C] = 0;
        p[0x2D] = 0;
        p[0x2B]++;
        sub_08023FD8(0x2E);
        sub_080379D4(0x26);
        D_03001694 |= 0x40;
        D_03004114 = 0;
    }
}

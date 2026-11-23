extern u16 D_03004114[];

s32 sub_08005090(s32, s32);
void sub_08005218(s32, s32, s32);

void sub_0800CC28(void)
{
    s32 a = 0xAB;
    s32 b = 0x1988;
    s32 c = 0x56BC;

    if ((sub_08005090(0x1E08, 0x515C) << 0x18) != 0) {
        D_03004114[0] = 0;
        return;
    }
    sub_08005218(a, b, c);
}

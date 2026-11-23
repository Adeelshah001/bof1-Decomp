extern s16 D_03004100;
extern s16 D_03004120;
extern void sub_080051C8(s16, s16, s16);

void sub_08005218(s16 x, s16 y, s16 z)
{
    D_03004120 = 2;
    D_03004100 = 1;
    sub_080051C8(x, y, z);
}

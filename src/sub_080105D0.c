extern u8 D_03004830[];

void sub_0800F9E4(s32 arg0, s16 arg1);
void sub_08010600(s32 arg0);
void sub_08010630(s32 arg0);

void sub_0801057C(s32 arg0, s16 arg1)
{
    sub_0800F9E4(arg0, -arg1);
}

void sub_080105D0(s32 arg0, s16 arg1)
{
    if (arg1 >= (s8)D_03004830[0x2C]) {
        sub_08010600(arg0);
    } else {
        sub_08010600(arg0);
    }
}

void sub_080105B8(s32 arg0, s8 arg1)
{
    sub_080105D0(arg0, (s8)-arg1);
}

void sub_0801060C(s32 arg0)
{
    if (++D_03004830[0x2C] == 0xB4) {
        sub_08010630(arg0);
    }
}

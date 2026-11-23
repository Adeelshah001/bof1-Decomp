u8 sub_08005090(u16, u16);
void sub_08005218(s16, s16, s16);
void sub_0800CB10(void);
void sub_0800CB48(void);
void sub_0800CBB8(void);
void sub_0800CBF0(void);

void sub_0800CAD8(void)
{
    s32 x = 0x1AF8;
    s32 y = 0x51FC;
    if (sub_08005090(0x1E98, 0x51DC))
    {
        sub_0800CB10();
        return;
    }
    sub_08005218(0xAD, x, y);
}

void sub_0800CB10(void)
{
    s32 x = 0x1AF8;
    s32 y = 0x51FC;
    if (sub_08005090(0x1D68, 0x521C))
    {
        sub_0800CB48();
        return;
    }
    sub_08005218(0xAD, x, y);
}

void sub_0800CB80(void)
{
    s32 x = 0x1E08;
    s32 y = 0x51BC;
    if (sub_08005090(0x1E48, 0x51FC))
    {
        sub_0800CBB8();
        return;
    }
    sub_08005218(0xAC, x, y);
}

void sub_0800CBB8(void)
{
    s32 x = 0x1A68;
    s32 y = 0x521C;
    if (sub_08005090(0x1E38, 0x515C))
    {
        sub_0800CBF0();
        return;
    }
    sub_08005218(0xAD, x, y);
}

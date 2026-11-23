typedef struct {
    u8 pad00[0xDC];
    u8 unkDC;
    u8 unkDD;
    u8 unkDE;
    u8 unkDF;
    u8 padE0[0xF0 - 0xE0];
    u8 unkF0;
} Obj98_4;

s32 sub_080985E0(void);
s32 sub_08003104(void);

s32 sub_08098524(Obj98_4 *arg0)
{
    u8 val = arg0->unkF0;
    if (val & 0x28) {
        return sub_080985E0();
    }
    return 0;
}

void sub_080984A0(Obj98_4 *arg0)
{
    u8 val = sub_08003104();
    arg0->unkDE |= (u8)((val & 3) + 1);
}

void sub_0809847C(Obj98_4 *arg0)
{
    u8 *p = &arg0->unkDC;
    p[0] &= 0x3F;
    p[2] &= 0x3F;
    arg0->unkDF &= 0xF0;
}

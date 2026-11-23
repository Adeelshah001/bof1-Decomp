extern u8 D_03004F50[];

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
u8 sub_08003104(void);

s32 sub_08098524(Obj98_4 *arg0)
{
    if (arg0->unkF0 & 0x28) {
        return sub_080985E0();
    }
    return 0;
}

s32 sub_080984C8(u8 *arg0)
{
    if (arg0 >= D_03003420 && arg0 < D_03003420 + 0xB68 && D_03004F50[0] != 0) {
        return sub_080985E0();
    }
    return 0;
}

void sub_080984A0(Obj98_4 *arg0)
{
    arg0->unkDE |= (u8)((sub_08003104() & 3) + 1);
}

void sub_0809847C(Obj98_4 *arg0)
{
    arg0->unkDC &= 0x3F;
    arg0->unkDE &= 0x3F;
    arg0->unkDF &= 0xF0;
}

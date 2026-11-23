typedef struct {
    u8 pad00[0x40];
    u16 unk40;
    u8 pad42[6];
    u8 unk48;
    u8 pad49[0x74 - 0x49];
    u16 unk74;
} State03004F50;

extern State03004F50 D_03004F50;
s32 sub_080985E0(void);

void sub_08098688(s16 arg0)
{
    D_03004F50.unk40 = arg0;
}

void sub_0809866C(s32 unused0, s32 unused1, u16 arg2)
{
    D_03004F50.unk40 = arg2;
    D_03004F50.unk74 = arg2;
    D_03004F50.unk48 = 0;
}

s32 sub_08098630(u8 *arg0)
{
    if (arg0 >= D_03003420 && arg0 < D_03003420 + 0xB68) {
        return sub_080985E0();
    }
    return 0;
}

void sub_08098610(u16 arg0)
{
    D_03004F50.unk40 = arg0;
    D_03004F50.unk74 = arg0;
    D_03004F50.unk48 = 0;
}

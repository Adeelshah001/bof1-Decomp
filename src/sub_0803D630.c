typedef struct {
    u8 pad00[4];
    u8 value;
    u8 pad05[3];
} LookupEntry3DA4C;

extern LookupEntry3DA4C D_03004E40[];
extern u8 D_0202DBD0[];
extern u16 D_03004E08;
extern u16 D_03004E14;
extern u16 D_03004E18;
extern u8 D_02020FC0[];
extern u8 D_020211C0[];

void sub_0803D9D0(void)
{
}

u8 sub_0803DA4C(s32 index)
{
    return D_03004E40[index].value;
}

void sub_0803D630(void)
{
    u16 *control = &D_03004E08;
    u8 *base = D_0202DBD0;
    u16 *first = (u16 *)(base + 0x28A);
    u16 zero = 0;
    u16 value = 0x7F01;
    u16 *other;

    *first = value;
    *control = value;
    other = &D_03004E18;
    D_03004E14 = zero;
    *other = zero;
    *(u16 *)(base + 0x288) = zero;
    *(u16 *)(base + 0x28C) = zero;
}

u16 sub_0803D610(s32 unused, u16 offset)
{
    u8 *dst = &D_020211C0[offset];
    *dst = D_02020FC0[offset];
    return offset + 0x20;
}

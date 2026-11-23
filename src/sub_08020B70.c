extern void sub_080A0770(s32);
extern u32 D_080F85D8[];
void sub_08020B4C(void)
{
    u32 *table = D_080F85D8;
    u8 *base = D_03004830;
    s8 *step = (s8 *)(base + 0x2B);
    sub_080A0770(table[(s32)*step]);
}
extern u32 D_080F862C[];
void sub_08020B70(void)
{
    u32 *table = D_080F862C;
    u8 *base = D_03004830;
    s8 *step = (s8 *)(base + 0x2B);
    sub_080A0770(table[(s32)*step]);
}
extern u32 D_080F8640[];
void sub_08020B94(void)
{
    u32 *table = D_080F8640;
    u8 *base = D_03004830;
    s8 *step = (s8 *)(base + 0x2B);
    sub_080A0770(table[(s32)*step]);
}
extern void sub_08020CF0(void);
extern u8 D_03000858[];

void sub_08020B14(u8 mode)
{
    u8 *base;
    u8 *fields;
    sub_08020CF0();
    base = D_03004830;
    fields = base + 0x2A;
    fields[0] = mode;
    fields[1] = 0;
    D_03000858[0] = 1;
    fields = base + 0x3F;
    fields[0] = 0;
    fields[1] = 0;
}

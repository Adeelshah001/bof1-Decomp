extern void sub_08020CF0(void);
extern u8 D_03000858[];

void sub_08020B14(u8 mode)
{
    u8 *base;
    u8 *fields;
    u8 zero;
    sub_08020CF0();
    base = D_03004830;
    fields = base + 0x2A;
    zero = 0;
    *fields++ = mode;
    *fields = zero;
    D_03000858[0] = 1;
    fields = base + 0x3F;
    *fields++ = zero;
    *fields = zero;
}

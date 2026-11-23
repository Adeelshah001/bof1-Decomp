typedef struct {
    s32 class;
    u32 sign;
    s32 normal_exp;
    u64 fraction;
} fp_number_type;

extern void D_080A4BFC(void *, fp_number_type *);
f32 sub_080A6158(s32, u32, s32, u32);

f32 sub_080A580C(f64 arg0)
{
    fp_number_type in;
    u32 r;

    D_080A4BFC(&arg0, &in);
    r = in.fraction >> 30;
    if (in.fraction & 0x3FFFFFFFULL)
        r |= 1;
    return sub_080A6158(in.class, in.sign, in.normal_exp, r);
}

extern u8 D_03002AB0[];
extern u8 D_03004F50[];
void sub_080391BC(void *);

void sub_0807EE68(void)
{
    sub_080391BC(D_03002AB0);
    if (D_03004F50[0x5B] == 0)
        D_03004830[0x2D] = 0x80;
    else
        D_03004830[0x2D] = 2;
}

void sub_0807EE30(void)
{
    sub_080391BC(D_03002AB0);
    if (D_03004F50[0x5B] == 0)
        D_03004830[0x2D] = 0x80;
    else
        D_03004830[0x2D] = 2;
}

void sub_08001888(s32);
void sub_0807D8DC(u8);

void sub_0807EE00(u8 arg0)
{
    if (arg0 != 0) {
        D_03004830[0x2C] = 0;
        D_03004830[0x2D] = 0;
        sub_08001888(0xB6);
        sub_0807D8DC(arg0);
    }
}

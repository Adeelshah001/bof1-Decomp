typedef struct {
    u8 pad00[0x6D];
    u8 unk6D;
} Struct3420;

typedef struct {
    u8 pad00[0x88];
    u32 unk88;
    u8 pad8C[0xB8 - 0x8C];
    u8 unkB8;
} Struct2AB0;

extern u8 D_030023DC[];
extern u8 D_03002510[];
extern u8 D_03002AB0[];
extern u8 D_030036A0[];
extern u16 D_03004120;
extern u16 D_03004114;

u8 sub_08001770(s32);
void sub_0803EE38(void *);
void sub_0802FFBC(void *, u16);
void sub_08013A20(s32, void *);
u8 sub_08038458(s32);

void sub_08013BF0(void)
{
    if (D_030023DC[0] != 1)
    {
        ((Struct2AB0 *)D_03002AB0)->unk88++;
        sub_080075A4(0x81E1);
        D_03004830[0x2B]++;
    }
}

void sub_08013C38(void)
{
    if (sub_08001770(0x80) == 0)
    {
        ((Struct3420 *)D_03003420)->unk6D |= 8;
        if (sub_08001770(0x81) == 0)
        {
            ((Struct2AB0 *)D_03002AB0)->unkB8 |= 4;
        }
    }
}

void sub_08013324(void)
{
    u8 *p;
    sub_0803EE38(D_03002510);
    p = D_03002AB0;
    sub_0802FFBC(p, D_03004120);
    p[0xB8] |= 4;
    D_03004830[0x2B]++;
    D_03004114 = 0;
}

void sub_0801477C(void)
{
    if (sub_08038458(0) != 0)
    {
        u8 *base;
        sub_080075A4(0x83B0);
        sub_08013A20(0, D_030036A0);
        base = D_03004830;
        base[0x2C] = 0x60;
        base[0x2B]++;
    }
}

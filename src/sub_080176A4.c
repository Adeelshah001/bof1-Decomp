extern u8 gEntityPool[];
extern u8 D_03002AB0[];
extern u16 D_0300413C;
extern u16 D_030016D0;
extern u16 D_03001678;
extern u8 D_0202DBD0[];

u8 sub_08019DBC(s32);
void sub_0801943C(void);
void sub_08001888(s32);
void sub_08019E3C(s32);

void sub_08017850(void)
{
    u16 *p = (u16 *)D_03002AB0;
    u32 val = p[3] + 0x30;
    D_0300413C = val;
    p[3] = val;
    p[0x16] = val;
    ((Entity *)gEntityPool)->unk6 = 0x38;
    D_03004830[0x2C] = 0x60;
    D_03004830[0x2B]++;
}

void sub_080176A4(void)
{
    if (sub_08019DBC(7) == 0)
    {
        u16 a = D_030016D0 & 0xFFFC;
        u16 b = D_03001678 & 0xFFFC;
        u8 *base;
        D_030016D0 = a | 2;
        D_03001678 = b | 2;
        base = D_03004830;
        base[0x4D] = 0x10;
        sub_0801943C();
        base[0x2C] = 0x40;
        base[0x2B]++;
    }
}

void sub_08017650(void)
{
    s32 zero;
    {
        u8 v = D_03002AB0[0xB8] & 0xFB;
        zero = 0;
        D_03002AB0[0xB8] = v;
    }
    sub_08001888(0x53);
    sub_08019E3C(0x17E);
    {
        s16 *p = (s16 *)D_0202DBD0;
        p[0x143] = zero;
        p[7] = 0x488;
        p[9] = 0xA2C;
    }
    D_03004830[0x2A] = 0;
}

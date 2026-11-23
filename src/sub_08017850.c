typedef struct {
    u8 pad00[0xE];
    u16 unkE;
    u8 pad10[0x12 - 0x10];
    u16 unk12;
    u8 pad14[0x286 - 0x14];
    u16 unk286;
} Struct2DBD0;

extern u8 gEntityPool[];
extern u8 D_03002AB0[];
extern u16 D_0300413C;
extern u8 D_0202DBD0[];

void sub_08001888(s32);
void sub_08019E3C(s32);

void sub_08017850(void)
{
    u16 *out = &D_0300413C;
    u16 *p = (u16 *)D_03002AB0;
    u32 val = p[3] + 0x30;
    *out = val;
    p[3] = val;
    p[0x16] = val;
    ((Entity *)gEntityPool)->unk6 = 0x38;
    D_03004830[0x2C] = 0x60;
    D_03004830[0x2B]++;
}

void sub_08017650(void)
{
    s32 zero;
    Struct2DBD0 *s;
    {
        u8 v = D_03002AB0[0xB8] & 0xFB;
        zero = 0;
        D_03002AB0[0xB8] = v;
    }
    sub_08001888(0x53);
    sub_08019E3C(0x17E);
    s = (Struct2DBD0 *)D_0202DBD0;
    s->unk286 = zero;
    s->unkE = 0x488;
    s->unk12 = 0xA2C;
    D_03004830[0x2A] = 0;
}

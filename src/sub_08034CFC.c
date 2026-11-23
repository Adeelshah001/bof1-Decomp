extern u8 D_03002BD4[];
extern u8 D_0202DBD0[];

typedef struct {
    u8 pad00[0x88];
    u32 unk88;
} Unk34C;

u8 sub_08001770(s32);
void sub_08030960(s32);
void sub_08035290(Unk34C *, s32);

void sub_08034CFC(Unk34C *arg0)
{
    D_03004830[0x40]++;
    arg0->unk88 += 2;
}

void sub_08034D14(Unk34C *arg0)
{
    u8 val = D_03002BD4[-0xC3];
    D_03002BD4[0x61] = val;
    D_03002BD4[0x185] = (val + 2) & 3;
    D_03002BD4[0x2A9] = (D_03002BD4[0x61] + 2) & 3;
    arg0->unk88 += 2;
}

void sub_08034CAC(Unk34C *arg0)
{
    s32 msg;
    if (sub_08001770(0x6D) != 0 || D_0202DBD0[0x3BE] != 0xFF)
    {
        msg = 0x82D3;
    }
    else
    {
        sub_08030960(0x146);
        msg = 0x82F4;
    }
    sub_08035290(arg0, msg);
    arg0->unk88 += 2;
}

void sub_08034D58(Unk34C *arg0)
{
    if (D_03004830[0x42] & 1)
    {
        arg0->unk88 += 2;
    }
}

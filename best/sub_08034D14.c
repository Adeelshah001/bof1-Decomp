typedef struct {
    u8 pad00[0x61];
    vu8 unk61;
    u8 pad62[0x124 - 0x62];
} PartyMember34D14;

extern PartyMember34D14 D_03002BD4[];

typedef struct {
    u8 pad00[0x88];
    u32 unk88;
} Unk34C;

void sub_08034D14(Unk34C *arg0)
{
    D_03002BD4[0].unk61 = D_03002BD4[-1].unk61;
    D_03002BD4[1].unk61 = (D_03002BD4[0].unk61 + 2) & 3;
    D_03002BD4[2].unk61 = (D_03002BD4[0].unk61 + 2) & 3;
    arg0->unk88 += 2;
}

void sub_08034D58(Unk34C *arg0)
{
    if (!(D_03004830[0x42] & 1))
        return;
    arg0->unk88 += 2;
}

extern u8 D_03002AB0[];
void sub_08004EA0(s32);
void sub_080017EC(s32);
void sub_08003378(s32);

typedef struct {
    u8 pad00[0x4C];
    u16 unk4C;
} Struct2AB0_E630;

void sub_0801E630(void)
{
    u32 remaining = D_03004830[0x2C];
    remaining--;
    D_03004830[0x2C] = remaining;
    if ((u8)remaining == 0) {
        ((Struct2AB0_E630 *)D_03002AB0)->unk4C = 8;
        D_03004830[0x2B]++;
    }
}

void sub_0801E68C(void)
{
    u32 remaining = D_03004830[0x2C];
    remaining--;
    D_03004830[0x2C] = remaining;
    if ((u8)remaining == 0) {
        sub_08004EA0(0x8536);
        D_03004830[0x2B]++;
    }
}

void sub_0801EB90(void)
{
    sub_080017EC(0xCD);
    sub_08003378(0x20);
    D_03004830[0x2D] = 0x40;
    D_03004830[0x2A] = 0;
    D_03004830[0x2B] = 0;
}

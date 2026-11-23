typedef struct {
    u8 pad00[0x88];
    u32 unk88;
} ActorCounterFields;
extern ActorCounterFields D_03002AB0;
extern u16 D_03004120;
void sub_08013A20(s32, void *);
void sub_080138A8(void);
void sub_0800421C(s32, s32, s32);
void sub_0803EE88(void *);

void sub_08014A14(void)
{
    D_03002AB0.unk88++;
    D_03004830[0x2B]++;
}

void sub_08014A34(void)
{
    sub_08013A20(1, D_03003420);
    D_03004830[0x2C] = 0x20;
    D_03004830[0x2B]++;
}

void sub_080149E0(void)
{
    sub_080138A8();
    D_03004120 = 2;
    sub_0800421C(0xD5, 0x7D8, -0x6E44);
    D_03004830[0x2B]++;
}

void sub_08014A5C(void)
{
    sub_0803EE88(D_03003420);
    D_03002AB0.unk88++;
    D_03004830[0x2B]++;
}

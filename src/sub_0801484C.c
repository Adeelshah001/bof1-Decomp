typedef struct {
    u8 pad00[0x204];
    u16 slots[65];
} ItemSlots;

extern u8 D_0202DBD0[];
extern u8 D_03002AB0[];
extern u16 D_03004114;

void sub_08053E38(void);
void sub_080075BC(s32);
u8 sub_08038458(s32);
u8 sub_0805CF40(u16, u16 *);
u8 sub_08001770(s32);
u8 sub_08007468(s32, s32);
void sub_0801367C(void);

void sub_08014804(void)
{
    Entity *entities;
    D_03002AB0[0xB8] &= ~4;
    entities = (Entity *)D_03003420;
    entities[0].unk78 = (u32)sub_08053E38;
    entities[1].unk78 = (u32)sub_08053E38;
    entities[2].unk78 = (u32)sub_08053E38;
    entities[3].unk78 = (u32)sub_08053E38;
    entities[4].unk78 = (u32)sub_08053E38;
    sub_080075BC(0x8355);
}

void sub_0801484C(void)
{
    u16 slot;
    if (sub_08038458(0) != 0)
    {
        u8 status;
        sub_080075A4(0x83B3);
        status = sub_0805CF40(0x15A, &slot);
        if (status == 0)
        {
            ((ItemSlots *)D_0202DBD0)->slots[slot] = status;
        }
        D_03004830[0x2B]++;
    }
}

void sub_08012F68(void)
{
    u8 res;
    if (sub_08001770(0x91) != 0 || (res = sub_08007468(0x278, 0xB29C)) != 0)
    {
        D_03004114 = 0;
        return;
    }
    D_03002AB0[0xB8] |= 4;
    D_03004830[0x2A] = 0xB;
    D_03004830[0x2B] = res;
    sub_0801367C();
}

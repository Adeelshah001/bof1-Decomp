typedef struct {
    u8 pad00[0x78];
    u32 unk78;
    u32 unk7C;
} Actor80;

extern u8 D_03002AB0[];
extern u16 D_03004114;

void sub_08053E38(void);
void sub_080075BC(s32);
u8 sub_08001770(s32);
u8 sub_08007468(s32, s32);
void sub_0801367C(void);

void func_080147BC(void)
{
}

void sub_08014804(void)
{
    Actor80 *entities;
    D_03002AB0[0xB8] &= ~4;
    entities = (Actor80 *)D_03003420;
    entities[0].unk78 = (u32)sub_08053E38;
    entities[1].unk78 = (u32)sub_08053E38;
    entities[2].unk78 = (u32)sub_08053E38;
    entities[3].unk78 = (u32)sub_08053E38;
    entities[4].unk78 = (u32)sub_08053E38;
    sub_080075BC(0x8355);
}

void sub_08012F68(void)
{
    u8 res;
    u8 val;
    u8 *state;
    if (sub_08001770(0x91) != 0 || (res = sub_08007468(0x278, 0xB29C)) != 0)
    {
        D_03004114 = 0;
        return;
    }
    D_03002AB0[0xB8] |= 4;
    val = 0xB;
    state = D_03004830;
    state[0x2A] = val;
    state[0x2B] = res;
    sub_0801367C();
}

extern u8 D_03004584[];
extern u8 D_03002AB0[];
void sub_08072CC4(s32);

typedef struct {
    u8 pad00[2];
    u16 unk02;
    u8 pad04[2];
    u16 unk06;
    u8 pad08[0x38];
    u8 unk40;
} ScriptEntityFields;

typedef struct {
    u8 pad00[0x94];
    u32 unk94;
} ScriptRequestFields;

void sub_08009128(void)
{
    u8 *state = D_03004830;
    if ((s8)state[0x2D] != 0)
        state[0x2B]++;
}

void sub_080090EC(void)
{
    ScriptEntityFields *entity = (ScriptEntityFields *)D_03003420;
    entity->unk02 = 0x1768;
    entity->unk06 = 0x474C;
    entity->unk40 = 1;
    D_03004830[0x2B]++;
}

void sub_0800908C(void)
{
    sub_08072CC4(0x120C);
    if (D_03004584[0] == 0)
        D_03004830[0x2B]++;
}

void sub_08009060(void)
{
    u32 request = 0x80E6;
    D_03004830[0x2B]++;
    ((ScriptRequestFields *)D_03002AB0)->unk94 = request;
    D_030023D0[0] = 2;
}

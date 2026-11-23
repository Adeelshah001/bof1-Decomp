typedef struct {
    u8 pad00[0xE8];
    u8 *script1;
    u8 padEC[0x168 - 0xEC];
    u8 *script2;
} ActorScriptsB11C;

typedef struct {
    u16 pad00;
    u16 x;
    u16 pad04;
    u16 y;
} PartyPositionB034;

extern u8 D_03002AB0[];
extern u16 D_03004114;
u8 sub_08001770(s32);
void sub_080017EC(s32);
void sub_08006BD4(void);

void sub_0800B11C(void)
{
    ((ActorScriptsB11C *)D_03003420)->script1 += 2;
}

void sub_0800B12C(void)
{
    ((ActorScriptsB11C *)D_03003420)->script2 += 2;
}

void sub_0800B094(s8 flags)
{
    u8 *party;
    u8 *p;
    u32 zero;
    u32 flagsValue = D_03004830[0x2D];

    s32 updated = flags;
    updated |= flagsValue;
    zero = 0;
    D_03004830[0x2D] = updated;
    ((Entity *)D_03003420)->unk68 += 2;
    party = D_03002AB0;
    {
        u32 partyFlags = party[0xB8];
        u32 enabled = 4;
        enabled |= partyFlags;
        party[0xB8] = enabled;
    }
    p = party + 0x4D;
    *p = zero;
    p += 3;
    *p = zero;
    D_03004114 = 1;
}

void sub_0800B034(void)
{
    if (sub_08001770(0x36) == 0) {
        u16 x = 0x1128;
        PartyPositionB034 *party = (PartyPositionB034 *)D_03002AB0;
        u16 partyX = party->x;
        u32 different = 1;

        if (partyX == x)
            different = party->y != 0x486C;
        if (!different) {
            sub_080017EC(0x36);
            D_03004114 = different;
            return;
        }

        sub_08006BD4();
    } else {
        sub_08006BD4();
    }
}

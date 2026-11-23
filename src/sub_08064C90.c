extern u8 D_03004620[];
extern u8 D_03002AB0[];
extern const u8 D_0814BC94[];
extern const u8 * const D_0814CA28[];

void sub_08059978(void);
void sub_0805B15C(void);
void sub_0805B308(const u8 *);
void sub_0805B358(const u8 *, u8, s32, s32, s32);
void sub_0805B3F4(s32);
void sub_0805B568(s32, s32, s32, s32, s32);
void sub_08066EC8(void);
void sub_08068850(void);
void sub_08068938(s32, s32);
void sub_08068984(s32, s32, s32, s32, const u8 *);

typedef struct {
    u8 pad00[0x3A];
    u8 unk3A;
    u8 pad3B[0xF0 - 0x3B];
    u8 unkF0;
    u8 padF1[0x124 - 0xF1];
} PartyMember;

struct MenuState {
    u8 pad0[7];
    u8 unk7 : 8;
    u8 pad8[0xC4 - 8];
    u8 unkC4;
};

s32 sub_08064C90(void)
{
    struct MenuState *menu = (struct MenuState *)D_03004620;
    s32 i;
    s32 count;
    PartyMember *party;
    u32 table;

    if (menu->unk7 == 0) {
        menu->unkC4 = 0;
        menu->unk7 |= 0xFF;
    }
    sub_0805B15C();
    sub_08068850();
    sub_08068938(0, 0);
    sub_08068938(1, 20);
    sub_08068938(2, 15);
    sub_08068984(1, 1, 1, 0, (const u8 *)0x0814BD68);
    sub_08068984(1, 1, 3, 0, (const u8 *)0x0814BD6D);
    sub_0805B568(0x8008, 0x4038, 0, 0, 0x1C0);
    sub_08068984(1, 1, 7, 0, (const u8 *)0x0814BD72);
    sub_08068984(1, 1, 9, 0, (const u8 *)0x0814BD77);
    sub_0805B568(0x8008, 0x4068, 1, 0, 0x1C4);
    sub_0805B568(0x8008, 0x4078, 1, 0, 0x1C8);
    sub_08068984(1, 1, 15, 0, (const u8 *)0x0814BD7C);
    sub_0805B3F4(0);
    sub_08066EC8();
    sub_08059978();
    sub_0805B308(D_0814BC94);
    table = (u32)D_0814CA28;
    count = 0;
    party = (PartyMember *)D_03002AB0;
    for (i = 0; i < 8; i++) {
        if (party[i].unk3A != 0) {
            u32 f0 = party[i].unkF0;
            u32 mask = 0x40;
            mask &= f0;
            if (mask == 0) {
                count++;
            }
        }
    }
    sub_0805B358(*(const u8 * const *)(table + ((count - 1) << 2)), D_03004620[0xC4], 7, 0, 1);
    D_03004620[3] = 2;
    return 0;
}

extern u8 D_03002AB0[];

typedef struct {
    u8 pad00[0xB8];
    u8 unkB8;
    u8 padB9[0x214 - 0xB9];
    u8 unk214;
    u8 pad215[0x338 - 0x215];
    u8 unk338;
} Unk2AB0;

typedef struct {
    u8 pad00[0x2B];
    s8 unk2B;
} ScriptState1F;

void sub_0803D3B8(s32);
void sub_0800518C(s16, s16, s16);
void sub_0800F85C(s32);
void sub_08024008(s32);

void sub_0801F8B4(void) {
    sub_0803D3B8(0);
    sub_0800518C(0xD4, 0xAF8, 0x2D6C);
    D_03004830[0x2B]++;
}

void sub_0801F87C(void) {
    ((Unk2AB0 *)D_03002AB0)->unkB8 |= 0x80;
    sub_0800F85C(8);
    sub_08024008(0x72);
    ((ScriptState1F *)D_03004830)->unk2B |= ~0x7F;
}

void sub_0801F994(void) {
    sub_0800518C(0, 0xF58, 0x78C);
    ((Unk2AB0 *)D_03002AB0)->unk338 |= 0x40;
    D_03004830[0x2B]++;
}

void sub_0801FA78(void) {
    sub_0800518C(0x6F, 0x3F8, 0x399C);
    ((Unk2AB0 *)D_03002AB0)->unk214 |= 0x40;
    D_03004830[0x2B]++;
}

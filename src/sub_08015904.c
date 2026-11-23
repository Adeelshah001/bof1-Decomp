extern u8 D_03002AB0[];

typedef struct {
    u8 pad00[0x46];
    u16 unk46;
    u8 pad48[0x94 - 0x48];
    u8 *unk94;
    u8 pad98[0xB8 - 0x98];
    u8 unkB8;
} State2AB0;

void sub_08054820(void *);
void sub_080074B4(void);
void sub_08007494(void);
void sub_080073D8(s32);
void sub_0801383C(s32, s32);
void sub_080017EC(s32);
void sub_08030960(s32);

void sub_080158C8(void) {
    ((State2AB0 *)D_03002AB0)->unk94[0x6F] = 2;
    sub_08054820(((State2AB0 *)D_03002AB0)->unk94);
}

void sub_080158E4(void) {
    sub_080074B4();
    sub_08007494();
    sub_080073D8(0x54);
    ((State2AB0 *)D_03002AB0)->unk46 = 0;
}

void sub_08015904(void) {
    D_03004830[0x2A] = 4;
    D_03004830[0x2B] = 0;
    ((State2AB0 *)D_03002AB0)->unkB8 |= 4;
}

void sub_08015880(void) {
    sub_0801383C(0x159, 0x15C);
    sub_080017EC(0x83);
    sub_08030960(0x15C);
    D_03004830[0x2A] = 2;
    D_03004830[0x2B] = 0;
    ((State2AB0 *)D_03002AB0)->unkB8 |= 4;
}

extern u8 D_0202DBD0[];
extern u8 D_03002510[];

typedef struct {
    u8 pad00[0x16];
    u16 unk16;
    u8 pad18[0x1A - 0x18];
    u16 unk1A;
    u8 pad1C[0x290 - 0x1C];
    u16 unk290;
    u8 pad292[0x2B9 - 0x292];
    u8 unk2B9;
} State2DBD0;

typedef struct {
    u8 pad00[0x38];
    u16 unk38;
    u8 pad3A[0x55 - 0x3A];
    u8 unk55;
} State2510;

void sub_08019E60(u16, u16);
void sub_08019F5C(void);
void sub_0805561C(s32);

void sub_08019E3C(u16 arg0) {
    ((State2DBD0 *)D_0202DBD0)->unk16 = 0x178;
    sub_08019E60(0x337C, arg0);
}

void sub_08019E60(u16 arg0, u16 arg1) {
    ((State2DBD0 *)D_0202DBD0)->unk1A = arg0;
    ((State2DBD0 *)D_0202DBD0)->unk290 = arg1;
    ((State2DBD0 *)D_0202DBD0)->unk2B9 = 0;
}

void sub_08019E84(u16 arg0) {
    ((State2DBD0 *)D_0202DBD0)->unk16 = 0x768;
    ((State2DBD0 *)D_0202DBD0)->unk1A = 0xB86C;
    ((State2DBD0 *)D_0202DBD0)->unk290 = arg0;
    ((State2DBD0 *)D_0202DBD0)->unk2B9 = 0;
}

void sub_08019F1C(void) {
    State2510 *state = (State2510 *)D_03002510;
    if (--state->unk55 != 0) {
        sub_08019F5C();
    } else {
        sub_0805561C(0x1A);
        D_03004830[0x2D] = 2;
        state->unk38 = 0x80;
        sub_08019F5C();
    }
}

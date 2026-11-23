extern u8 D_03002AB0[];
void sub_080017EC(s32);
void sub_08007494(void);

typedef struct {
    u8 pad00[0xE8];
    s32 unkE8;
} Unk3420;

void sub_08015964(void) {
    sub_080017EC(0x8B);
    D_03004830[0x2A] = 7;
    D_03004830[0x2B] = 3;
    D_03002AB0[0xB8] |= 4;
}

void sub_08015994(void) {
    sub_080017EC(0x8C);
    D_03004830[0x2A] = 7;
    D_03004830[0x2B] = 7;
    D_03002AB0[0xB8] |= 4;
}

void sub_080159C4(void) {
    sub_080017EC(0x90);
    sub_08007494();
    if (D_03002AB0[0x61] == 1) {
        ((Unk3420 *)D_03003420)->unkE8 += 1;
    } else {
        ((Unk3420 *)D_03003420)->unkE8 += 6;
    }
}

void sub_08015A00(void) {
    sub_08007494();
    D_03004830[0x2A] = 0xD;
    D_03004830[0x2B] = 0;
    D_03002AB0[0xB8] |= 4;
}

extern u8 D_03002AB0[];
extern u8 D_030023DC;
extern u16 D_03001864;
extern u32 D_03001694;
extern u8 D_030033F0;

typedef struct {
    u8 pad00[0x61];
    u8 unk61;
    u8 pad62[0x94 - 0x62];
    u32 unk94;
    u8 pad98[0xB8 - 0x98];
    u8 unkB8;
} Unk2AB0;

void sub_0800518C(s16, s16, s16);
void sub_08019720(void);
void sub_0800312C(s32, s32);

void sub_080250F4(void) {
    ((Unk2AB0 *)D_03002AB0)->unk94 = 0x8260;
    D_030023D0[0] = 2;
    D_03004830[0x40]++;
}

void sub_080252F8(void) {
    sub_0800518C(0x1B1, 0x1A88, -0x2684);
    ((Unk2AB0 *)D_03002AB0)->unkB8 &= 0x7F;
    D_03001864 = 0x10;
    D_03001694 |= 0x80;
    D_03004830[0x40]++;
}

void sub_0802534C(void) {
    D_03001864 = 0x10;
    D_03001694 |= 0x80;
    sub_08019720();
    D_030033F0 = 0xFF;
    D_03004830[0x2C] = 0x10;
    D_03004830[0x40]++;
}

void sub_08024B08(void) {
    if (D_030023DC != 1) {
        D_03001864 = 0x17;
        D_03001694 &= ~0x80;
        sub_0800312C(0x10, 2);
        ((Unk2AB0 *)D_03002AB0)->unk61 = 3;
        D_03004830[0x40]++;
    }
}

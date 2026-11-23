extern s32 D_03004158;
extern s32 D_0300415C;
extern u8 D_03002AB0[];

typedef struct {
    u8 pad00[0xB8];
    u8 unkB8;
} Unk2AB0;

void sub_08005274(s32);
void sub_08004EA0(s32);
void sub_0800511C(s32, s32);
void sub_080588DC(void);
void sub_0803EE88(void *);
void sub_080379D4(s32);
void sub_0800312C(s32, s32);
void sub_08001F80(s32, s32, s32);
void sub_080017EC(s32);

void sub_0801AA50(void) {
    sub_08005274(6);
    sub_08004EA0(0x844A);
    D_03004830[0x2C] = 0x3C;
    D_03004830[0x2B]++;
}

void sub_0801AA7C(void) {
    sub_0800511C(0x104, 0);
    sub_080588DC();
    D_03004830[0x2D]++;
    D_03004830[0x2B]++;
}

void sub_0801AAD0(void) {
    sub_0803EE88(D_03003420);
    sub_080379D4(0x24);
    sub_0800312C(0x10, 0x1C);
    sub_08001F80(0, 0, 0);
    D_03004830[0x2C] = 0xC1;
    D_03004830[0x2B]++;
    D_03004158 = 0;
    D_0300415C = 0;
}

void sub_0801AB20(void) {
    sub_080017EC(0x53);
    ((Unk2AB0 *)D_03002AB0)->unkB8 &= ~4;
    D_03004830[0x2A] = 0x25;
    D_03004830[0x2B] = 0;
    D_03004830[0x2C] = 1;
}

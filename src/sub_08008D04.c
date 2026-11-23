extern u8 D_030023DC;
extern u8 D_03002AB0[];

void sub_080073D8(s32);
void sub_08000248(s32);
void sub_080017EC(s32);
void sub_08003334(void);
void sub_08003378(s32);
void sub_0800518C(s32, s32, s32);
void sub_08033AF4(s32);
void sub_08039054(void);
void sub_0803ADA8(s32);
void sub_0803D3B8(s32);

typedef struct {
    u8 pad00[0x94];
    u32 unk94;
} ScriptRequestFields;

void sub_08008CDC(void) {
    if (D_030023DC != 1) {
        sub_080073D8(0x20);
        D_03004830[0x2B]++;
    }
}

void sub_08008D04(void) {
    u16 request = 0x808E;
    D_03004830[0x2B]++;
    ((ScriptRequestFields *)D_03002AB0)->unk94 = request;
    D_030023D0[0] = 2;
}

void sub_08008C8C(void) {
    sub_0800518C(0x6F, 0x4A8, 0x397C);
    sub_08003378(0x1E);
    sub_08039054();
    sub_08000248(0xDC);
    sub_08003334();
    sub_0803D3B8(6);
    sub_08033AF4(0);
    sub_080017EC(0x30);
    sub_0803ADA8(4);
    D_03004830[0x2B]++;
}

void sub_08008D30(void) {
    u16 request = 0x808F;
    D_03004830[0x2B]++;
    ((ScriptRequestFields *)D_03002AB0)->unk94 = request;
    D_030023D0[0] = 2;
}

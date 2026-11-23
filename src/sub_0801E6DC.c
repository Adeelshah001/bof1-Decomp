extern u8 D_03002AB0[];
extern u8 D_030023DC;
extern u16 D_03001864;
extern u32 D_03001694;

void sub_0800518C(s16, s16, s16);
void sub_08004EA0(s32);
void sub_08024008(s32);
void sub_08003528(s32, s32, s32, s32, s32);
void sub_0803ADDC(s32, s32);
void sub_08024018(s32);
void sub_08003378(s32);
void sub_0800312C(s32, s32);

typedef struct {
    u8 pad00[0x2B];
    s8 unk2B;
    u8 unk2C;
    u8 unk2D;
} ScriptState;

void sub_0801E764(void) {
    sub_0800518C(0x18C, 0x478, 0x708C);
    D_03004830[0x2C] = 0;
    D_03004830[0x2B]++;
}

void sub_0801E794(void) {
    u8 *p = D_03004830;
    u8 v = --p[0x2C];
    if (v == 0) {
        sub_08004EA0(0x853D);
        p[0x2C] = 0x40;
        p[0x2B]++;
    }
}

void sub_0801E7CC(void) {
    sub_08024008(0x3C);
    D_03004830[0x2D] = 0x10;
    ((ScriptState *)D_03004830)->unk2B |= ~0x7F;
    sub_08003528(0, 0xE0, 0, 0xFF00, 2);
    sub_0803ADDC(0x228, 0xFFFF);
    sub_0803ADDC(0x1C, 0xFFFF);
}

void sub_0801E6DC(void) {
    if (D_030023DC != 1 && D_03002AB0[0x3B8] != 0xA) {
        D_03001864 = 0x17;
        D_03001694 &= ~0x80;
        sub_08024018(0x3A);
        sub_08003378(0x20);
        sub_0800312C(0x10, 0x16);
        D_03004830[0x2B]++;
    }
}

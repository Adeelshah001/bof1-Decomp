extern u16 D_03004890;

void sub_0803AF58(s32, s32);
void sub_0800764C(s32);
void sub_0800511C(s32, s32);
void sub_080050B4(s32, s32, s32, s32);

typedef struct {
    u8 pad00[0x41];
    u8 unk41;
} Unk03003420_D9D4;

void sub_0800D9D4(void) {
    ((Unk03003420_D9D4 *)D_03003420)->unk41 = 0xA;
    D_03004830[0x2B]++;
}

void sub_0800D9A0(void) {
    u8 *base;
    sub_0803AF58(0xBD, 0xFFFF);
    sub_0800764C(6);
    base = D_03004830;
    base[0x2C] = 5;
    base[0x2D] = 0x10;
    base[0x2B]++;
}

void sub_0800D978(void) {
    sub_0800511C(0, 0);
    D_03004890 = 0xC8;
    D_03004830[0x2B]++;
}

void sub_0800D944(void) {
    u8 *base;
    sub_080050B4(1, 0x18F, 0x180, 0x718C);
    base = D_03004830;
    base[0x2C] = 0x14;
    base[0x2B]++;
}

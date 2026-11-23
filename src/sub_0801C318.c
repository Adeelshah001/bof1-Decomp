extern u8 D_0300166C[];
extern u8 D_03001674[];
extern u8 D_03001698[];
extern u8 D_030016A4[];
extern u8 D_03002AB0[];
extern u8 D_03004830[];
extern u8 D_03001864[];

void sub_080017EC(s32);
void sub_0800312C(s32, s32);
void sub_0800518C(s32, s32, s32);
void sub_08019720(void);
void sub_08019DA0(void);

void sub_0801C348(void) {
    sub_0800312C(0x10, 0xA);
    D_03004830[0x2B]++;
}

void sub_0801C364(void) {
    sub_0800518C(0, 0x2C8, 0xCBC);
    D_03001698[0] = 8;
    D_03001674[0] = 8;
    D_0300166C[0] = 0x20;
    D_030016A4[0] = 0x20;
    sub_08019720();
    D_03002AB0[0xB8] &= 0x7F;
    sub_080017EC(0xB5);
    sub_08019DA0();
}

void sub_0801C318(void) {
    u8 *base = D_03002AB0;
    *(u32 *)(base + 0x1AC) += 1;
    *(u32 *)(base + 0x3F4) += 1;
    D_03004830[0x2B]++;
}

void sub_0801C2F4(void) {
    u8 *base;

    *(u16 *)D_03001864 = 0x17;
    base = D_03004830;
    base[0x2C] = 0x60;
    base[0x2B]++;
}

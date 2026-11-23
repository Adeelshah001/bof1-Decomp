extern u8 D_03004830[];
extern u32 D_080F8C74[];
extern void sub_080A0770(u32);

void sub_08024254(void) {
    sub_080A0770(D_080F8C74[D_03004830[0x40]]);
}

extern u32 D_080F8C94[];

void sub_08024274(void) {
    sub_080A0770(D_080F8C94[D_03004830[0x40]]);
}

extern u8 D_03003420[];

void sub_0802421C(void) {
    if (D_03004830[0x40] != 0) {
        D_03003420[0xC1] = 0xA;
        D_03003420[0x141] = 0xA;
    }
    D_03004830[0x3F] = 0;
    D_03004830[0x40] = 0;
}

extern u32 D_080F8CB4[];

void sub_08024294(void) {
    sub_080A0770(D_080F8CB4[D_03004830[0x40]]);
}

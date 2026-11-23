extern u8 D_03002AB0[];
extern u8 D_03003418[];
extern u16 D_03004120[];
extern u8 D_03003F98[];

void sub_08004EA0(s32);
void sub_0800518C(s32, s32, s32);
void sub_080030D4(void);
void sub_08003378(s32);
void sub_08030AD8(s32);
void sub_0800421C(s32, s32, s32);
void sub_08030BB0(void *, s32);

void sub_0801C018(void) {
    sub_08004EA0(0x87D6);
    D_03004830[0x2D]++;
    D_03004830[0x2B]++;
}

void sub_0801C080(void) {
    D_03003418[0] |= 0x40;
    sub_0800518C(0x182, 0x768, 0xFFFFCE0C);
    sub_080030D4();
    sub_08003378(0x20);
    D_03002AB0[0xB8] |= 0x80;
    sub_08030AD8(0x7E);
    D_03004830[0x2B]++;
}

void sub_0801BF04(void) {
    D_03004120[0] = 0;
    sub_0800421C(0x168, 0x8D8, 0xFFFFB6EC);
    D_03004830[0x2B]++;
}

void sub_0801BECC(void) {
    D_03003F98[0] |= 0x40;
    sub_08030BB0(D_03002AB0, 0x10);
    D_03004830[0x2C] = 0x20;
    D_03004830[0x2B]++;
}

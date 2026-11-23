extern u8 *D_03004550;
extern u8 D_0202D1C0[];
extern u16 D_030047FC;
extern u8 D_03003410;
extern u8 D_030023E0[];

void sub_08073FF0(void);
void sub_080379D4(s32);
void sub_08003378(s32);
void sub_08000248(s32);
void sub_08084644(void);

void sub_080748C8(u8 *arg0) {
    D_03004550 = D_0202D1C0;
    D_0202D1C0[0] = 9;
    *(u8 **)(arg0 + 0x1C) = D_0202D1C0 + 1;
    arg0[2] = 0x12;
    sub_08073FF0();
}

void sub_0807491C(void) {
    u8 *p;
    sub_080379D4(0xF0);
    sub_08003378(0x25);
    sub_08000248(1);
    sub_08084644();
    D_03004830[0x2F] = 0;
    D_030047FC = 0;
    D_03003410 = 0;
    p = D_030023E0;
    *(u16 *)(p + 0xA8) |= 0x8000;
}

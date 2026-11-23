extern u8 D_03004754;
extern u8 *D_03004550;
extern u8 D_0202D1C0[];
extern u16 D_030047FC;
extern u8 D_03003410;
extern u8 D_030023E0[];

s32 sub_0805A9FC(void);
u8 sub_080739B8(void);
void sub_08073FF0(void);
void sub_080379D4(s32);
void sub_08003378(s32);
void sub_08000248(s32);
void sub_08084644(void);

void sub_080747C4(u8 *arg0) {
    u8 val = --arg0[0xC];
    if (val == 0) {
        arg0[2] = val;
        arg0[0xC] = 0x1E;
    }
}

void sub_08074784(u8 *arg0) {
    if (sub_0805A9FC() == 0) {
        D_03004754 = 1;
        arg0[0x5B] = 1;
    } else if (arg0[0] == 3) {
        arg0[2] = 0x10;
    } else if (sub_080739B8() != 0) {
        arg0[2] = 0xE;
    }
}

void sub_080748C8(u8 *arg0) {
    u8 *p = D_0202D1C0;
    D_03004550 = p;
    *p++ = 9;
    *(u8 **)(arg0 + 0x1C) = p;
    arg0[2] = 0x12;
    sub_08073FF0();
}

void sub_0807491C(void) {
    sub_080379D4(0xF0);
    sub_08003378(0x25);
    sub_08000248(1);
    sub_08084644();
    D_03004830[0x2F] = 0;
    D_030047FC = 0;
    D_03003410 = 0;
    *(u16 *)(D_030023E0 + 0xA8) |= 0x8000;
}

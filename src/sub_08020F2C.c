extern u8 D_030023DC;
extern u8 D_03004830[];
extern u8 D_03000858[];
extern u8 D_02020FC0[];
extern u8 D_0300413C[];
extern u8 D_0300168C[];
extern u8 D_030016A8[];

void sub_0802032C(void);
void sub_0802028C(void);
void sub_08003378(s32);
void sub_08020EE0(s16);

void sub_08020F00(void) {
    if (D_030023DC != 1) {
        sub_0802032C();
        D_03004830[0x2C] = 0x30;
        D_03004830[0x2B] += 1;
    }
}

void sub_08020F2C(void) {
    u8 *base;
    u8 temp;

    sub_0802028C();
    base = D_03004830;
    temp = --base[0x2C];
    if (temp == 0) {
        sub_0800312C(0x10, 8);
        base[0x2B] += 1;
    }
}

void sub_08020F60(void) {
    if (D_030023DC != 1) {
        D_03000858[0] = 0;
        sub_08003378(0x32);
        *(u16 *)D_0300168C = 0x2350;
        *(u16 *)D_030016A8 = 0x1000;
        D_03004830[0x2C] = 0x80;
        D_03004830[0x2B] += 1;
    }
}

void sub_08020E84(void) {
    u16 val;
    s16 *p;

    val = (u16)(D_02020FC0[0] | (D_02020FC0[1] << 8)) + 0x14A5;
    p = (s16 *)D_0300413C;
    *p = val;
    if (((u32)val << 16) <= 0x7FFE0000U) {
        sub_08020EE0(*p);
    } else {
        D_03004830[0x2B] += 1;
        sub_0800312C(0x10, 6);
        sub_08020EE0(0x7FFF);
    }
}

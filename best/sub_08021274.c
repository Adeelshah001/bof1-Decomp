extern u16 D_03001864;

void sub_08021A28(s32, s32);
void sub_0800312C(s32, s32);
void sub_08003378(s32);

void sub_08021274(void) {
    u8 *p = D_03004830;
    if ((s8)p[0x2C] < 0) {
        u8 *q = p + 0x2A;
        u8 zero = 0;
        *q = 3;
        p[0x2B] = zero;
    }
}

void sub_08021240(void) {
    u8 *base = D_03004830;
    if ((s8)base[0x2C] < 0) {
        sub_08021A28(2, 0x6A);
        base[0x2D] = 0x80;
        base[0x2B]++;
    }
}

void sub_08021210(void) {
    u8 *base = D_03004830;
    u8 temp = --base[0x2C];
    if (temp == 0) {
        sub_08021A28(2, 0x66);
        base[0x2B]++;
    }
}

void sub_080211CC(void) {
    u8 *base = D_03004830;
    u8 *ptr = base + 0x2C;
    u8 temp = --(*ptr);
    if (temp == 0) {
        D_03001864 = 0x17;
        sub_0800312C(0x10, 2);
        sub_08003378(0x1F);
        *ptr = 0x40;
        base[0x2B]++;
    }
}

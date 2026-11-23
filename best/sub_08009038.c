extern u8 D_03002AB0[];
extern u8 D_03001864[];
extern u8 D_03001670[];

void sub_0800312C(s32, s32);
void sub_080017EC(s32);
void sub_080063B8(s32, s32);

void sub_08009038(void) {
    if (D_03002AB0[0x338] & 0x40) {
        D_03004830[0x2B]++;
    }
}

void sub_08008F84(void) {
    u8 *base = D_03004830;
    s8 *timer = (s8 *)(base + 0x2C);

    if (*timer < 0) {
        sub_0800312C(0x10, 2);
        *(u16 *)D_03001864 = 0x17;
        *(u16 *)D_03001670 = 0x1B00;
        *timer = 0x5A;
        base[0x2B]++;
    }
}

void sub_08008F4C(void) {
    u8 *base = D_03004830;
    s8 *timer = (s8 *)(base + 0x2C);

    if (*timer < 0) {
        sub_0800312C(0x10, 0);
        *timer = 0x30;
        base[0x2B]++;
        sub_080017EC(0x37);
    }
}

void sub_08008F14(void) {
    u8 *base = D_03004830;
    s8 *timer = (s8 *)(base + 0x2C);

    if (*timer < 0) {
        sub_080063B8(0x1188, 0x4B9C);
        *timer = 0x10;
        base[0x2B]++;
    }
}

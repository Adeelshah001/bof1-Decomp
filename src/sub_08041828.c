extern u8 D_03004410[];
extern u8 D_0202DBD0[];
extern u8 D_03004620[];
extern u16 D_030016E0[];
extern u8 D_0300459C;

void sub_0805B404(s32);
void sub_080413A0(void);
void sub_080416AC(void);
u8 sub_0805B040(s32);
void sub_080379D4(s32);

s32 sub_080414B8(void) {
    sub_0805B404(0);
    D_03004410[0x14] = 0;
    D_03004410[0x15] = 0;
    D_03004410[0x16] = 0;
    D_03004410[0x17] = 0;
    sub_080413A0();
    D_03004410[0x23] = 0;
    D_03004410[0x2C] = 0;
    D_03004410[0x2B] = 0;
    D_03004410[0xE] = 8;
    return 0;
}

void sub_080414F0(void) {
    u8 val = D_03004410[0x2C];
    if (val != 0) {
        if (val == 3) {
            if (D_03004410[0x17] != 0) {
                D_03004410[0x17] = 0;
            } else {
                D_03004410[0x16] = 0;
                D_03004410[0x2C] = 2;
            }
        } else {
            D_03004410[0x2C] = val - 1;
            D_03004410[0x14 + D_03004410[0x2C]] = 0;
        }
    }
}

s32 sub_08041828(void) {
    u8 *base = D_0202DBD0;
    u8 *p = base + 0x2A6;
    u8 zero = 0;
    *p = 1;
    base[0x2A8] = zero;
    base[0x2A7] = 1;
    base[0x2A9] = 1;
    sub_080416AC();
    D_03004620[0xB2] = zero;
    D_03004410[0xE] = 0xE;
    return 0;
}

s32 sub_080421F0(void) {
    u8 val = sub_0805B040(1);
    u16 flags = D_030016E0[3];
    if (flags & 2) {
        sub_080379D4(0x15);
        sub_0805B404(1);
        D_03004410[0xC] = 0;
        D_03004410[0xE] = 0;
    } else if (flags & 1) {
        sub_080379D4(2);
        D_0300459C = val;
        D_03004410[0xE] = 4;
    }
    return 0;
}

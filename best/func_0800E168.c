extern u16 D_03001680;

void sub_08005274(s32);
void sub_0800C130(void);
void sub_080379D4(s32);
void sub_0803AF58(s32, s32);

void sub_0800E1D8(void) {
    sub_08005274(2);
    D_03004830[0x2B]++;
}

void sub_0800E1F4(void) {
    if (--D_03004830[0x2C] == 0) {
        sub_0800C130();
    } else {
        D_03001680 -= 2;
        sub_080379D4(0xD);
    }
}

void func_0800E168(void) {
    u8 *base = D_03004830;
    if (--base[0x2C] == 0) {
        base[0x2B]++;
    }
}

void sub_0800E254(void) {
    u8 *base;
    sub_0803AF58(0xBD, 0xFFFF);
    base = D_03004830;
    base[0x2C] = 0x10;
    base[0x2B]++;
}

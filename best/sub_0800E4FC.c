extern u16 D_0300084C;
extern u8 D_03003F98;

void sub_0803ADA8(s32);
void sub_0800764C(s32);
void sub_08005274(s32);
void sub_080050B4(s32, s32, s32, s32);

void sub_0800E464(void) {
    sub_080050B4(1, 0x18B, 0x380, 0x7084);
    D_0300084C = 0x12C;
    D_03004830[0x2B]++;
}

void sub_0800E49C(void) {
    if (D_0300084C == 0x12C) {
        sub_08005274(5);
    }
    if (--D_0300084C == 0) {
        D_03004830[0x2B]++;
    }
}

void sub_0800E4D4(void) {
    sub_0803ADA8(0x0D);
    sub_0800764C(0x0B);
    D_03004830[0x2C] = 0x78;
    D_03004830[0x2B]++;
}

void sub_0800E4FC(void) {
    D_03003F98 |= 0x20;
    D_0300084C = 0x78;
    D_03004830[0x2B]++;
}

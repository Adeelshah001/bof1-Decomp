extern u8 D_0202DBD0[];
extern u8 D_03002AB0[];
extern u16 D_03004120;
extern u8 D_030045B0[];

void sub_080017EC(s32);
void sub_0800421C(s32, s32, s32);
void sub_08004EA0(s32);
void sub_08024C64(void);
void sub_0805C9A0(void *, s32);
u8 sub_0805C9B8(void *, s32);

void sub_08024BBC(void) {
    sub_08004EA0(0x8295);
    D_03004830[0x40]++;
}

void sub_08024BDC(void) {
    sub_0805C9A0(D_0202DBD0, 0x1388);
    D_03002AB0[0xB8] &= 0xFB;
    D_03004830[0x3F] = 0;
    D_03004830[0x40] = 0;
}

void sub_08024B84(void) {
    sub_080017EC(0xEA);
    D_03004120 = 0;
    sub_0800421C(0xF7, 0x888, (s32)0xFFFFA5BC);
    D_03004830[0x40]++;
}

void sub_08024C14(void) {
    if (sub_0805C9B8(D_03002AB0, 0xC8) == 0) {
        if (*(u16 *)(D_0202DBD0 + 0x20) == 0) {
            *(u16 *)(D_030045B0 + 0x38) = 0x8292;
        }
        *(u32 *)(D_0202DBD0 + 0x20) &= 0xFFFF0000;
    }
    D_03004830[0x40]++;
    sub_08024C64();
}

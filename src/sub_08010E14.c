extern u8 D_03004584[];
extern u16 D_03004890;
void sub_08004EA0(s32);
void sub_08003378(s32);
void sub_08072CC4(s32);

void sub_08010E48(void) {
    u8 *p;
    sub_08004EA0(0x8253);
    sub_08003378(0x40);
    p = D_03004830;
    p[0x2B]++;
}

void sub_08010E14(void) {
    sub_08072CC4(0x4C22);
    if (D_03004584[0] == 0) {
        u8 *p;
        D_03004890 = 0xC8;
        p = D_03004830;
        p[0x2B]++;
    }
}

void sub_08010E9C(void) {
    u8 *base = D_03004830;
    if (base[0x2D] & 2) {
        u8 *timer = base + 0x2C;
        *timer = 0x30;
        --timer;
        ++*timer;
    }
}

void sub_08010DDC(void) {
    u8 *p = D_03004830;
    p[0x2A] = 0;
    p[0x2B] = 0;
}

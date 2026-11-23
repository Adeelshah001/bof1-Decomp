extern u8 D_03004584[];
extern u16 D_03004890;
extern u16 D_03004114;

void sub_08072CC4(s32);
void sub_0802FD60(s32);
void sub_0803EE88(void *);
void sub_0800764C(s32);
void sub_080017EC(s32);
void sub_0803D3B8(s32);
void sub_080050B4(s32, s32, s32, s32);

void func_0800E0BC(void) {
}

void sub_0800E0F4(void) {
    sub_08072CC4(0x2405);
    if (D_03004584[0] == 0) {
        u8 *p;
        sub_0802FD60(0xC);
        p = D_03004830;
        p[0x2D]++;
        p[0x2B]++;
    }
}

void sub_0800E130(void) {
    sub_0803EE88(D_03003420);
    sub_0800764C(9);
    sub_080017EC(0x5F);
    sub_0803D3B8(3);
    D_03004830[0x2C] = 0xB4;
    D_03004830[0x2B]++;
}

void sub_0800E188(void) {
    u8 *p;
    D_03004890 = 0x190;
    sub_080050B4(1, 0x18F, 0x180, 0x717C);
    D_03004114 = 0;
    p = D_03004830;
    p[0x2D] = 2;
    p[0x2C] = 0x40;
    p[0x2B]++;
}

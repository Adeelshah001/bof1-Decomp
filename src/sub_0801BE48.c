extern u32 D_03001694;

void sub_0802FD60(s32);
void sub_0800518C(s32, s32, s32);
void sub_080030D4(void);
void sub_08019E3C(s32);
void sub_08030AD8(s32);
void sub_080379D4(s32);

void sub_0801BDB4(void) {
    sub_0802FD60(0x6A);
    D_03004830[0x2D] = 0;
    D_03004830[0x2B]++;
}

void sub_0801BDD8(void) {
    if ((s8)D_03004830[0x2D] == 4) {
        D_03004830[0x2C] = 0x40;
        D_03004830[0x2B]++;
    }
}

void sub_0801BE00(void) {
    sub_0800518C(0, 0x2F8, 0xC9C);
    sub_080030D4();
    D_03001694 &= ~0x80;
    sub_08019E3C(0x174);
    D_03004830[0x2C] = 0x40;
    D_03004830[0x2B]++;
}

void sub_0801BE48(void) {
    sub_08030AD8(0x80);
    sub_080379D4(0x20);
    D_03004830[0x2C] = 0x40;
    D_03004830[0x2B]++;
}

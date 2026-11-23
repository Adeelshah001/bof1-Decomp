extern u8 D_030036A0[];
extern u8 D_03004584[];
extern u8 D_03002AB0[];

void sub_080075BC(s32);
void sub_08012BC8(void *);
void sub_08072CC4(s32);
void sub_0803EE88(void *);
void sub_0803AF58(s32, s32);
void sub_080017EC(s32);
void sub_0805561C(s32);
void sub_080074D4(void);

void sub_08014658(void) {
    D_03004830[0x2C] = 0x20;
    sub_080075BC(0x83A7);
}

void sub_08014674(void) {
    u8 *base;
    sub_08012BC8(D_030036A0);
    base = D_03004830;
    base[0x2C] = 0x7F;
    base[0x2B]++;
}

void sub_08014630(void) {
    sub_08072CC4(0x718);
    if (D_03004584[0] == 0) {
        D_03004830[0x2B]++;
    }
}

void sub_0801469C(void) {
    sub_0803EE88(D_030036A0);
    sub_0803AF58(0xFC, 0xFFFF);
    sub_080017EC(0x87);
    sub_0805561C(0x3D);
    (*(u32 *)(D_03002AB0 + 0x88))++;
    sub_080074D4();
    D_03004830[0x2B]++;
}

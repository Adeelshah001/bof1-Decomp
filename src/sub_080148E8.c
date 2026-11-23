extern u8 D_03004584;
extern u16 D_03004120;
extern u8 D_03002AB0[];
extern u8 D_030036A0[];

u8 sub_08038458(s32);
void sub_080074D4(void);
void sub_080074E4(void);
void sub_08072CC4(s32);
void sub_080030D4(void);
void sub_080017EC(s32);
void sub_0800421C(s32, s32, s32);
void sub_08012BC8(void *);

void sub_080148E8(void) {
    if (sub_08038458(0)) {
        sub_080074D4();
        sub_080074E4();
        D_03004830[0x2B]++;
    }
}

void sub_08014910(void) {
    sub_08072CC4(0x332E);
    sub_080030D4();
    if (D_03004584 == 0) {
        D_03004830[0x2C] = 0x20;
        D_03004830[0x2B]++;
    }
}

void sub_080148A4(void) {
    sub_080017EC(0x8E);
    D_03004120 = 0;
    sub_0800421C(0xD5, 0x798, -0x6D24);
    D_03002AB0[0xB8] &= ~4;
    D_03004830[0x2B]++;
}

void sub_08014958(void) {
    u8 *actors = D_030036A0;
    sub_08012BC8(actors);
    sub_08012BC8(actors + 0x80);
    sub_08012BC8(actors + 0x100);
    D_03004830[0x2C] = 0x7F;
    D_03004830[0x2B]++;
}

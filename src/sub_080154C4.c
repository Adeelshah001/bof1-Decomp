extern void sub_0800764C(s32);
extern void sub_080137F4(void *);
extern void sub_080074A4(void);
extern void sub_080074B4(void);
extern void sub_080074C4(void);
extern void sub_08013894(void);
extern void sub_08013BF0(void);
extern void sub_08072CC4(s32);

extern u8 D_030034A0[];
extern u8 D_03004584;

void sub_08015544(void) {
    sub_080075A4(0x81E5);
    sub_0800764C(0x11);
    D_03004830[0x2B]++;
}

void sub_08015568(void) {
    sub_080137F4(D_030034A0);
    sub_080075A4(0x81E6);
    sub_080074A4();
    sub_080074B4();
    D_03004830[0x2B]++;
}

void sub_080154F8(void) {
    if ((s8)D_03004830[0x2D] == 0) {
        sub_08013BF0();
    } else if (--D_03004830[0x2D] == 0) {
        sub_08013894();
        sub_080074C4();
    }
}

void sub_080154C4(void) {
    sub_08072CC4(0x3719);
    if (D_03004584 == 0) {
        D_03004830[0x2B]++;
        D_03004830[0x2D] = 4;
    }
}

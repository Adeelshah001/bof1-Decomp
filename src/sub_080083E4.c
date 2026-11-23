
extern u8 D_030023DC[];
extern u8 D_03004830[];
extern u8 D_03003520[];
extern u8 D_03002AB0[];

void sub_0800844C(void) {
    if (D_030023DC[0] != 1) {
        D_03004830[0x2B]++;
    }
}

void sub_0800B60C(void *arg0);

void sub_080083E4(void) {
    u8 *p = D_03003520;
    sub_0800B60C(p);
    sub_0800B60C(p + 0x80);
    sub_0800B60C(p - 0x100);
    sub_0800B60C(p + 0x100);
    *(s32 *)(p + 0x2E8) += 1;
    D_03004830[0x2B]++;
}

void sub_08007494(void);
void sub_080074A4(void);
void sub_080074B4(void);
void sub_080074C4(void);
void sub_080074D4(void);
void sub_080074E4(void);
void sub_080074F4(void);
void sub_08007504(void);
void sub_08007514(void);

void sub_080084E4(void) {
    if ((s8)D_03004830[0x2C] == 0) {
        sub_08007514();
        sub_080074A4();
        sub_08007494();
        sub_080074B4();
        sub_080074C4();
        sub_080074D4();
        sub_080074E4();
        sub_080074F4();
        sub_08007504();
        *(s32 *)&D_03002AB0[0x88] += 1;
        D_03004830[0x2B]++;
    }
}

void sub_0800B5D4(void);

void sub_080083B0(void) {
    u16 *p = (u16 *)D_03003520;
    p[1] = 0x278;
    p[3] = 0x213C;
    p += 0x40;
    p[1] = 0x298;
    p[3] = 0x213C;
    sub_0800B5D4();
    D_03004830[0x2B]++;
}

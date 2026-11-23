typedef struct {
    u8 pad00[6];
    u16 unk6;
    u8 pad08[0xB8 - 8];
    u8 flags;
} AB0;

extern AB0 D_03002AB0;
extern u8 D_03001864[];

void sub_08037A74(s32);
void sub_0800312C(s32, s32);
void sub_0800518C(s32, s32, s32);
void sub_080017EC(s32);
void sub_08019720(void);
void sub_08019DA0(void);
void sub_0803AF58(s32, s32);

void sub_0801C1A0(void) {
    sub_08037A74(0x100);
    sub_0800312C(0x10, 0x0A);
    D_03004830[0x2B]++;
}

void sub_0801C1C4(void) {
    sub_0800518C(0x108, 0x11D8, 0xFFFF8D4C);
    D_03002AB0.flags &= 0x7F;
    sub_080017EC(0xB9);
    sub_08019720();
    sub_08019DA0();
}

void sub_0801C21C(void) {
    u8 *p;
    sub_0800312C(0x10, 0x0A);
    p = D_03004830;
    p[0x2C] = 0x0A;
    p[0x2B]++;
}

void sub_0801C2A8(void) {
    u8 *p;

    *(u16 *)D_03001864 = 0;
    D_03002AB0.unk6 = 0x37BC;
    sub_0803AF58(0x134, 0xFFFF);
    sub_0800312C(0x10, 0x0C);
    p = D_03004830;
    p[0x2C] = 4;
    p[0x2B]++;
}

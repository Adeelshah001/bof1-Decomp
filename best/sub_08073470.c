extern const u16 D_08151F00[];
extern u8 D_030023E0[];
extern const u8 D_020191B0[];
extern u8 D_02024640;
extern u8 D_030033F0;
extern u8 D_030040EC;
extern const u8 D_08150B3E[];
extern u8 D_0202B1C0[];
extern u32 D_03000F4C;
extern u16 D_0300168C;
extern u16 D_030016A8;

void sub_08039108(void);
void sub_080A0210(void *, const void *, s32);
void sub_080284C0(void *);
void sub_0806CE1C(void);
void sub_08072FEC(void);
void sub_080285CC(void *);

u16 sub_080734EC(Entity *arg0) {
    return D_08151F00[arg0->unk3B];
}

void sub_080734B0(void) {
    if (*(u16 *)&D_030023E0[0xA4] == 0) {
        sub_08039108();
    }
    sub_080A0210(D_03003420, D_020191B0, 0x240);
    D_02024640 = D_030033F0;
}

void sub_08073544(void) {
    D_030040EC = 1;
    sub_080284C0(D_030023E0);
    sub_0806CE1C();
    sub_08072FEC();
    D_0202B1C0[0x5EF] = D_08150B3E[D_03004830[0x2E] + 1];
    sub_080285CC(D_030023E0);
}

void sub_08073470(void) {
    s32 flag = D_03000F4C & 1;
    if (flag != 0) {
        D_0300168C = 0x3C42;
        D_030016A8 = 0x808;
    } else {
        D_0300168C = flag;
    }
}

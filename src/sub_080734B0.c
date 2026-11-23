extern const u16 D_08151F00[];
extern const u8 D_020191B0[];
extern u8 D_02024640;
extern u8 D_030033F0;
extern u8 D_030040EC;
extern const u8 D_08150B3E[];
extern u8 D_0202B1C0[];

struct Unk30023E0 {
    u8 pad00[0xA4];
    u16 unkA4;
};
extern struct Unk30023E0 D_030023E0;

void sub_08039108(void);
void sub_080A0210(void *, const void *, s32);
void sub_080284C0(void *);
void sub_0806CE1C(void);
void sub_08072FEC(void);
void sub_080285CC(void *);

u16 sub_080734EC(Entity *arg0) {
    u32 idx = arg0->unk3B;
    const u16 *tab = D_08151F00;
    return tab[idx];
}

void sub_080734B0(void) {
    if (D_030023E0.unkA4 == 0) {
        sub_08039108();
    }
    sub_080A0210(D_03003420, D_020191B0, 0x240);
    D_02024640 = D_030033F0;
}

void sub_08073544(void) {
    u32 idx;
    const u8 *tbl;
    struct Unk30023E0 *p;

    D_030040EC = 1;
    p = &D_030023E0;
    sub_080284C0(p);
    sub_0806CE1C();
    sub_08072FEC();
    idx = D_03004830[0x2E];
    tbl = D_08150B3E + 1;
    D_0202B1C0[0x5EF] = tbl[idx];
    sub_080285CC(p);
}

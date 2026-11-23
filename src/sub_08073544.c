extern u8 D_030040EC;
extern const u8 D_08150B3E[];
extern u8 D_0202B1C0[];

struct Unk30023E0 {
    u8 pad00[0xA4];
    u16 unkA4;
};
extern struct Unk30023E0 D_030023E0;

void sub_080284C0(void *);
void sub_0806CE1C(void);
void sub_08072FEC(void);
void sub_080285CC(void *);

void sub_08073544(void) {
    u8 val;
    struct Unk30023E0 *p;

    D_030040EC = 1;
    p = &D_030023E0;
    sub_080284C0(p);
    sub_0806CE1C();
    sub_08072FEC();
    val = (D_08150B3E + 1)[D_03004830[0x2E]];
    D_0202B1C0[0x5EF] = val;
    sub_080285CC(p);
}

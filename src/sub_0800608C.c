extern void *D_03000840;
extern u8 D_03004830[];

void *sub_0803ED98(void);

void sub_0800608C(void) {
    void *ent = sub_0803ED98();
    D_03000840 = ent;
    if (ent != NULL) {
        ((u8 *)ent)[0x3B] = 0x15;
        ((u8 *)D_03000840)[0x3C] = 7;
        ((u8 *)D_03000840)[0x3A] = 1;
    }
    D_03004830[0x2B] += 1;
}

extern u8 D_03002AB0[];

void sub_08003378(s32);
void sub_08007494(void);
void sub_080074B4(void);
void sub_080074C4(void);
void sub_080074D4(void);
void sub_080074E4(void);
void sub_080074F4(void);
void sub_08007504(void);

void sub_08007F48(void) {
    s8 *state = (s8 *)D_03004830;
    if (state[0x2C] == 0) {
        sub_08003378(0x15);
        sub_08007494();
        sub_080074B4();
        sub_080074C4();
        sub_080074D4();
        sub_080074E4();
        sub_080074F4();
        sub_08007504();
        state[0x2C] = 0x7F;
        D_03004830[0x2B] += 1;
        *(u16 *)(D_03002AB0 + 0x94) = 0x80FE;
        D_030023D0[0] = 2;
    }
}

extern u8 D_03002AB0[];
extern u8 D_030034A0[];

void sub_080137E8(void *);
void sub_08013800(void *);
void sub_080075BC(s32);
void sub_08037A74(s32);
void sub_08000248(s32);
void sub_080379D4(s32);

void sub_08014460(void) {
    sub_080137E8(D_03003420);
    D_03004830[0x2C] = 0x50;
    sub_080075BC(0x835F);
}

void sub_08014488(void) {
    sub_08013800(D_03003420);
    D_03004830[0x2C] = 0x30;
    sub_080075BC(0x835D);
}

void sub_08014740(void) {
    sub_08013800(D_030034A0);
    D_03002AB0[0xB8] &= ~4;
    sub_080075BC(0x83D4);
}

void sub_0801417C(void) {
    u8 v = 0x20;
    u8 *state;

    sub_08037A74(0x800);
    state = D_03004830;
    state[0x2C] = v;
    sub_08000248(0xA);
    sub_080379D4(0x23);
    state[0x2B]++;
}

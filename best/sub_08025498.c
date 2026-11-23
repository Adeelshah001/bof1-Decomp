extern u8 D_030023DC[];
extern u8 D_03002AB0[];
extern u8 D_03004830[];

void sub_0800312C(s32, s32);
void sub_08004EA0(s32);
void sub_08003378(s32);
void sub_08016854(s32, s32);

void sub_0802547C(void) {
    sub_0800312C(0x10, 0x1A);
    D_03004830[0x40]++;
}

void sub_08025498(void) {
    if (D_030023DC[0] != 1) {
        u8 *state = D_03004830;

        state[0x41] = 0x20;
        state[0x40]++;
    }
}

void sub_080254BC(void) {
    u32 remaining = D_03004830[0x41];
    remaining--;
    D_03004830[0x41] = remaining;
    if ((u8)remaining == 0) {
        sub_08004EA0(0x81DA);
        D_03004830[0x40]++;
    }
}

void sub_0802541C(void) {
    u8 *p = D_03004830;
    u8 v = --p[0x41];
    if (v == 0) {
        sub_08016854(0x28, (s32)D_03002AB0);
        p[0x41] = 0xA0;
        sub_08003378(0x27);
        p[0x40]++;
    }
}

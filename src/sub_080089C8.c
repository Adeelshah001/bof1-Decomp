extern u8 D_03003420[];
extern u32 D_03002AB0[];
extern u8 D_030023D0[];
extern void sub_080017EC(s32);

void sub_080089C8(void) {
    u32 v;
    sub_080547DC(D_03003420, 2);
    v = 0x8037;
    D_03004830[0x2B]++;
    D_03002AB0[0x25] = v;
    D_030023D0[0] = 2;
}

void sub_08008970(void) {
    u8 *base = D_03004830;
    if (*(s8 *)(base + 0x2C) == 0) {
        D_03002AB0[0x25] = 0x8033;
        D_030023D0[0] = 2;
        base[0x2A] = 3;
        base[0x2B] = 0;
        sub_080017EC(0x26);
    }
}

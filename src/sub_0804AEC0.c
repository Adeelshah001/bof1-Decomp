extern u8 D_030033F0[];
extern u8 D_03002AB0[];

void sub_0804ADCC(void);

void sub_0804AF14(void) {
    *(u8 *)0x030033F0 |= 1;
    sub_0804ADCC();
}

void sub_0804AEC0(void) {
    u8 *base = D_03002AB0;

    *(u32 *)(base + 0x94) = 0x803B;
    D_030023D0[0] = 2;
}

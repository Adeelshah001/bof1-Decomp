extern u8 D_03002AB0[];

void sub_08009D80(Entity *arg0) {
    u8 *p2 = D_03002AB0;
    u32 val = 0x8064;
    D_03004830[0x2A] = 8;
    D_03004830[0x2B] = 0;
    *(u32 *)(p2 + 0x94) = val;
    *D_030023D0 = 2;
    arg0->unk68 += 2;
}

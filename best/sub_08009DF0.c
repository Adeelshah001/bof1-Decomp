extern u8 D_03002AB0[];

void sub_08009DC0(Entity *arg0) {
    if (*(u8 *)(D_03003420 + 0x3A) == 0) {
        arg0->unk68 += 2;
    }
}

void sub_08009DD8(Entity *arg0) {
    if (*(u16 *)(D_03004830 + 0x2A) == 8) {
        arg0->unk68 += 2;
    }
}

void sub_08009DF0(Entity *arg0) {
    sub_080547DC(D_03003420, 3);
    *(u32 *)(D_03002AB0 + 0x94) = 0x8065;
    *(u8 *)D_030023D0 = 2;
    sub_0800B10C();
    arg0->unk68 += 2;
}

void sub_08009D80(Entity *arg0) {
    *(u8 *)(D_03004830 + 0x2A) = 8;
    *(u8 *)(D_03004830 + 0x2B) = 0;
    *(u32 *)(D_03002AB0 + 0x94) = 0x8064;
    *(u8 *)D_030023D0 = 2;
    arg0->unk68 += 2;
}

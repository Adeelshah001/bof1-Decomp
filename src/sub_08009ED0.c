extern u8 D_03002AB0[];
extern u8 D_030023D0[];
extern u8 D_03004830[];
void sub_080030D4(void);
void sub_080073D8(s32);

void sub_08009D40(Entity *arg0) {
    u8 *p1 = D_03002AB0;
    u8 *p2 = D_03004830;
    p1[0xB8] &= 0xFB;
    p2[0x2B] += 1;
    arg0->unk68 += 2;
}

void sub_08009E50(Entity *arg0) {
    u32 val = 0x8067;
    u8 *p1 = D_03002AB0;
    arg0->unk41 |= 0x30;
    *(u32 *)(p1 + 0x94) = val;
    D_030023D0[0] = 2;
    arg0->unk68 += 2;
}

void sub_08009ED0(Entity *arg0) {
    u32 val = 0x8069;
    u8 *p1 = D_03002AB0;
    *(u32 *)(p1 + 0x94) = val;
    D_030023D0[0] = 2;
    sub_080030D4();
    sub_080073D8(0x1E);
    arg0->unk68 += 2;
}

void sub_08009F3C(Entity *arg0) {
    if (D_03002AB0[0xB8] & 4)
        arg0->unk68 += 2;
}

extern u8 D_03002AB0[];
extern u8 D_030023D0[];

void sub_08009F04(Entity *arg0) {
    u32 val = 0x806A;
    u8 *p1 = D_03002AB0;
    *(u32 *)(p1 + 0x94) = val;
    D_030023D0[0] = 2;
    arg0->unk68 += 2;
}

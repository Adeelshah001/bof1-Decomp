extern u8 D_03002510[];
extern u8 D_03004830[];

void sub_0800E9B4(Entity *arg0) {
    u8 *p = D_03002510;
    u8 val = D_03004830[0x2D];
    p[0x6C] = val;
    arg0->unk68 += 2;
}

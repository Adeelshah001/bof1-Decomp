extern u16 D_0202DBD0[][2];
extern u8 D_03002AB0[];
extern u8 D_03004830[];
void sub_0805CF40(u32 arg0, u16 *out);

void sub_0800EA50(Entity *arg0) {
    u16 sp0;
    sub_0805CF40(0x13D, &sp0);
    D_0202DBD0[0x81][sp0] = 0x139;
    D_03002AB0[0xB8] &= 0xFB;
    D_03004830[0x2D] = 0;
    arg0->unk68 += 2;
}

extern u8 D_03002AB0[];
void sub_080017EC(s32 arg0);
void sub_0800B0E8(void);
void sub_08009C8C(Entity *arg0) {
    u8 *state;
    sub_080017EC(0x2B);
    sub_0800B0E8();
    state = D_03002AB0;
    *(Entity **)(state + 0x94) = arg0;
    D_030023D0[0] = 2;
    D_03004830[0x2B]++;
    arg0->unk68 += 2;
}
void sub_08009CC8(Entity *arg0) {
    u32 value = 0x803C;
    u8 *state = D_03002AB0;
    *(u32 *)(state + 0x94) = value;
    D_030023D0[0] = 2;
    arg0->unk68 += 2;
}

/* identical to sub_08009C4C (matched), with its names changed by decompdecomp */
extern u8 D_03002AB0[];
void sub_0803EE54(void *arg0);
void sub_080379D4(s32 arg0);
void sub_080017EC(s32 arg0);
void sub_0800B0E8(void);

void sub_080163DC(void *arg0) {
    u8 *state = D_03004830;
    state[0x2B]++;
    sub_0803EE54(arg0);
}
void sub_08009C64(Entity *arg0) {
    u8 *state = D_03004830;
    if (*(u16 *)(state + 0x2A) == 0x905) {
        sub_080379D4(0xF1);
        arg0->unk68 += 2;
    }
}
void sub_08009C8C(Entity *arg0) {
    u8 *state;
    sub_080017EC(0x2B);
    sub_0800B0E8();
    state = D_03002AB0;
    *(Entity **)(state + 0x94) = arg0;
    D_030023D0[0] = 2;
    state = D_03004830;
    state[0x2B]++;
    arg0->unk68 += 2;
}
void sub_08009CC8(Entity *arg0) {
    u8 *state = D_03002AB0;
    *(u32 *)(state + 0x94) = 0x803C;
    D_030023D0[0] = 2;
    arg0->unk68 += 2;
}

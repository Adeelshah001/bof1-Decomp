/* identical to sub_0800EBE0 (matched), with its names changed by decompdecomp */

void sub_0801970C(Entity *p) {
    u8 *state = D_03004830;
    state[0x2D] = 0;
    p->unk68 += 2;
}
void sub_0800EBC4(Entity *p) {
    u8 *state = D_03004830;
    s8 phase = state[0x2D];
    if (phase == 7) p->unk68 += 2;
}
void sub_0800EB8C(Entity *p) {
    u8 *state = D_03004830;
    s8 phase = state[0x2D];
    if (phase == 5) p->unk68 += 2;
}
void sub_0800EB50(Entity *p) {
    u8 *state = D_03004830;
    state[0x2B]++;
    p->unk68 += 2;
}


void sub_0800EBC4(Entity *p) {
    u8 *state = D_03004830;
    if ((s8)state[0x2D] != 7) return;
    p->unk68 += 2;
}
void sub_0800EB8C(Entity *p) {
    u8 *state = D_03004830;
    if ((s8)state[0x2D] != 5) return;
    p->unk68 += 2;
}
void sub_0800EB50(Entity *p) {
    u8 *counter = D_03004830;
    counter += 0x2B;
    *counter += 1;
    p->unk68 += 2;
}

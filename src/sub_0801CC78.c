
s32 sub_08001770(s32);
void sub_0801CC64(Entity *p) {
    u8 *state = D_03004830;
    state[0x42] = 0;
    p->unk68 += 2;
}
void sub_0801CC78(Entity *p) {
    u8 *state = D_03004830;
    state[0x2B] += 2;
    p->unk68 += 2;
}
void sub_0801CC28(Entity *p) {
    u32 next;
    if ((u8)sub_08001770(0xAA))
        next = p->unk68 + 2;
    else
        next = p->unk68 + 3;
    p->unk68 = next;
}
void sub_0801CBE0(Entity *p) {
    u8 *script = (u8 *)p->unk68;
    u8 *next;
    u8 *state = D_03004830;
    s8 phase = state[0x2D];
    if (script[2] != phase) next = script + 3;
    else next = script + 6;
    p->unk68 = (u32)next;
}

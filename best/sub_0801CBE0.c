
u8 sub_08001770(s32);
void sub_0801CC28(Entity *p) {
    if (sub_08001770(0xAA)) p->unk68 += 2;
    else p->unk68 += 3;
}
void sub_0801CBE0(Entity *p) {
    u8 *script = (u8 *)p->unk68;
    u32 value = script[2];
    u8 *state = D_03004830;
    s8 phase = state[0x2D];
    if (value != phase) p->unk68 += 3;
    else p->unk68 += 6;
}

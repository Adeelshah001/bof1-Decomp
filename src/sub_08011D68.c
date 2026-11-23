extern u8 D_03002AB0[];

void sub_08011D68(Entity *p) {
    u8 *state = D_03004830;
    state[0x2C] = 0;
    p->unk68 += 2;
}

void sub_08011D48(Entity *p) {
    u8 *script = (u8 *)p->unk68;
    s8 *state = (s8 *)D_03004830;
    if (script[2] & state[0x2C]) {
        p->unk68 = (u32)(script + 3);
    }
}

void sub_08011D28(Entity *p) {
    u8 *state = D_03004830;
    u8 *script = (u8 *)p->unk68;
    state[0x2D] |= script[2];
    p->unk68 = (u32)(script + 3);
}

void sub_08011DFC(Entity *p) {
    s8 *state = (s8 *)D_03004830;
    u8 *b = D_03002AB0;
    state[0x2D] &= 0x7F;
    if (b[0xB8] & 4) {
        state[0x2D] |= ~0x7F;
    }
    p->unk68 += 2;
}

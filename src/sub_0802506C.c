extern u8 D_03002AB0[];
extern u8 D_03004830[];
extern u8 D_030033F0[];
extern u8 D_03003420[];

void sub_08003334(void);
s32 sub_08003104(void);

void sub_0802506C(void) {
    sub_08003334();
    D_03002AB0[0xB8] &= 0xFB;
    D_03004830[0x3F] = 0;
    D_03004830[0x40] = 0;
}

void sub_08025098(void) {
    u8 *base = D_030033F0;
    u8 *state = D_03004830;
    u32 val;

    *base |= 0x80;
    val = sub_08003104();
    state[0x41] = val & 1;
    state[0x40]++;
}

void sub_080250C8(void) {
    u8 *state = D_03004830;
    u8 *base = D_03003420;
    u32 idx = state[0x41];
    Entity *ent = (Entity *)&base[idx * 128];

    ent->unk68 += 2;
    state[0x40]++;
}

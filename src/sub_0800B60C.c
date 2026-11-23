extern s16 D_030040F8[];

void sub_08004EA0(s32);

typedef struct {
    u8 pad00[0x68];
    const u8 *unk68;
    u8 pad6C[6];
    u8 unk72;
} B60CActor;

void sub_0800B60C(B60CActor *actor) {
    u16 idx = 0;
    const u8 *cursor = actor->unk68;
    u8 ch;

    do {
        ch = cursor[idx];
        idx++;
    } while (ch != 0x60);

    idx += 2;
    actor->unk68 = cursor + idx;
    if (actor->unk72 != 0) {
        actor->unk72 = 1;
    }
}

void sub_0800B6B0(void) {
    u8 *state = D_03004830;
    s16 timer;

    state[0x2C]--;
    timer = --D_030040F8[0];
    if (timer == 0) {
        state[0x2D] = timer;
        state[0x2C] = timer;
        sub_08004EA0(0x8168);
        state[0x2B]++;
    }
}

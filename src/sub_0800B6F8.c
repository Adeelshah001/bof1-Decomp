extern s16 D_030040F8[];
extern u8 D_03002AB0[];

void sub_08004EA0(s32);
void sub_080017EC(s32);
void sub_0800764C(s32);
void sub_080379D4(s32);
u8 sub_08038458(s32);

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

    actor->unk68 = cursor + (u16)(idx + 2);
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
        state[0x2D] = 0;
        state[0x2C] = 0;
        sub_08004EA0(0x8168);
        state[0x2B]++;
    }
}

void sub_0800B6F8(void) {
    u8 *state = D_03004830;

    if (--state[0x2D] == 0) {
        sub_080017EC(0x49);
        D_03002AB0[0xB8] &= 0xFB;
        state[0x2B]++;
    }
}

void sub_0800B738(void) {
    if (sub_08038458(1) != 0) {
        u8 *state = D_03004830;
        state[0x3F] = 0;
        state[0x40] = 0;
        sub_08004EA0(0x8168);
        sub_0800764C(6);
        sub_080379D4(9);
        state[0x2C] = 2;
        state[0x2D] = 0xD0;
        state[0x2B]++;
    }
}

extern u8 D_03004830[];
extern u8 D_030023E0[];

void sub_080261FC(Entity *p) {
    u8 *state = D_03004830;
    state[0x40] += 1;
    p->unk68 += 2;
}

void sub_080261B4(Entity *actor) {
    u8 value = 0x17;
    u8 *state = D_03004830;
    u8 *mode = state + 0x3F;
    u8 zero = 0;

    *mode = value;
    state[0x40] = zero;
    actor->unk68 += 2;
}

typedef struct {
    u8 pad[0xA8];
    u16 unkA8;
} Struct_030023E0;
extern Struct_030023E0 D_030023E0s;
extern u16 D_03004114;
u8 sub_08023374(void);
u8 sub_08023314(void);

void sub_0802644C(void) {
    u8 result;
    if (D_030023E0s.unkA8 == 0xB4) {
        result = sub_08023314();
    } else {
        result = sub_08023374();
    }
    D_03004114 = result;
}

u8 sub_08027E84(void *arg0);

u8 sub_080266B4(u8 *arg0) {
    u8 value;
    if (arg0[0x3E] != 7) {
        return 0;
    }
    value = sub_08027E84(arg0);
    D_03004114 = value;
    return value;
}

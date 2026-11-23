extern u8 D_03004830[];
extern u8 D_030023E0[];
extern u16 D_03004114;
u8 sub_08023314(void);
u8 sub_08023374(void);

void sub_080261B4(Entity *actor) {
    u8 *state = D_03004830;
    u8 *mode = state + 0x3F;
    u8 zero = 0;
    u8 value = 0x17;

    *mode = value;
    state[0x40] = zero;
    actor->unk68 += 2;
}

typedef struct {
    u8 pad[0xA8];
    u16 unkA8;
} Struct_030023E0;

void sub_0802644C(void) {
    u8 result;
    if (((Struct_030023E0 *)D_030023E0)->unkA8 != 0xB4) {
        result = sub_08023374();
    } else {
        result = sub_08023314();
    }
    D_03004114 = result;
}

u8 sub_08027E84(void *arg0);

u8 sub_080266B4(u8 *arg0) {
    u8 value;
    if (arg0[0x3E] == 7) {
        value = sub_08027E84(arg0);
        D_03004114 = value;
        return value;
    }
    return 0;
}

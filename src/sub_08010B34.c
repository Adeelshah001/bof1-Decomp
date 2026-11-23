typedef struct {
    u8 pad00[0xB8];
    u8 unkB8;
} Struct_03002AB0;

typedef struct {
    u8 pad00[0xA4];
    u16 unkA4;
} Struct_030023E0;

extern u8 D_030023DC;
extern u8 D_03002AB0[];
extern u8 D_03004584;
extern u8 D_02020FC0[];
extern u8 D_020211C0[];
extern u8 D_030023E0[];

void sub_08072CC4(s32);
void sub_080017EC(s32);
void sub_080A0210(const void *, void *, u32);
void sub_0803D454(u16);
void sub_0800312C(s32, s32);
void sub_08004EA0(s32);
void sub_08010530(void);

void sub_08010B04(void) {
    u8 *state;

    if (D_030023DC != 1) {
        ((Struct_03002AB0 *)D_03002AB0)->unkB8 &= 0xFB;
        state = D_03004830;
        state[0x2A] = 0;
        state[0x2B] = 0;
    }
}

void sub_08010B34(void) {
    u8 *state;

    sub_08072CC4(0x2A16);
    state = D_03004830;
    state[0x4D] = 0x30;
    if (D_03004584 == 0) {
        state[0x2B]++;
    }
}

void sub_08010AAC(void) {
    u8 *state;

    if (D_030023DC != 1) {
        sub_080017EC(0x60);
        sub_080A0210(D_02020FC0, D_020211C0, 0x40);
        sub_0803D454(((Struct_030023E0 *)D_030023E0)->unkA4);
        sub_0800312C(0x10, 8);
        state = D_03004830;
        state[0x2C] = 8;
        state[0x2B]++;
    }
}

void sub_08011348(void) {
    u8 *state = D_03004830;
    u32 remaining = state[0x2C];

    remaining--;
    state[0x2C] = remaining;
    if ((u8)remaining == 0) {
        sub_08004EA0(0x82BC);
        sub_08010530();
        state[0x2B]++;
    }
}

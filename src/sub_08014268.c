typedef struct { u8 pad00[0xA4]; u16 unkA4; } Data23E0;
typedef struct { u8 pad00[0x88]; u32 unk88; } ActorCounterFields;

extern Data23E0 D_030023E0;
extern u8 D_030023DC[];
extern ActorCounterFields D_03002AB0;
extern u8 D_030034A0[];

void sub_080137DC(void *arg0);
void sub_080075BC(s32 arg0);
void sub_08037A74(s32 arg0);
void sub_08000248(s32 arg0);
void sub_080379D4(s32 arg0);

void sub_08014200(void) {
    if (D_030023E0.unkA4 == 0x15D) {
        D_03004830[0x2B]++;
    }
}

void sub_08014224(void) {
    if (D_030023DC[0] != 1) {
        D_03002AB0.unk88++;
        D_03004830[0x2B]++;
    }
}

void sub_080141B0(void) {
    u8 v = 0x10;
    u8 *state;

    sub_08037A74(0x800);
    state = D_03004830;
    state[0x2C] = v;
    sub_08000248(0xA);
    sub_080379D4(0x23);
    state[0x2B]++;
}

void sub_08014268(void) {
    sub_080137DC(D_030034A0);
    sub_080075BC(0x8347);
    D_03004830[0x2C] = 0x10;
}

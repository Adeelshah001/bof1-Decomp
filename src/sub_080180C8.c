extern u8 D_03002510[];
extern u8 D_03002AB0[];
extern u8 gEntityPool[];

void sub_0807CB2C(void);
void sub_08003378(s32 arg0);

typedef struct {
    u8 pad00[0x54];
    u16 unk54;
    u8 pad56[0x5C - 0x56];
    u16 unk5C;
    u8 pad5E[0x76 - 0x5E];
    u8 unk76;
    u8 pad77[0x80 - 0x77];
} Actor3420;

void sub_0801810C(void) {
    u8 *p = D_03002510;
    u8 *state;

    p[0x41] = 0xC;
    p[0xD1] = 0xC;
    p[0x161] = 0xC;
    state = D_03004830;
    state[0x2C] = 0x5A;
    state[0x2B]++;
}

void sub_080180C8(void) {
    u8 *p;
    u8 *state;

    sub_0807CB2C();
    p = D_03002510;
    p[0x41] = 0xE;
    p[0xD1] = 0xE;
    p[0x161] = 0xE;
    sub_08003378(0x40);
    state = D_03004830;
    state[0x2C] = 4;
    state[0x2B]++;
}

void sub_0801806C(void) {
    Entity *ab0 = (Entity *)D_03002AB0;
    Actor3420 *actors = (Actor3420 *)D_03003420;
    u8 *state;

    ab0->unk6 = 0x98EC;
    ab0->unk2C = 0x98EC;
    ((Entity *)gEntityPool)->unk6 = 0x28;
    actors[0].unk54 = 0x1001;
    actors[1].unk54 = 0x1001;
    actors[0].unk5C = 1;
    actors[1].unk5C = 1;
    actors[0].unk76 = 0;
    actors[1].unk76 = 0;
    state = D_03004830;
    state[0x2C] = 0x60;
    state[0x2B]++;
}

void sub_08018420(void) {
    u8 *state = D_03004830;
    s8 timer = --state[0x2C];

    if (timer == 0) {
        D_03002AB0[0xB8] &= 0xFB;
        state[0x3F] = timer;
        state[0x40] = timer;
        state[0x2A] = timer;
        state[0x2B] = timer;
        state[0x41] = timer;
        state[0x42] = timer;
    }
}

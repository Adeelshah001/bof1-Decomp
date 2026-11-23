extern u8 D_03002AB0[];
extern u8 gEntityPool[];

typedef struct {
    u8 pad00[0x54];
    u16 unk54;
    u8 pad56[0x5C - 0x56];
    u16 unk5C;
    u8 pad5E[0x76 - 0x5E];
    u8 unk76;
    u8 pad77[0x80 - 0x77];
} Actor3420;

void sub_0801806C(void) {
    Entity *ab0 = (Entity *)D_03002AB0;
    Actor3420 *actors;
    u8 *state;

    ab0->unk6 = 0x98EC;
    ab0->unk2C = 0x98EC;
    ((Entity *)gEntityPool)->unk6 = 0x28;
    actors = (Actor3420 *)D_03003420;
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

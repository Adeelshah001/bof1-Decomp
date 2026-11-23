extern u8 D_03002AB0[];
extern u8 D_03002E1C[];
extern u8 D_03004584[];

void sub_080074D4(void);
void sub_08013894(void);
void sub_08033B88(void *, s32);
void sub_08072CC4(s32);

typedef struct {
    u8 pad00[0x02];
    u16 unk02;
    u8 pad04[0x06 - 0x04];
    u16 unk06;
} Unk3420;

typedef struct {
    u8 pad00[0x2B];
    s8 unk2B;
    u8 pad2C;
    u8 unk2D;
} Unk4830;

void sub_08016604(Entity *entity) {
    u8 *state;

    sub_080074D4();
    sub_08013894();
    state = D_03002AB0;
    (*(u32 *)(state + 0x88))++;
    sub_080075A4(0x834D);
    entity->unk68 += 2;
}

void sub_08016634(Entity *entity) {
    u8 *state = D_03002AB0;

    (*(u32 *)(state + 0x88))++;
    (*(u32 *)(state + 0x3F4))++;
    sub_080075A4(0x83B1);
    entity->unk68 += 2;
}

void sub_0801666C(Entity *entity) {
    u8 *state = D_03002E1C;

    sub_08033B88(state, 1);
    (*(u32 *)(state + 0x88))++;
    sub_080075A4(0x83E5);
    entity->unk68 += 2;
}

void sub_08016B30(void) {
    Unk4830 *state = (Unk4830 *)D_03004830;

    if (state->unk2B != 0) {
        state->unk2D = 0;
        sub_08072CC4(0x133C);
        if (D_03004584[0] == 0) {
            D_03002AB0[0xB8] &= 0xFB;
            ((Unk3420 *)D_03003420)->unk02 = 0x1D58;
            ((Unk3420 *)D_03003420)->unk06 = 0x877C;
            state->unk2B = 0;
        }
    }
}

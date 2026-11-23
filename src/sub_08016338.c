extern u8 D_03002AB0[];
extern u8 D_0202DBD0[];

typedef struct {
    u8 pad00[0x204];
    u16 slots[65];
} ItemSlots;

u8 sub_0805CF40(u16, u16 *);
void sub_080030D4(void);
void sub_08013978(void *);
void sub_08007494(void);
void sub_080074A4(void);
void sub_080074B4(void);
void sub_080074D4(void);

void sub_08016254(Entity *entity) {
    u8 *state = D_03002AB0;
    (*(u32 *)(state + 0x88))++;
    sub_080075A4(0x839A);
    entity->unk68 += 2;
}

void sub_08016338(Entity *entity) {
    u16 slot;

    if (sub_0805CF40(0x157, &slot) == 0) {
        ((ItemSlots *)D_0202DBD0)->slots[slot] = 0x158;
    }
    sub_080030D4();
    sub_080075A4(0x83A1);
    entity->unk68 += 2;
}

void sub_08016388(Entity *entity) {
    u8 *actors = D_03002AB0;
    sub_08013978(actors);
    sub_08013978(actors + 0x124);
    sub_08013978(actors + 0x248);
    sub_08013978(actors + 0x36C);
    D_03004830[0x2B]++;
    sub_080075A4(0x833D);
    entity->unk68 += 2;
}

void sub_08016574(Entity *entity) {
    u8 *state;
    sub_08007494();
    sub_080074A4();
    sub_080074B4();
    sub_080074D4();
    state = D_03002AB0;
    (*(u32 *)(state + 0x88))++;
    sub_080075A4(0x83FE);
    entity->unk68 += 2;
}

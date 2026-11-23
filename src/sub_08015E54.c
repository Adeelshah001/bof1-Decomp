extern u8 D_03002AB0[];
extern void sub_0803EE54(void);
extern void sub_08007494(void);
extern void sub_080074A4(void);
extern void sub_080074B4(void);
extern void sub_080074C4(void);

void sub_08015DF4(void) {
    D_03004830[0x2A] = 3;
    D_03004830[0x2B] = 0;
    sub_0803EE54();
}

void sub_08015E54(Entity *entity) {
    D_03004830[0x2B]++;
    sub_080075A4(0x8359);
    entity->unk68 += 2;
}

void sub_08015D8C(Entity *entity) {
    u8 *state = D_03002AB0;
    (*(u32 *)(state + 0x88))++;
    sub_080075A4(0x8346);
    entity->unk68 += 2;
}

void sub_08015E94(Entity *entity) {
    u8 *state;
    sub_08007494();
    sub_080074A4();
    sub_080074B4();
    sub_080074C4();
    state = D_03002AB0;
    (*(u32 *)(state + 0x88))++;
    entity->unk68 += 2;
}

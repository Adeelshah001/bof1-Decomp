extern u8 D_03002AB0[];
void sub_08007494(void);
void sub_080074A4(void);
void sub_080074B4(void);
void sub_080074C4(void);

void sub_080164B0(Entity *entity) {
    sub_080075A4(0x83F9);
    entity->unk68 += 2;
}

void sub_080164E8(Entity *entity) {
    u8 *state;
    sub_080074A4();
    state = D_03002AB0;
    (*(u32 *)(state + 0x88))++;
    sub_080075A4(0x83FB);
    entity->unk68 += 2;
}

void sub_08016514(Entity *entity) {
    u8 *state;
    sub_08007494();
    sub_080074B4();
    state = D_03002AB0;
    (*(u32 *)(state + 0x88))++;
    sub_080075A4(0x83FC);
    entity->unk68 += 2;
}

void sub_08016544(Entity *entity) {
    u8 *state;
    sub_08007494();
    sub_080074C4();
    state = D_03002AB0;
    (*(u32 *)(state + 0x88))++;
    sub_080075A4(0x83FD);
    entity->unk68 += 2;
}

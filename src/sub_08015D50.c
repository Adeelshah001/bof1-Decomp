extern u8 D_03002AB0[];

void sub_080074B4(void);
void sub_08007494(void);

void sub_08015D50(Entity *entity) {
    u8 *state;

    sub_080074B4();
    sub_080547DC(D_03003420, 3);
    sub_08007494();
    state = D_03002AB0;
    (*(u32 *)(state + 0x88))++;
    sub_080075A4(0x8338);
    entity->unk68 += 2;
}

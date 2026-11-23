extern u8 D_03002AB0[];

void sub_080259E8(void) {
    u8 *base = D_03002AB0;
    Entity *ent = *(Entity **)(base + 0x94);
    ent->unk68 -= 3;
}

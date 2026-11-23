extern u8 D_03002AB0[];

typedef struct {
    u8 pad00[2];
    u16 unk2;
    u8 pad04[0xB8 - 4];
    u8 unkB8;
} Unk2AB0_15CE4;

typedef struct {
    u8 pad00[2];
    u16 unk2;
    u8 pad04[0x68 - 4];
    u32 unk68;
} Actor15CE4;

u8 sub_08001770(s32);
void sub_080074B4(void);
void sub_08007494(void);
void sub_08003528(s32, s32, s32, s32, s32);

void sub_08015C70(Entity *entity) {
    u8 *actors = D_03003420;
    sub_080547DC(actors, 2);
    sub_080547DC(actors + 0x80, 2);
    entity->unk68 += 2;
}

void sub_08015CE4(Actor15CE4 *entity) {
    Unk2AB0_15CE4 *p;

    if (sub_08001770(0x81)) {
        p = (Unk2AB0_15CE4 *)D_03002AB0;
        if (p->unkB8 & 4) {
            if (p->unk2 == entity->unk2) {
                p->unkB8 &= ~4;
            } else if (p->unk2 < entity->unk2) {
                entity->unk68 += 6;
            } else {
                entity->unk68 += 2;
            }
        }
    }
}

void sub_08015D50(Entity *entity) {
    sub_080074B4();
    sub_080547DC(D_03003420, 3);
    sub_08007494();
    (*(u32 *)(D_03002AB0 + 0x88))++;
    sub_080075A4(0x8338);
    entity->unk68 += 2;
}

void sub_08015A30(void) {
    sub_08007494();
    D_03004830[0x2A] = 0x10;
    D_03004830[0x2B] = 0;
    sub_08003528(0, 0xE0, 0, 0xFF00, 0);
    D_03002AB0[0xB8] |= 4;
}

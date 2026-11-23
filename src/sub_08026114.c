/* identical to sub_08015FF0 (matched), with its names changed by decompdecomp */
extern u8 D_03002AB0[];
extern u8 D_03002BD4[];
void sub_08033B88(void *, s32);
void sub_080074D4(void);
void sub_080074B4(void);

void sub_08026114(Entity *entity)
{
    u8 *state = D_03002AB0;
    (*(u32 *)(state + 0x88))++;
    (*(u32 *)(state + 0x1AC))++;
    (*(u32 *)(state + 0x2D0))++;
    (*(u32 *)(state + 0x3F4))++;
    entity->unk68 += 2;
}

void sub_08016048(Entity *entity)
{
    u8 *state = D_03002AB0;
    (*(u32 *)(state + 0x88))++;
    sub_080075A4(0x83C4);
    entity->unk68 += 2;
}

void sub_08015F58(Entity *entity)
{
    u8 *state;
    sub_080075A4(0x83AE);
    state = D_03002BD4;
    sub_08033B88(state, 3);
    (*(u32 *)(state + 0x88))++;
    (*(u32 *)(state + 0x1AC))++;
    (*(u32 *)(state + 0x2D0))++;
    sub_080074D4();
    entity->unk68 += 2;
}

void sub_08015F24(Entity *entity)
{
    u8 *state;
    sub_080075A4(0x83AB);
    state = D_03002BD4;
    sub_08033B88(state, 1);
    sub_080074B4();
    (*(u32 *)((u32)state - 0x9C))++;
    entity->unk68 += 2;
}

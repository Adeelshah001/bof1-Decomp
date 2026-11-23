void sub_0808EAC0(Entity *entity);

void sub_0808B5A0(Entity *entity)
{
    u16 y = 0x2F5A;
    entity->unk6 = y;
    entity->unk2C = y;
    *(u16 *)((u8 *)entity + 0xE6) = y;
    sub_0808EAC0(entity);
}

void sub_08083300(Entity *entity, s32 value);
void sub_0808B6B4(Entity *entity);

void sub_0808B67C(Entity *entity)
{
    u8 timer = --entity->unk54;
    if (timer != 0) {
        sub_0808B6B4(entity);
    } else {
        sub_08083300(entity, 0x24);
        entity->unk4D = 6;
        sub_0808B6B4(entity);
    }
}

extern u8 D_03004F50[];
s32 sub_0807CA70(Entity *entity);
void sub_0808B4BC(Entity *entity);

void sub_0808B48C(Entity *entity)
{
    u8 *state = &entity->unk4D;
    u8 zero = 0;
    u8 *battle;
    *state = 0x26;
    battle = D_03004F50;
    battle[0x5D] = zero;
    if (sub_0807CA70(entity))
        sub_0808B4BC(entity);
}

void sub_08037FC4(Entity *entity, s32 state);
void sub_080380C0(Entity *entity);
void sub_080382A4(Entity *entity);

void sub_0808B420(Entity *entity)
{
    sub_080382A4(entity);
    if (--entity->unk54 == 0) {
        sub_08037FC4(entity, 10);
        sub_080380C0((Entity *)entity->unk74);
        entity->unk4D = 0x22;
    }
}

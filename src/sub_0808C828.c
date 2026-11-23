void sub_0808C844(void *entity, s8 state);

void sub_0808C828(u8 *entity, u8 variant)
{
    u8 state;
    entity[0xE1] = variant;
    state = 6;
    entity[0xE0] = state;
    sub_0808C844(entity, state);
}

extern const u8 D_081529F8[];
void sub_0808C7FC(u8 *entity);
void sub_0808C844(void *entity, s8 state);

void sub_0808C7B0(u8 *entity)
{
    u8 state = entity[0xE0];
    if (state == 10 || state == 8) {
        sub_0808C7FC(entity);
    } else {
        u8 *parent = *(u8 **)(entity + 0x78);
        u8 kind = parent[0x3B];
        u8 yOffset;
        entity[2] = parent[2] - 0x30;
        yOffset = *(const u8 *)(kind + (u32)D_081529F8);
        entity[6] = yOffset + parent[6];
        entity[0x54] = 0x20;
        sub_0808C844(entity, 4);
    }
}

extern u8 D_03004F50[];
u16 sub_0807B2BC(Entity *entity);
void sub_0808C9A0(Entity *entity);

void sub_0808C91C(Entity *entity)
{
    if (sub_0807B2BC(entity) == 0) {
        u8 *battle = D_03004F50;
        u8 delay = battle[0x60];
        entity->unk54 = delay;
        delay++;
        battle[0x4A] = delay;
        sub_0808C9A0(entity);
    }
}

extern u8 D_03004F50[];
void sub_08037FC4(Entity *entity, s32 value);
void sub_0807C600(Entity *entity, s32 value);
s32 sub_0807CA70(Entity *entity);
void sub_08083BB4(Entity *entity);

void sub_0808C950(Entity *entity)
{
    u16 *amount = (u16 *)((u8 *)entity + 0x106);
    u16 saved = *amount;
    u16 half = saved >> 1;
    u8 zero = 0;
    u8 *battle;

    *amount = half;
    sub_08083BB4(entity);
    *amount = saved;
    battle = D_03004F50;
    battle[0x5D] = zero;
    if (sub_0807CA70(entity)) {
        sub_0807C600(entity, 2);
        sub_08037FC4(entity, 0);
    } else {
        entity->unk4D = 12;
    }
}

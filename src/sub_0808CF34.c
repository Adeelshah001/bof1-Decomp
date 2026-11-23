extern u8 D_03004F50[];

s32 sub_08083300(Entity *entity, s32);
void sub_0808CF00(Entity *entity);
void sub_0808CF88(Entity *entity);
s32 sub_0807CA70(Entity *entity);
void sub_08083BB4(Entity *entity);
void sub_0808CF7C(Entity *entity);

void sub_0808CE9C(u8 *arg0)
{
    u8 v = (*(u8 **)(arg0 + 0x74))[0x3A];
    if (v == 0) {
        D_03004F50[0x5D] = v;
        arg0[0x4C] = 2;
        arg0[0x4D] = v;
    }
}

void sub_0808CEC4(Entity *entity)
{
    entity->unk54 = 5;
    while (sub_08083300(entity, 0x3C) == 0) {
        if (--entity->unk54 == 0) {
            break;
        }
    }
    entity->unk4D = 0xE;
    sub_0808CF00(entity);
}

void sub_0808CF00(Entity *entity)
{
    if (!((*(u8 **)((u8 *)entity + 0x74))[0x3A] & 1)) {
        u8 *battle = D_03004F50;
        u8 delay = battle[0x60];
        entity->unk54 = delay;
        delay++;
        battle[0x4A] = delay;
        sub_0808CF88(entity);
    }
}

void sub_0808CF34(Entity *entity)
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
        sub_0808CF7C(entity);
    } else {
        entity->unk4D = 0x12;
    }
}

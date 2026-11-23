s32 sub_08083300(Entity *entity, s32);
void sub_0808CF00(Entity *entity);

void sub_0808CEC4(Entity *entity)
{
    entity->unk54 = 5;
    do {
        if (sub_08083300(entity, 0x3C) == 0 && --entity->unk54 != 0) {
            continue;
        }
        break;
    } while (1);
    entity->unk4D = 0xE;
    sub_0808CF00(entity);
}

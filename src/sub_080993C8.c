void sub_08038264(void *actor);
void sub_080379D4(s32 sound);
Entity *Entity_FindFreeSlot(void);
void sub_080992F0(Entity *child, Entity *actor);

void sub_080993C8(Entity *actor)
{
    u8 *count;
    u8 *field;
    u32 value;
    u32 byteMask;
    u32 underflow;
    Entity *child;

    sub_08038264(actor);
    sub_080379D4(0x1A);
    count = &actor->unk54;
    value = *count - 1;
    *count = value;
    byteMask = 0xFF;
    value &= byteMask;
    underflow = 0x80;
    value &= underflow;
    if (value == 0)
        return;

    field = (u8 *)actor + 0x61;
    value = *field - 1;
    *field = value;
    value &= byteMask;
    value &= underflow;
    if (value != 0)
        *field = 0x1F;
    *count = 3;

    field = (u8 *)actor + 0x55;
    value = *field - 1;
    *field = value;
    value &= byteMask;
    if (value != 0) {
        child = Entity_FindFreeSlot();
        if (child == NULL)
            return;
        sub_080992F0(child, actor);
        field = &child->unk3A;
        *field = 1;
        field += 0x12;
        value = 4;
    } else {
        field = (u8 *)actor + 0x4C;
        value = *field + 1;
    }
    *field = value;
}

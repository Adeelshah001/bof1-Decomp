typedef struct { u8 mode : 8; } ActorMode;

extern u8 D_03004F30[];
void sub_08037FC4(u8 *actor, s32 arg1);
void sub_0803EE6C(Entity *actor);

void sub_080857C4(Entity *actor)
{
    u8 *state4C = (u8 *)actor + 0x4C;
    u8 initial = 2;
    u8 *count;
    u8 *state55;
    u32 mode;
    s32 kind;
    u32 index;
    u32 updatedCount;

    *state4C = initial;
    count = &actor->unk54;
    *count = 3;
    state55 = (u8 *)actor + 0x55;
    *state55 = initial;
    mode = ((const ActorMode *)(state55 - 0x1A))->mode;
    if (0x80 & mode) {
        D_03004F30[0xC] = 0xFD & D_03004F30[0xC];
        sub_0803EE6C(actor);
        return;
    }

    mode <<= 24;
    updatedCount = mode >> 24;
    if (updatedCount == 0xE) {
        updatedCount = 4;
        goto storeCount;
    }
    if (updatedCount == 2) {
        updatedCount = *count * 2;
storeCount:
        *count = updatedCount;
    }
    kind = actor->unk3B;
    index = kind;
    index -= 8;
    if (index > 9)
        D_03004F30[0xC] = 2 | D_03004F30[0xC];
    sub_08037FC4((u8 *)actor, kind);
}

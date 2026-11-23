void *Entity_FindFreeSlot(void);

void sub_0804C170(Entity *actor)
{
    Entity *slot = Entity_FindFreeSlot();
    if (slot != NULL) {
        slot->unk3B = 0xD;
        ((u8 *)slot)[0x3C] = 0xC;
        slot->unk3A = 1;
    }
    slot = Entity_FindFreeSlot();
    if (slot != NULL) {
        slot->unk3B = 0xE;
        ((u8 *)slot)[0x3C] = 0xC;
        slot->unk3A = 1;
    }
    slot = Entity_FindFreeSlot();
    if (slot != NULL) {
        slot->unk3B = 0xF;
        ((u8 *)slot)[0x3C] = 0xC;
        slot->unk3A = 1;
    }
    *(u16 *)((u8 *)actor + 0xA6) += 2;
}

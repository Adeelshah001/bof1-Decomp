typedef struct {
    u8 pad00[0x68];
    u8 entries[1];
} ActorList8025C;

typedef struct {
    u8 pad00[0x7D];
    u8 flags7D;
    u8 pad7E[0x62];
    u8 stateE0;
} Actor8025C;

typedef struct {
    u8 pad00[0xF1];
    u8 flagsF1;
    u8 padF2[0x32];
} ActorSlot8025C;

ActorSlot8025C *sub_0808025C(ActorList8025C *list, Actor8025C *actor)
{
    u16 i = 0;
    u32 endFlag = 0x80;
    u8 *flags = &actor->flags7D;
    u8 *state = &actor->stateE0;

    u8 entry;
    ActorSlot8025C *slot;
    u32 slotFlags;

    goto readEntry;
nextEntry:
    ++i;
readEntry:
    entry = list->entries[i];
    if (entry & endFlag)
        goto notFound;
    entry -= 4;
    if (entry & endFlag)
        goto nextEntry;
    slot = &((ActorSlot8025C *)D_03003420)[entry];
    slotFlags = slot->flagsF1;
    slotFlags &= 3;
    if (!slotFlags)
        goto nextEntry;
    {
        u32 priorFlags = *flags;
        u32 flagsMask = 0xF0;
        flagsMask &= priorFlags;
        *flags = flagsMask;
        *state = 8;
    }
    goto done;
notFound:
    slot = NULL;
done:
    return slot;
}

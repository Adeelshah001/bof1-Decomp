typedef struct {
    s32 *state;
    u32 reserved[2];
} AudioSlot;

typedef struct {
    s32 song;
    u16 slot;
} AudioEntry;

extern AudioSlot D_080BB7EC[];
extern AudioEntry D_080BB858[];
void sub_0809F5B4(void *);
void sub_0809F4D0(void *, s32);


void sub_0809EE68(u16 index)
{
    AudioSlot *slots = D_080BB7EC;
    AudioEntry *songs = D_080BB858;
    AudioEntry *song = songs + index;
    s32 *state = slots[song->slot].state;

    if (*state == song->song)
        sub_0809F5B4(state);
}

void sub_0809EDC8(u16 index)
{
    AudioSlot *slots = D_080BB7EC;
    AudioEntry *songs = D_080BB858;
    AudioEntry *song = songs + index;
    s32 *state = slots[song->slot].state;
    s32 current = state[0];
    s32 requested = song->song;

    if (current != requested) {
        sub_0809F4D0(state, requested);
    } else {
        s32 status = state[1];
        if (*(u16 *)(state + 1) == 0 || status < 0)
            sub_0809F4D0(state, current);
    }
}

void sub_0809ED9C(u16 index)
{
    AudioSlot *slots = D_080BB7EC;
    AudioEntry *songs = D_080BB858;
    AudioEntry *song = songs + index;
    s32 *state = slots[song->slot].state;
    sub_0809F4D0(state, song->song);
}

void sub_0809ECF8(void *player, u16 volume)
{
    u8 *p = player;
    if (*(u32 *)(p + 0x34) == 0x68736D53) {
        *(u16 *)(p + 0x26) = volume;
        *(u16 *)(p + 0x24) = volume;
        *(u16 *)(p + 0x28) = 0x100;
    }
}

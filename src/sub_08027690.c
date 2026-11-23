typedef struct {
    u8 pad00[0x3A];
    u8 active;
    u8 pad3B[0x88 - 0x3B];
    u32 step;
    u8 pad8C[0x124 - 0x8C];
} EventActor;

typedef struct {
    u8 pad00[0xA0];
    u16 id;
} ActorSelector;

typedef u8 (*ActorAction)(void *, u16, u16);
typedef struct {
    u16 id;
    ActorAction action;
} ActorActionEntry;

extern u8 D_03002AB0[];
extern ActorSelector D_030023E0;
extern u16 D_03002484;
u8 *sub_0803EDDC(u16);
void sub_080464C0(void);

void sub_0802772C(u8 index) {
    ((EventActor *)D_03002AB0)[index].step++;
}

void sub_080277C0(EventActor *actors, u8 *index) {
    EventActor *actor = &actors[*index];
    if (actor->active)
        actor->step++;
    (*index)++;
}

void sub_08027690(u16 arg0) {
    u8 *actor = sub_0803EDDC(D_030023E0.id);
    if (actor != NULL) {
        actor[0x3A] = 1;
        actor[0x3B] = 1;
        actor[0x3C] = arg0;
        *(u32 *)(actor + 0x64) = (u32)sub_080464C0;
    }
}

u8 sub_080277EC(void *unused, const ActorActionEntry *entry, u16 arg2, u16 arg3) {
    while (entry->id != 0x8000) {
        if (entry->id == D_03002484)
            return entry->action(D_03002AB0, arg2, arg3);
        entry++;
    }
    return 0;
}

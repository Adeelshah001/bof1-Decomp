typedef struct {
    u8 pad00[4];
    u8 position[0x38 - 4];
    u16 unk38;
    u8 pad3A[0x54 - 0x3A];
    u8 timer;
    u8 pad55[0x61 - 0x55];
    u8 unk61;
    u8 pad62[0x80 - 0x62];
    u8 mode;
    u8 pad81[0x160 - 0x81];
    u8 unk160;
} ModeActor;

extern u8 D_03003F98;
void sub_0803828C(ModeActor *, void *, u16, u8);
void sub_0803A8EC(ModeActor *);

void sub_08048E20(ModeActor *actor)
{
    u8 *mode = &actor->mode;
    u8 flags = *(volatile u8 *)mode;
    u32 mask = 0x80;
    u32 active = mask;

    active &= flags;
    if (active != 0) {
        u32 timer;
        u8 remaining;
        u8 *state;

        timer = actor->timer;
        timer--;
        actor->timer = timer;
        remaining = timer;
        state = &actor->unk61;
        if (remaining == 0) {
            actor->unk160 = mask;
            actor->timer = 0xE;
            D_03003F98 &= 0x7F;
            *state = remaining;
            *mode = remaining;
        }
        sub_0803828C(actor, actor->position, actor->unk38, *state);
    }
    sub_0803A8EC(actor);
}

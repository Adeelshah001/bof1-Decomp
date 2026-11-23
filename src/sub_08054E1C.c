extern u8 D_03004584;
void sub_08037C98(void *, s32);
void sub_0803828C(void *, void *, u16, u8);
void sub_0803A8EC(void *);
void sub_0803EE54(void *);
void sub_08044794(void);
void sub_080447B0(void);
void sub_08072CC4(s32);

typedef struct {
    u8 pad00[4];
    u8 position[0x54 - 4];
    u8 timer;
    u8 pad55[0x5E - 0x55];
    u16 unk5E;
    u8 pad60[0x6F - 0x60];
    u8 unk6F;
} TimedActor;

void sub_08054E1C(TimedActor *actor)
{
    u32 timer = actor->timer;
    timer--;
    actor->timer = timer;
    if ((u8)timer == 0) {
        u8 busy;

        sub_08044794();
        sub_08072CC4(0x707);
        busy = D_03004584;
        if (busy != 0)
            return;
        sub_080447B0();
        sub_0803EE54(actor);
        D_03004830[0x2A] = 8;
        D_03004830[0x2B] = busy;
    } else {
        sub_0803828C(actor, actor->position, actor->unk5E, actor->unk6F);
        sub_08037C98(actor, 0);
    }
    sub_0803A8EC(actor);
}

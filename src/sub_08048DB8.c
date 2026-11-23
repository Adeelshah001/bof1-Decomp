typedef struct {
    u8 pad00[0x54];
    u8 timer;
    u8 step : 8;
} PatternActor;

extern u16 D_03004890;
extern const u8 D_080A6674[3];
void *sub_080A0A68(void *, const void *, u32);
void sub_08037C98(PatternActor *, s32);
void sub_0803A8EC(PatternActor *);
void sub_0809EE14(u16);

void sub_08048DB8(PatternActor *actor)
{
    u8 durations[3];
    u32 timer;
    u32 step;

    sub_080A0A68(durations, D_080A6674, sizeof(durations));
    timer = actor->timer;
    timer--;
    actor->timer = timer;
    if ((u8)timer != 0) {
        actor->step--;
        step = actor->step;
        if (step == 0)
            actor->step = 3;
        actor->timer = durations[step];
        sub_0809EE14((u16)(D_03004890 + 0x1C));
    }
    sub_08037C98(actor, 0);
    sub_0803A8EC(actor);
}

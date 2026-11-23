typedef struct {
    u8 pad00[0x4C];
    u8 phase;
    u8 pad4D[0x54 - 0x4D];
    u8 delay : 8;
    u8 cycles : 8;
} ActionState;

void *sub_0809568C(void *, s32);
void sub_08095854(ActionState *);
void sub_0809586C(ActionState *);

void sub_080916B4(ActionState *actor)
{
    u8 phase = actor->phase;
    if (phase == 0) {
        actor->cycles = 9;
        actor->delay = phase;
        sub_0809586C(actor);
        return;
    }
    if (--actor->delay & 0x80) {
        actor->delay = 4;
        if (--actor->cycles & 0x80) {
            sub_08095854(actor);
            return;
        }
        sub_0809568C(actor, 0);
    }
}

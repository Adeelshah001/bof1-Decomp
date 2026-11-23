typedef struct Actor892C0 {
    u8 pad00[0x4C];
    u8 state;
    u8 step;
    u8 pad4E[0x13];
    u8 phase;
    u8 pad62[0xA];
    struct Actor892C0 *parent;
    u8 timer;
    u8 pad71[0x69];
    u8 parentCountA;
    u8 parentCountB;
    u8 padDC[0x1A];
    u16 amount;
} Actor892C0;

void sub_08038278(void *);

void sub_080892C0(Actor892C0 *actor)
{
    Actor892C0 *parent;
    u8 *timer;
    u8 remaining;
    u16 *parentAmount;
    u16 *actorAmount;
    u8 *count;
    u8 *phase;
    u32 nextPhase;

    sub_08038278(actor);
    timer = &actor->timer;
    remaining = --*timer;
    if (remaining == 0) {
        parent = actor->parent;
        parentAmount = &parent->amount;
        actorAmount = &actor->amount;
        if (*parentAmount < *actorAmount) {
            actor->state = 6;
            actor->step = remaining;
            count = &parent->parentCountA;
            --*count;
            ++count;
            --*count;
        } else {
            *timer = 4;
            actor->step++;
            phase = &actor->phase;
            nextPhase = *phase + 0x10;
            nextPhase &= 0x1F;
            *phase = nextPhase;
        }
    }
}

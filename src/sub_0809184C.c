typedef struct {
    u8 value : 8;
} Countdown9184C;

typedef struct Actor9184C {
    u8 pad00[0x3C];
    u8 busy;
    u8 pad3D[0x0F];
    u8 state;
    u8 pad4D[7];
    Countdown9184C timer;
    u8 padTimerEnd[0x6C - 0x54 - sizeof(Countdown9184C)];
    struct Actor9184C *selected;
} Actor9184C;

extern u8 D_03003410;
extern u8 D_03004F9A;
extern u8 D_03004F50[];

void sub_08096CD4(void *);
u8 sub_08096DB0(void *, Actor9184C **);

static inline u8 ActorBusy(Actor9184C *actor)
{
    return actor->busy;
}

void sub_0809184C(Actor9184C *actor)
{
    u32 busy;
    Actor9184C *selected;
    Actor9184C *candidate;
    Countdown9184C *timer;
    u32 clear;
    u8 *failed;
    u8 *status;

    D_03003410 = 0;
    actor->timer.value = 8;
    timer = &actor->timer;
    clear = 0;
    failed = &D_03004F9A;
    do {
        if (--timer->value & 0x80) {
            *failed = clear;
            sub_08096CD4(actor);
            return;
        }
        sub_08096DB0(actor, &candidate);
        selected = candidate;
    } while ((busy = ActorBusy(selected)) != 0);

    actor->selected = selected;
    status = D_03004F50;
    status += 0x5D;
    *status = busy;
    actor->state = 0xA;
}

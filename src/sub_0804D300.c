typedef struct Boulder Boulder;

struct Boulder {
    u8 pad00[0x14];
    union {
        s32 full;
        u16 half[2];
    } velocityY;
    u8 pad18[0x54 - 0x18];
    u8 timer;
    u8 pad55[0x64 - 0x55];
    void (*update)(Boulder *);
    u8 pad68[0xC8 - 0x68];
    u8 skipCollision;
};

s32 sub_0804BDE4(Boulder *);
void sub_0804C020(Boulder *);
void sub_0804D2D0(Boulder *);
void sub_0804D300(Boulder *);
void sub_0804D330(Boulder *);

void sub_0804D248(Boulder *actor)
{
    u8 *timer;
    sub_0804BDE4(actor);
    timer = &actor->timer;
    if (--*timer == 0) {
        *timer = 0xDE;
        actor->update = sub_0804C020;
    }
}

void sub_0804D298(Boulder *actor)
{
    u8 *timer;
    sub_0804BDE4(actor);
    timer = &actor->timer;
    if (--*timer == 0) {
        actor->skipCollision = 1;
        actor->velocityY.half[0] = 0xC000;
        *timer = 0x80;
        actor->update = sub_0804D2D0;
    }
}

void sub_0804D2D0(Boulder *actor)
{
    u8 *timer;
    sub_0804BDE4(actor);
    timer = &actor->timer;
    if (--*timer == 0) {
        actor->velocityY.half[0] = 0xE000;
        *timer = 0x80;
        actor->update = sub_0804D300;
    }
}

void sub_0804D300(Boulder *actor)
{
    u8 *timer;
    u8 remaining;
    sub_0804BDE4(actor);
    timer = &actor->timer;
    remaining = --*timer;
    if (remaining == 0) {
        *timer = 0x80;
        actor->velocityY.full = remaining;
        actor->update = sub_0804D330;
    }
}

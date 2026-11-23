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
u8 sub_0804BD30(Boulder *);
void sub_0803EE6C(Boulder *);
void sub_0804D3C8(Boulder *);
void sub_0804D3F8(Boulder *);
void sub_0804D424(Boulder *);

void sub_0804D3F8(Boulder *actor)
{
    u8 *timer;
    sub_0804BDE4(actor);
    timer = &actor->timer;
    if (--*timer == 0) {
        actor->velocityY.half[0] = 0x8000;
        actor->update = sub_0804D424;
    }
}

void sub_0804D3C8(Boulder *actor)
{
    u8 *timer;
    sub_0804BDE4(actor);
    timer = &actor->timer;
    if (--*timer == 0) {
        actor->velocityY.half[0] = 0xC000;
        *timer = 0x80;
        actor->update = sub_0804D3F8;
    }
}

void sub_0804D390(Boulder *actor)
{
    u8 *timer;
    u8 remaining;
    sub_0804BDE4(actor);
    timer = &actor->timer;
    remaining = --*timer;
    if (remaining == 0) {
        actor->velocityY.full = -0x20;
        *timer = 0x80;
        actor->skipCollision = remaining;
        actor->update = sub_0804D3C8;
    }
}

void sub_0804D460(Boulder *actor)
{
    u8 active = 1;
    u8 remaining = actor->timer;
    if (remaining == 0)
        active = sub_0804BD30(actor);
    else
        actor->timer = remaining - 1;
    if (active == 0) {
        D_03004830[0x2D] = 1;
        sub_0803EE6C(actor);
    }
}

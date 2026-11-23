typedef struct Actor89768 {
    u8 pad00[2];
    u16 x;
    u8 pad04[2];
    u16 y;
    u8 pad08[0x24];
    u16 savedY;
    u8 pad2E[0x28];
    u8 pad56[0x0B];
    u8 mode;
    u8 pad62[0x16];
    struct Actor89768 *parent;
} Actor89768;

void sub_08038278(void *);
void sub_0807B27C(void *);
void sub_0807C638(void *, s32);
void sub_080897D8(void *);

void sub_08089768(void *arg)
{
    Actor89768 *actor = arg;
    u8 *timerField = arg;
    u32 mask;
    u32 shiftedTimer;
    u8 timer;
    Actor89768 *parent;

    timerField += 0x55;
    timer = --*timerField;
    shiftedTimer = (u32)timer << 24;
    mask = 0x03000000;
    mask &= shiftedTimer;
    if ((mask >> 24) == 3)
        sub_0807C638(actor, 0);
    sub_08038278(actor);
    actor->savedY = actor->y;
    parent = actor->parent;
    if (!(0xF0 & actor->mode) && (u16)(parent->x - actor->x) <= 31)
        sub_080897D8(actor);
    else if (parent->y >= actor->y)
        sub_0807B27C(actor);
    else
        sub_080897D8(actor);
}

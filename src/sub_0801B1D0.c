extern u8 D_03002AB0[];
extern u8 D_03004408;
void QueueActorEvent(s32);
void sub_08019DA0(void);
void sub_08019858(void *);
void sub_0801A024(void *);
void sub_0800764C(s32);
void sub_080379D4(s32);

typedef struct {
    u16 unk00;
    u16 x;
    u16 unk04;
    u16 y;
} ActorInitialPosition;

void sub_0801B180(void)
{
    ActorInitialPosition *actor = (ActorInitialPosition *)D_03003420;
    actor->x = 0x1AF8;
    actor->y = 0x66DC;
    sub_08019DA0();
}

void sub_0801B1A0(void)
{
    QueueActorEvent(0x849E);
    D_03002AB0[0xB8] &= 0xFB;
    D_03004830[0x2B]++;
}

void sub_0801B1D0(void)
{
    u8 *actors = D_03003420;
    u8 *actor;
    sub_08019858(actors);
    actor = actors + 0x80;
    sub_0801A024(actor);
    sub_08019858(actor);
    sub_08019858(actors + 0x100);
    actor = actors + 0x180;
    sub_0801A024(actor);
    sub_08019858(actor);
    D_03004830[0x2B]++;
}

void sub_0801B220(void)
{
    u8 *state;
    D_03004408 |= 3;
    sub_0800764C(0x10);
    sub_080379D4(8);
    state = D_03004830;
    state[0x2D]++;
    state[0x2B]++;
}

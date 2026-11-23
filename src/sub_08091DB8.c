struct Actor91DB8 {
    u8 pad00[0x3B];
    u8 unk3B;
    u8 pad3C[0x18];
    u8 timer : 8;
    u8 unk55;
};

void sub_08038264(struct Actor91DB8 *);
void sub_0803A974(struct Actor91DB8 *);
void sub_0807B270(struct Actor91DB8 *);
struct Actor91DB8 *sub_0809568C(struct Actor91DB8 *, s32);
void sub_08095DD4(struct Actor91DB8 *);

void sub_08091DB8(struct Actor91DB8 *actor)
{
    s32 action;
    struct Actor91DB8 *effect;

    sub_08038264(actor);
    sub_0807B270(actor);
    if (!(--actor->timer & 0x80)) {
        sub_0803A974(actor);
        return;
    }
    actor->timer = 4;
    action = actor->unk3B;
    if (action == 0x15 || action == 0x11 || action == 0x43)
        action = 0x12;
    else
        action = 2;
    effect = sub_0809568C(actor, action);
    effect->unk55 = actor->timer;
    sub_08095DD4(actor);
}

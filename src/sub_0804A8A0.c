typedef void (*EntityCallback)(Entity *);
extern u8 D_030033F8[];
extern EntityCallback const D_080FD274[], D_080FD280[];

void sub_0804A8A0(Entity *actor)
{
    Entity *self = actor;
    u8 timer;

    if (D_030033F8[0] == 0)
        D_080FD274[actor->pad4E[2] >> 1](actor);

    if (actor->unk3B == 0) {
        timer = ((u8 *)actor)[0xC4];
        if (timer != 0)
            ((u8 *)actor)[0xC4] = timer - 1;
        D_080FD280[self->unk51 >> 1](self);
    }
}

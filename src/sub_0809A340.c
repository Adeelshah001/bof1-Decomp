void sub_080352D0(const char *, ...);
void sub_08099220(Entity *);
void sub_08099264(Entity *);
void sub_080993C8(Entity *);
void sub_0809A414(Entity *);
void sub_0809A43C(Entity *);
extern const char D_080A7DC0[], D_080A7C18[];

void sub_0809A340(Entity *actor)
{
    u8 state = ((u8 *)actor)[0x4C];
    switch (state) {
    case 0:
        sub_08099220(actor);
        break;
    case 1:
        sub_08099264(actor);
        break;
    case 2:
        sub_080993C8(actor);
        break;
    case 4:
        sub_0809A43C(actor);
        break;
    case 3:
    case 5:
        sub_0809A414(actor);
        break;
    default:
        sub_080352D0(D_080A7DC0, D_080A7C18, 0x5B9, state);
        break;
    }
}

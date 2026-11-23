void sub_08090A1C(Entity *actor);
void sub_08090A28(Entity *actor);
void sub_08090A60(Entity *actor);
void sub_08090A84(Entity *actor);
void sub_08090AAC(Entity *actor);
void sub_08090AF0(Entity *actor);

void sub_080909A0(Entity *actor)
{
    switch (actor->unk4D) {
    case 0:
        sub_08090A1C(actor);
        break;
    case 2:
        sub_08090A28(actor);
        break;
    case 4:
        sub_08090A60(actor);
        break;
    case 6:
        sub_08090A84(actor);
        break;
    case 8:
        sub_08090AAC(actor);
        break;
    case 10:
        sub_08090AF0(actor);
        break;
    }
}

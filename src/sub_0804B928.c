void sub_0803A508(void *);
void sub_0804D724(void *);
void sub_0804D784(void *, s32, s32);

void sub_0804B928(Entity *actor)
{
    u16 x, y, value;
    u8 *field;
    actor->unk54 = 0;
    sub_0804D784(actor, 0, 0);
    x = *(u16 *)((u8 *)actor + 2);
    y = actor->unk6;
    *(vu16 *)((u8 *)actor + 2) = x;
    *(vu16 *)&actor->unk6 = y;
    actor->unk2C = y;
    sub_0803A508(actor);
    actor->unk2A = 0x7A;
    field = &actor->unk41;
    value = 0x36;
    *field = value;
    value += 0xDA;
    actor->unk1C = value;
    sub_0804D724(actor);
}

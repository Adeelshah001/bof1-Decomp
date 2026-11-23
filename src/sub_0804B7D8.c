u16 sub_08037C98(void *, s32);
void sub_0803A974(void *);
void sub_0803EE6C(void *);
void sub_0803828C(void *, void *, u16, u8);
void sub_08037FC4(void *, u16);
void sub_080379D4(s32);
void sub_0804B7A4(Entity *);
void sub_0804B85C(Entity *);
void sub_0804B628(Entity *);
extern u16 D_03004890;

#define HALF(actor, offset) (*(u16 *)((u8 *)(actor) + (offset)))
void sub_0804B7D8(Entity *actor)
{
    Entity *saved = actor;
    sub_08037C98(actor, 0);
    if (--actor->unk54 == 0)
        actor->unk64 = (u32)sub_0804B7A4;
    sub_0803A974(saved);
}


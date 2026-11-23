u16 sub_08037C98(void *, s32);
s32 sub_0803A8EC(void *);
void sub_08037FC4(void *, u16);
void sub_08054D70(Entity *);
void sub_08054DBC(Entity *);
void sub_08054B08(Entity *);
void sub_08054E1C(Entity *);
void sub_08030BB0(void *, s32);
extern u8 D_030045B0[];
extern u8 D_03002AB0[];
void sub_08054E90(Entity *actor)
{
    u32 zero;
    u8 *field;
    u8 *flags;
    u32 x;
    actor->unk78 = (u32)sub_08054E1C;
    sub_08037FC4(actor, 2);
    field = &actor->unk54;
    zero = 0;
    *field = 0xBC;
    flags = field + 0x1B;
    *flags = 0x10;
    *(u16 *)((u8 *)actor + 0x5E) = zero;
    x = 0xEA0;
    *(u16 *)((u8 *)actor + 2) = x;
    sub_0803A8EC(actor);
    sub_08030BB0(D_03002AB0, 0x26);
}

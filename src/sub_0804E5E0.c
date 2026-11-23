u16 sub_08037C98(Entity *, s32);
void sub_0803A8EC(Entity *);
void sub_08037FC4(Entity *, s32);
Entity *sub_0804E628(Entity *);
void sub_0804E668(Entity *);
void sub_0804E6BC(Entity *);
void sub_0804E510(Entity *);
void sub_080379D4(s32);
void sub_0804DC64(Entity *);
void sub_0804E104(Entity *);

extern u8 D_03003F98;
extern u8 D_03004E88;
extern u16 D_03004890;

void sub_0804E5E0(Entity *actor)
{
    Entity *saved = actor;

    sub_08037C98(actor, 0);
    if (--actor->unk54 == 0) {
        sub_08037FC4(actor, 4);
        actor->unk64 = (u32)sub_0804E6BC;
        sub_0804E628(actor)->unk64 = (u32)sub_0804E668;
    }
    sub_0803A8EC(saved);
}

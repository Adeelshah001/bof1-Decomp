extern u8 D_03003F98;
u16 sub_08037C98(void *, s32);
void sub_0803A974(void *);
void sub_0803EE6C(void *);
void sub_08050B78(Entity *);

void sub_08050BDC(Entity *actor)
{
    Entity *e = actor;
    if (sub_08037C98(actor, 1) == 0) {
        if (actor->unk3B & 0x80) {
            sub_0803EE6C(actor);
            return;
        }
        if (D_03003F98 & 0x20)
            goto remove;
        actor->unk64 = (u32)sub_08050B78;
    }
    sub_0803A974(actor);
    return;
remove:
    sub_0803EE6C(e);
}

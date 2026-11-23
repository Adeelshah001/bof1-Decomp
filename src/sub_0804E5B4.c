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

void sub_0804E5B4(Entity *actor)
{
    Entity *saved = actor;

    if (!(D_03003F98 & 0x80))
        sub_08037C98(actor, 0);
    sub_0803A8EC(saved);
}

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

void sub_0804E668(Entity *actor)
{
    u8 *state = &actor->unk54;
    void (*update)(Entity *);

    actor->unk2C--;
    *(u16 *)state = 0x1101;
    state[0xD] = 0x18;
    *(u16 *)((u8 *)actor + 0x38) = 0x1E0;
    update = sub_0804E510;
    actor->unk64 = (u32)update;
    sub_08037FC4(actor, 6);
    D_03004890 = 0x190;
    sub_080379D4(0xC);
    update(actor);
}

void sub_0804E31C(Entity *actor)
{
    if (*(u16 *)(D_03004830 + 0x2A) == 0x1920) {
        u8 *counter = &D_03004E88;
        u8 step = *counter;
        u32 y;

        if (step == 0) {
            y = actor->unk6 + 0x68;
            goto setY;
        }
        if (step <= 0x20) {
            y = actor->unk6 - 1;
setY:
            actor->unk6 = y;
            *counter = step + 1;
        }
        sub_0804DC64(actor);
        sub_0804E104(actor);
    }
}

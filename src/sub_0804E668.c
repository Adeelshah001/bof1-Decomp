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

void sub_0804E668(Entity *actor)
{
    u8 *state;
    u32 value;
    void (*update)(Entity *);

    value = actor->unk2C;
    actor->unk2C = --value;
    state = &actor->unk54;
    value = 0x1101;
    *(u16 *)state = value;
    state += 0xD;
    value = 0x18;
    *state = value;
    value = 0x1E0;
    *(u16 *)((u8 *)actor + 0x38) = value;
    update = sub_0804E510;
    actor->unk64 = (u32)update;
    sub_08037FC4(actor, 6);
    D_03004890 = 0x190;
    sub_080379D4(0xC);
    update(actor);
}


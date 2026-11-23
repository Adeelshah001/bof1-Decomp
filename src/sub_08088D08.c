u32 sub_08091590(u8 *);
s32 sub_080915D4(const Entity *);
void sub_080380F4(u8 *, void *, s32, s32);
void sub_08037FC4(void *, s32);
void sub_0807C484(u8 *);
void sub_08088D6C(u8 *);

void sub_08088D08(u8 *actor)
{
    u32 flags;
    u16 speed;
    sub_08091590(actor);
    actor[0x70] = 0;
    sub_080380F4(actor, *(void **)&actor[0x78], actor[0x55], 0xC);

    flags = actor[0x61];
    flags &= 0xF0;
    *(u16 *)&actor[0x46] = flags;
    speed = 0x140;
    *(u16 *)&actor[0x38] = speed;
    sub_08037FC4(actor, (u16)sub_080915D4((const Entity *)actor));
    sub_0807C484(actor);
    actor[0x4D] = 4;
    sub_08088D6C(actor);
}

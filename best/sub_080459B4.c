extern u8 D_030023E0[];
extern const u8 D_08044CB0[];
s32 sub_0803A8EC(void *);
s32 sub_080448A4(void *, s32);
void sub_08045504(Entity *);
void sub_08044DFC(Entity *);
void sub_080452A8(Entity *);
void sub_0804503C(Entity *);

void sub_08045808(Entity *actor)
{
    Entity *saved = actor;
    u8 *scene = D_030023E0;
    scene += 0xA4;
    if (*(u16 *)scene == 0xBE)
        actor->unk41 = 0x3E;
    saved->unk1C = 0x80;
    saved->unk64 = (u32)sub_08045504;
    sub_0803A8EC(saved);
}

void sub_080458D4(Entity *actor)
{
    u8 *flags;
    u32 flag;
    u32 callback;
    actor->unk1C = 0x80;
    flags = &actor->unk41;
    flag = *flags;
    *flags = 0x20 | flag;
    if ((u8)sub_080448A4(actor, 14) && actor->unk60 == 0)
        callback = (u32)sub_08044DFC;
    else
        callback = (u32)D_08044CB0 + 1;
    actor->unk64 = callback;
}

void sub_08045720(Entity *actor)
{
    Entity *saved = actor;
    u8 *scene = D_030023E0;
    u8 *flags;
    u32 flag;
    u32 zero;
    scene += 0xA4;
    if (*(u16 *)scene == 0x1B2)
        actor->unk41 = 0x2E;
    zero = 0;
    saved->unk1C = 0xA0;
    flags = &saved->unk3A;
    flag = *flags;
    *flags = 0x80 | flag;
    saved->unk64 = (u32)sub_080452A8;
    *(u8 *)&saved->unk6C = zero;
}

void sub_080459B4(Entity *actor)
{
    u32 zero = 0;
    u32 callback;
    u32 y;
    actor->unk1C = 0xA0;
    if ((u8)sub_080448A4(actor, 1)) {
        if (actor->unk60 == 0) {
            *(u8 *)&actor->unk6C = zero;
            callback = (u32)sub_0804503C;
            goto set_callback;
        }
        y = 0x2868;
        actor->unk6 = y;
        actor->unk2C = y;
        y += 4;
        *(u16 *)((u8 *)actor + 0x4A) = y;
    }
    callback = (u32)sub_08045504;
set_callback:
    actor->unk64 = callback;
}

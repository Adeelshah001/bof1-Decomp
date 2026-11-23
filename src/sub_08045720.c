extern u8 D_030023E0[];
extern const u8 D_08044CB0[];
s32 sub_0803A8EC(void *);
s32 sub_080448A4(void *, s32);
void sub_08045504(Entity *);
void sub_08044DFC(Entity *);
void sub_080452A8(Entity *);
void sub_0804503C(Entity *);

void sub_08045720(Entity *actor)
{
    Entity *saved = actor;
    u8 *scene = D_030023E0;
    u8 *flags;
    u32 flag;
    u32 zero;
    u32 mask;
    scene += 0xA4;
    if (*(u16 *)scene == 0x1B2)
        actor->unk41 = 0x2E;
    zero = 0;
    saved->unk1C = 0xA0;
    flags = &saved->unk3A;
    flag = *flags;
    mask = 0x80;
    mask |= flag;
    *flags = mask;
    saved->unk64 = (u32)sub_080452A8;
    *(u8 *)&saved->unk6C = zero;
}


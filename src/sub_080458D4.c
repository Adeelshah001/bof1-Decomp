extern u8 D_030023E0[];
extern const u8 D_08044CB0[];
s32 sub_0803A8EC(void *);
s32 sub_080448A4(void *, s32);
void sub_08045504(Entity *);
void sub_08044DFC(Entity *);
void sub_080452A8(Entity *);
void sub_0804503C(Entity *);

void sub_080458D4(Entity *actor)
{
    u8 *flags;
    u32 flag;
    u32 mask;
    actor->unk1C = 0x80;
    flags = &actor->unk41;
    flag = *flags;
    mask = 0x20;
    mask |= flag;
    *flags = mask;
    if (!(u8)sub_080448A4(actor, 14))
        goto fallback;
    if (actor->unk60 != 0)
        goto fallback;
    actor->unk64 = (u32)sub_08044DFC;
    return;
fallback:
    actor->unk64 = 0x08044CB1;
}


void sub_0803A8EC(Entity *);
void sub_0803EE38(Entity *);
void sub_08046610(Entity *);

void sub_08047624(Entity *actor)
{
    Entity *saved = actor;
    u16 *timer = (u16 *)&actor->unk54;
    u32 remaining = *timer - 1;
    *timer = remaining;
    if ((u16)remaining == 0)
        sub_0803EE38(actor);
    else if (!(remaining & 1))
        sub_0803A8EC(saved);
}

void sub_080475F4(Entity *actor)
{
    Entity *saved = actor;
    u8 *timer = &actor->unk54;
    if (--*timer == 0) {
        timer -= 0x19;
        *timer += 3;
        actor->unk64 = (u32)sub_08046610;
    }
    sub_0803A8EC(saved);
}

#define HALF(actor, offset) (*(u16 *)((u8 *)(actor) + (offset)))
#define WORD(actor, offset) (*(u32 *)((u8 *)(actor) + (offset)))

s32 sub_080475B4(Entity *actor)
{
    s32 reached = FALSE;
    u32 speed = WORD(actor, 0x10);
    if (speed) {
        WORD(actor, 0) += speed;
        if (HALF(actor, 0x74) == HALF(actor, 2))
            goto reached_target;
    } else {
        speed = WORD(actor, 0x14);
        if (speed) {
            WORD(actor, 4) += speed;
            if (HALF(actor, 0x76) == (actor->unk2C = actor->unk6))
                goto reached_target;
        }
    }
    return reached;
reached_target:
    reached = TRUE;
    return reached;
}

u16 sub_08046F20(Entity *actor)
{
    u32 y;
    u32 total;
    u16 step;
    u32 sign = 0x8000;
    vu16 *distance;
    HALF(actor, 2) = HALF(actor, 0x12) + HALF(actor, 2);
    y = HALF(actor, 0x16) + actor->unk6;
    actor->unk6 = y;
    actor->unk2C = y + 15;

    step = *(vu16 *)((u8 *)actor + 0x12);
    if (!(step & sign)) {
        u32 opposite = ~step;
        step = opposite + 1;
    }
    distance = (vu16 *)&actor->unk78;
    total = step + *distance;
    *distance = total;
    step = *(vu16 *)((u8 *)actor + 0x16);
    if (!(step & sign)) {
        u32 opposite = ~step;
        step = opposite + 1;
    }
    *distance = step + total;
    return *distance;
}

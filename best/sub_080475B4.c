#define HALF(actor, offset) (*(u16 *)((u8 *)(actor) + (offset)))
#define WORD(actor, offset) (*(u32 *)((u8 *)(actor) + (offset)))

typedef struct {
    u16 y : 16;
} MovementHalfword;

s32 sub_080475B4(Entity *actor)
{
    s32 reached = FALSE;
    u32 speed = WORD(actor, 0x10);
    u32 position;
    if (speed) {
        WORD(actor, 0) += speed;
        if (HALF(actor, 0x74) != HALF(actor, 2))
            goto done;
    } else {
        speed = WORD(actor, 0x14);
        if (!speed)
            goto done;
        WORD(actor, 4) += speed;
        position = (((MovementHalfword *)&actor->unk2C)->y = actor->unk6);
        actor = (Entity *)((u8 *)actor + 0x76);
        if (*(u16 *)actor != position)
            goto done;
    }
    reached = TRUE;
done:
    return reached;
}

u16 sub_08046F20(Entity *actor)
{
    u32 y;
    u32 total;
    u32 masked;
    u32 step;
    u32 sign;
    u32 x;
    vu16 *distance;
    x = HALF(actor, 0x12);
    x += HALF(actor, 2);
    HALF(actor, 2) = x;
    y = HALF(actor, 0x16) + actor->unk6;
    actor->unk6 = y;
    actor->unk2C = y + 15;

    step = *(vu16 *)((u8 *)actor + 0x12);
    sign = 0x8000;
    masked = sign;
    masked &= step;
    if (!masked) {
        u32 opposite = ~step;
        step = (u16)(opposite + 1);
    }
    distance = (vu16 *)&actor->unk78;
    masked = *distance;
    total = step + masked;
    *distance = total;
    step = *(vu16 *)((u8 *)actor + 0x16);
    masked = sign;
    masked &= step;
    if (!masked) {
        u32 opposite = ~step;
        step = (u16)(opposite + 1);
    }
    *distance = step + total;
    return *distance;
}

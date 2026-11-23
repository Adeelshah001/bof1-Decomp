typedef struct {
    u8 pad00[0x54];
    u16 timer : 16;
    u8 pad56[0xD4 - 0x56];
    Entity *target;
} FlashState;

void sub_0803EE6C(void *actor);

void sub_0804F298(FlashState *actor)
{
    Entity *target = *(Entity **)((u8 *)actor + 0xD4);
    u32 tick = actor->timer + 1;
    u32 timer;

    actor->timer = tick;
    timer = (u16)tick;
    if (timer < 0x40) {
        if (!(tick & 1))
            target->unk3A = 0xBF & target->unk3A;
        else
            target->unk3A = 0x40 | target->unk3A;
    } else if (timer < 0x60) {
        if (!(tick & 2))
            target->unk3A = 0xBF & target->unk3A;
        else
            target->unk3A = 0x40 | target->unk3A;
    } else if (timer < 0xC0) {
        target->unk3A = 0x40 | target->unk3A;
    } else if (timer < 0x120) {
        if (!(tick & 1))
            target->unk3A = 0xBF & target->unk3A;
        else
            target->unk3A = 0x40 | target->unk3A;
    } else {
        target->unk3A = 0xBF & target->unk3A;
        sub_0803EE6C(actor);
    }
}

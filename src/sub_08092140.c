void sub_08038264(void *);
void sub_08096D24(void *, s32, s32);
void sub_080921B8(Entity *);
void sub_0807B270(void *);
void sub_0803A8EC(void *);

typedef struct {
    u8 pad[0x54];
    u8 timer : 8;
} IdleTimer;

void sub_08092140(Entity *actor)
{
    u8 *data = (u8 *)actor;
    IdleTimer *state = (IdleTimer *)actor;
    u16 offset;

    sub_08038264(actor);
    if (--state->timer & 0x80) {
        u8 *phase;
        s32 flags;

        state->timer = 2;
        sub_08096D24(actor, 8, 0x10);
        phase = data + 0x61;
        flags = *phase;
        if (flags == 0x1F) {
            flags = 0;
            *phase = flags;
        }
        flags &= 0xF0;
        if (flags != (*(u16 *)(data + 0x44) >> 8)) {
            sub_080921B8(actor);
            return;
        }
    }
    sub_0807B270(actor);
    offset = 0x50;
    if (actor->unk2A == 0x18E)
        offset = 0x70;
    offset += actor->unk6;
    actor->unk2C = offset;
    sub_0803A8EC(actor);
}

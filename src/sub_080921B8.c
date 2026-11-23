void sub_080379D4(s32);
void sub_08037FC4(void *, s32);
void sub_08038178(void *, void *);
void sub_0803A8EC(void *);
void *sub_0809568C(void *, s32);
void sub_08038264(void *);
void sub_08096D24(void *, s32, s32);
void sub_08096558(void *);

typedef struct {
    u8 padding[0x54];
    u8 timer : 8;
} TimerState;

void sub_080920F4(u8 *actor)
{
    u8 *field;
    u32 value;
    u8 initialState;

    *(u16 *)&actor[0x38] = 0x60;
    field = actor + 0x4C;
    initialState = 2;
    *field = initialState;
    sub_08038178(actor, *(void **)&actor[0x78]);
    field = actor + 0x61;
    value = *field;
    if (value == 0) {
        value = 1;
        *field = value;
    }
    value &= 0xF0;
    value <<= 8;
    *(u16 *)&actor[0x44] = value;
    sub_080379D4(0x1D);
    actor[0x54] = initialState;
    sub_08037FC4(actor, 0);
}

void sub_080921B8(Entity *actor)
{
    u8 *data = (u8 *)actor;
    u8 *phase = data + 0x4C;
    s32 zero = 0;
    s32 timer;
    u16 offset;
    *phase = 4;
    {
        u8 *timerField = data + 0x54;
        timer = 0x20;
        *timerField = timer;
    }
    data[0x55] = 6;
    sub_08037FC4(actor, 0);
    data[0x61] = zero;
    *(u16 *)&data[0x38] = timer;
    sub_0809568C(actor, 8);
    offset = 0x50;
    if (actor->unk2A == 0x18E)
        offset = 0x70;
    offset += actor->unk6;
    actor->unk2C = offset;
    sub_0803A8EC(actor);
}

void sub_0809220C(TimerState *actor)
{
    s32 flags;
    sub_08038264(actor);
    if (--actor->timer & 0x80) {
        actor->timer = 2;
        sub_08096D24(actor, 8, 0x10);
        flags = ((u8 *)actor)[0x61];
        flags &= 0xF0;
        if (flags == (*(u16 *)&((u8 *)actor)[0x10] >> 8)) {
            *(void **)&((u8 *)actor)[0x6C] = sub_0809568C(actor, 2);
            return;
        }
        ((u8 *)actor)[0x4C] = 4;
    }
}

void sub_08092264(TimerState *actor)
{
    s32 flags;
    sub_08038264(actor);
    if (--actor->timer & 0x80) {
        actor->timer = 2;
        sub_08096D24(actor, 8, 0x10);
        flags = ((u8 *)actor)[0x61];
        flags &= 0xF0;
        if (flags != (*(u16 *)&((u8 *)actor)[0x10] >> 8)) {
            sub_08096558(actor);
            return;
        }
        *(void **)&((u8 *)actor)[0x74] = sub_0809568C(actor, 2);
    }
}

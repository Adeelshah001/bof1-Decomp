void sub_080379D4(s32);
void sub_08098294(void *, void *);
void sub_080917EC(void *);
void sub_08038264(void *);
void sub_0803A8EC(void *);
void sub_08096CD4(void *);
void sub_0804E1A8(void *);
void sub_0804E1B4(void *);
void sub_0804E1C0(void *);
void sub_0807372C(s32);

typedef struct {
    u8 pad00[0x54];
    u16 timer : 16;
} HalfwordTimer;

typedef struct {
    u8 pad00[0x54];
    u8 timer : 8;
} ByteTimer;

void sub_0809590C(u8 *actor)
{
    HalfwordTimer *state = (HalfwordTimer *)actor;
    if (--state->timer & 0x8000) {
        u8 phase = 8;
        sub_080379D4(0xF4);
        actor[0x4C] = phase;
        sub_08098294(actor, *(void **)&actor[0x78]);
        sub_080917EC(actor);
    }
}

void sub_08096234(Entity *actor)
{
    ByteTimer *state = (ByteTimer *)actor;
    sub_08038264(actor);
    if (!(--state->timer & 0x80)) {
        s32 offset = 0x50;
        if (actor->unk2A == 0x18E)
            offset = 0x70;
        actor->unk2C = offset + actor->unk6;
        sub_0803A8EC(actor);
        return;
    }
    sub_08098294(actor, (void *)actor->unk78);
    sub_08096CD4(actor);
}

void sub_0809692C(u8 *actor, u16 color)
{
    u8 *field;
    *(u16 *)0x02020FC0 = color;
    *(u16 *)0x020211C0 = color;
    field = actor + 0x55;
    *field = 0;
    *(void **)&actor[0x6C] = *(void **)&actor[0x78];
    field -= 9;
    ++*field;
    field -= 6;
    *(u16 *)field = 4;
    sub_0804E1A8(actor);
    sub_0804E1B4(actor);
    sub_0804E1C0(actor);
    sub_0807372C(1);
}

void sub_08096AE8(u16 color)
{
    vu32 *dma = (vu32 *)0x040000D4;
    u16 *buffer = (u16 *)0x0200AA10;
    *(u16 *)0x02020FC0 = color;
    dma[0] = 0x05000000;
    dma[1] = (u32)buffer;
    dma[2] = 0x80000200;
    (void)dma[2];
    buffer[0] = 0;
    buffer[0xFF] = color;
    *(u32 *)0x03004EA0 = 0x400;
    *(u8 *)0x030023DC = 0xFF;
    *(u32 *)0x03001694 |= 1;
}

typedef struct Boulder Boulder;

struct Boulder {
    u8 pad00[0x14];
    union {
        s32 full;
        u16 half[2];
    } velocityY;
    u8 pad18[0x54 - 0x18];
    u8 timer;
    u8 pad55[0x62 - 0x55];
    u8 unk62;
    u8 pad63;
    void (*update)(Boulder *);
    u8 pad68[0xC8 - 0x68];
    u8 skipCollision;
};

extern u8 D_03002AB0[];

s32 sub_0804BDE4(Boulder *);
void sub_0804D360(Boulder *);
void sub_0804D390(Boulder *);
s32 sub_0803A8EC(Entity *);
void sub_0804BEA8(Entity *);
void sub_0804BF28(Entity *);

void sub_0804D330(Boulder *actor)
{
    u8 *timer;
    sub_0804BDE4(actor);
    timer = &actor->timer;
    if (--*timer == 0) {
        actor->velocityY.half[0] = 0x2000;
        *timer = 0x80;
        actor->update = sub_0804D360;
    }
}

void sub_0804D360(Boulder *actor)
{
    u8 *timer;
    sub_0804BDE4(actor);
    timer = &actor->timer;
    if (--*timer == 0) {
        actor->velocityY.half[0] = 0x4000;
        *timer = 0x80;
        actor->update = sub_0804D390;
    }
}

void sub_0804D49C(Entity *arg0)
{
    Entity *e = arg0;
    if (D_03002AB0[0xB8] & 8) {
        arg0->unk54 = 0x14;
        arg0->unk64 = (u32)sub_0804BEA8;
    }
    sub_0803A8EC(e);
}

void sub_0804D4D0(Entity *arg0)
{
    Entity *e = arg0;
    if (((Entity *)D_03004830)->unk2A == 0x70C) {
        arg0->unk64 = (u32)sub_0804BF28;
        ((u8 *)arg0)[0x62] = 0xFF;
    }
    sub_0803A8EC(e);
}

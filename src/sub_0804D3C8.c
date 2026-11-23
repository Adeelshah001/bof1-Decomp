typedef struct Boulder Boulder;

struct Boulder {
    u8 pad00[0x14];
    union {
        s32 full;
        u16 half[2];
    } velocityY;
    u8 pad18[0x54 - 0x18];
    u8 timer;
    u8 pad55[0x64 - 0x55];
    void (*update)(Boulder *);
    u8 pad68[0xC8 - 0x68];
    u8 skipCollision;
};

s32 sub_0804BDE4(Boulder *);
u8 sub_0804BD30(Boulder *);
void sub_0803EE6C(Boulder *);
void sub_0804D3C8(Boulder *);
void sub_0804D3F8(Boulder *);
void sub_0804D424(Boulder *);

void sub_0804D3C8(Boulder *actor)
{
    u8 *timer;
    sub_0804BDE4(actor);
    timer = &actor->timer;
    if (--*timer == 0) {
        actor->velocityY.half[0] = 0xC000;
        *timer = 0x80;
        actor->update = sub_0804D3F8;
    }
}

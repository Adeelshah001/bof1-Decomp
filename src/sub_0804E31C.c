u16 sub_08037C98(Entity *, s32);
void sub_0803A8EC(Entity *);
void sub_08037FC4(Entity *, s32);
Entity *sub_0804E628(Entity *);
void sub_0804E668(Entity *);
void sub_0804E6BC(Entity *);
void sub_0804E510(Entity *);
void sub_080379D4(s32);
void sub_0804DC64(Entity *);
void sub_0804E104(Entity *);

extern u8 D_03003F98;
extern u8 D_03004E88;
extern u16 D_03004890;

void sub_0804E668(Entity *actor)
{
    u8 *state;
    u32 value;
    void (*update)(Entity *);

    actor->unk2C--;
    state = &actor->unk54;
    value = 0x1101;
    *(u16 *)state = value;
    state += 0xD;
    value = 0x18;
    *state = value;
    value = 0x1E0;
    *(u16 *)((u8 *)actor + 0x38) = value;
    update = sub_0804E510;
    actor->unk64 = (u32)update;
    sub_08037FC4(actor, 6);
    D_03004890 = 0x190;
    sub_080379D4(0xC);
    update(actor);
}

typedef struct {
    u8 pad00[0x2A];
    u16 unk2A;
} Global4830;

void sub_0804E31C(Entity *actor)
{
    if (((Global4830 *)D_03004830)->unk2A == 0x1920) {
        u8 *counter = &D_03004E88;
        u32 step = *counter;
        u8 frame = step;
        u32 y;

        if (frame == 0) {
            y = actor->unk6 + 0x68;
            goto setY;
        }
        if (frame <= 0x20) {
            y = actor->unk6 - 1;
setY:
            actor->unk6 = y;
            *counter = step + 1;
        }
        sub_0804DC64(actor);
        sub_0804E104(actor);
    }
}

void sub_080072A0(u16, u16, u16);
u8 sub_0802F770(Entity *);
void *sub_080A0A68(void *, const void *, u32);
extern const s16 D_080A63A8[4][2];
extern void (*const D_080FA45C[])(Entity *, Entity *);
extern u8 D_03002AB0[];
extern u16 D_03004120, D_03004100;

void sub_080323E4(void)
{
    const u16 *actor = (const u16 *)D_03003420;
    sub_080072A0(actor[1], actor[3], 0x38);
}

s32 sub_080323FC(Entity *actor, Entity *target)
{
    if (target->unk2A == 0x82)
        D_080FA45C[target->unk3B](actor, target);
    else
        sub_0802F770(actor);
    return 0;
}

void sub_0803238C(u16 *x, u16 *y)
{
    s16 offsets[4][2];
    u32 shiftedX;

    sub_080A0A68(offsets, D_080A63A8, sizeof(offsets));
    shiftedX = offsets[D_03002AB0[0x61]][0] + *x;
    *x = shiftedX;
    *y += offsets[D_03002AB0[0x61]][1];
    D_03004120 = shiftedX;
    D_03004100 = *y;
}

s32 sub_08032354(u8 *actor, u8 action)
{
    u8 zero;
    u8 *field;

    if (action == 2) {
        field = actor + 0x4D;
        zero = 0;
        *field = 8;
        actor[0x50] = zero;
    } else {
        D_030023D0[0] = action;
        field = actor + 0xBE;
        zero = 0;
        *field = zero;
        field -= 0x71;
        field[0] = zero;
        field[3] = zero;
    }
    return 0;
}

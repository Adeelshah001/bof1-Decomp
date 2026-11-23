typedef struct {
    u8 pad00[2];
    u16 x;
    u8 pad04[2];
    u16 y;
} MapCoordinates;

typedef struct {
    u8 pad00[0x02];
    u16 unk2;
    u8 pad04[0x06 - 0x04];
    u16 unk6;
    u8 pad08[0x1C - 0x08];
    u16 unk1C;
    u8 pad1E[0x2A - 0x1E];
    u16 unk2A;
    u16 unk2C;
    u8 pad2E[0x41 - 0x2E];
    u8 unk41;
    u8 pad42[0x54 - 0x42];
    u8 unk54;
    u8 pad55[0x61 - 0x55];
    u8 unk61;
    u8 pad62[0x64 - 0x62];
    u32 unk64;
    u8 pad68[0x84 - 0x68];
    u16 unk84;
    u16 unk86;
    u16 unk88;
    u16 unk8A;
    u8 pad8C[0xC8 - 0x8C];
    u8 unkC8;
} Actor4BA60;

extern MapCoordinates D_030023E0;

void sub_0803A508(Actor4BA60 *);
void sub_0804D248(Actor4BA60 *);
void sub_0804D724(Actor4BA60 *);
void sub_0804D7A8(Actor4BA60 *, s32, s32);

void sub_0804BA60(Actor4BA60 *actor, u16 arg1, u16 arg2)
{
    u32 targetY;
    u8 zero;

    actor->unk86 = arg1;
    zero = 0;
    actor->unk8A = arg2;
    actor->unk84 = zero;
    actor->unk88 = zero;
    actor->unk2 = arg1 + D_030023E0.x;
    targetY = arg2 + D_030023E0.y;
    actor->unk6 = targetY;
    actor->unk2C = targetY;
    sub_0803A508(actor);
    actor->unk61 = zero;
    sub_0804D7A8(actor, 0, 0xFA00);
    actor->unk64 = (u32)sub_0804D248;
    actor->unk54 = 0x3C;
    actor->unkC8 = zero;
    actor->unk1C = 0x1A0;
    actor->unk2A = 0x7C;
    actor->unk41 = 0x34;
    sub_0804D724(actor);
}

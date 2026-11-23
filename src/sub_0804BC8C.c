typedef struct {
    u8 pad00[0x1C];
    u16 unk1C;
    u8 pad1E[0x2A - 0x1E];
    u16 unk2A;
    u8 pad2C[0x3B - 0x2C];
    u8 unk3B;
    u8 pad3C[0x41 - 0x3C];
    u8 unk41;
    u8 pad42[0x54 - 0x42];
    u8 unk54;
    u8 pad55[0x61 - 0x55];
    u8 unk61;
    u8 unk62;
    u8 unk63;
    u32 unk64;
    u8 pad68[0xA6 - 0x68];
    u16 unkA6;
    u8 padA8[2];
    u16 unkAA;
} ActorB8;

void sub_0804B9D4(ActorB8 *);
void sub_0804D724(void *);
void sub_0804D6B0(ActorB8 *);

void sub_0804BC8C(ActorB8 *actor, u8 direction)
{
    actor->unk61 = direction;
    actor->unk63 = direction;
    actor->unk54 = 0;
    actor->unkAA = 0;
    sub_0804B9D4(actor);
    actor->unk64 = (u32)sub_0804D6B0;
    actor->unk2A = 0xA4;
    actor->unk41 = 8;
    actor->unk1C = 0x1B0;
    actor->unk3B |= 0x80;
    sub_0804D724(actor);
}

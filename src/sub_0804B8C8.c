extern u16 D_03004890;
extern const u8 D_0822F5B8[];

typedef struct {
    u8 pad00[0x2A];
    u16 unk2A;
    u8 pad2C[0x54 - 0x2C];
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

void sub_0804D1D0(ActorB8 *, s32, s32);
void sub_0804B9D4(ActorB8 *);
void sub_0804D6CC(ActorB8 *);

void sub_0804B8C8(ActorB8 *actor)
{
    D_03004890 = 0x190;
    actor->unkA6 = D_0822F5B8[0x12] | (D_0822F5B8[0x13] << 8);
    sub_0804D1D0(actor, 0x80, 0x78);
    actor->unk61 = 1;
    actor->unk63 = 1;
    actor->unkAA = 0;
    actor->unk54 = 0;
    sub_0804B9D4(actor);
    actor->unk2A = 0;
    actor->unk64 = (u32)sub_0804D6CC;
}

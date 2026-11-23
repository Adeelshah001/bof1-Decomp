typedef struct {
    u8 pad00[0x02];
    u16 unk2;
    u8 pad04[0x02];
    u16 unk6;
    u8 pad08[0x14];
    u16 unk1C;
    u8 pad1E[0x0C];
    u16 unk2A;
    u16 unk2C;
    u8 pad2E[0x0F];
    u8 unk3D;
    u8 pad3E[0x03];
    u8 unk41;
    u8 pad42[0x12];
    u8 unk54;
    u8 pad55[0x74];
    u8 unkC9;
    u8 padCA;
    u8 unkCB;
} Actor4EAE8;

extern const u16 D_080FD560[];
void sub_08037FC4(Actor4EAE8 *, s32);

void sub_0804EAE8(Actor4EAE8 *actor)
{
    const u16 *table = D_080FD560;
    u32 y;
    u32 idx;

    actor->unk2 = table[actor->unkCB * 2];
    y = *(const u16 *)((u32)table + (((actor->unkCB << 1) + 1) << 1));
    actor->unk6 = y;
    actor->unk2C = y;
    idx = actor->unkCB;
    if (idx == 0)
        actor->unk2C = 0x21BB;
    idx = (u8)(idx * 8);
    actor->unk54 = idx;
    actor->unk3D = 2;
    actor->unk41 = 8;
    actor->unk1C = 0x170;
    actor->unk2A = 0xEA;
    sub_08037FC4(actor, 0);
    actor->unkC9++;
}

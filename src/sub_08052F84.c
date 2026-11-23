typedef struct {
    u8 pad00[0x06];
    u16 unk6;
} MapState;

typedef struct {
    u8 pad00[0x06];
    u16 unk6;
    u8 pad08[0x40 - 0x08];
    u8 unk40;
    u8 pad41[0x54 - 0x41];
    u16 unk54;
    u8 pad56[0x64 - 0x56];
    u32 unk64;
    u8 pad68[0xBC - 0x68];
    u16 unkBC;
    u8 padBE[0xC4 - 0xBE];
    u8 unkC4;
} Actor52;

extern MapState D_030023E0;
extern u8 D_03001698;
extern u8 D_03001674;
extern u8 D_0300166C;
extern u8 D_030016A4;

void sub_0805223C(Actor52 *);

void sub_08052F84(Actor52 *actor)
{
    actor->unk40 = 0;
    actor->unk54 = 0x101;
    actor->unk6 = D_030023E0.unk6 + 0x18;
    actor->unkBC = 0x18;
    actor->unkC4 = 0x1E;
    D_03001698 = 8;
    D_03001674 = 8;
    D_0300166C = 0x10;
    D_030016A4 = 0x10;
    sub_0805223C(actor);
    actor->unk64 = (u32)sub_0805223C;
}

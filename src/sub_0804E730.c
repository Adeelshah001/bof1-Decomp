typedef struct {
    u8 padding[0xA4];
    u16 mode;
} MapState;
extern MapState D_030023E0;

typedef struct {
    u8 pad00[0x06];
    u16 unk6;
    u8 pad08[0x1C - 0x08];
    u16 unk1C;
    u8 pad1E[0x2A - 0x1E];
    u16 unk2A;
    u16 unk2C;
    u8 pad2E[0x3D - 0x2E];
    u8 unk3D;
    u8 pad3E[0x41 - 0x3E];
    u8 unk41;
    u8 pad42[0x54 - 0x42];
    u8 unk54;
    u8 pad55[0x64 - 0x55];
    u32 unk64;
} Actor4E730;

void sub_08037FC4(void *, u16);
void sub_0804EE98(Entity *);

void sub_0804E730(Actor4E730 *actor) {
    u32 unk41;

    actor->unk2C = actor->unk6;
    actor->unk6 -= 0x70;
    actor->unk64 = (u32)sub_0804EE98;
    actor->unk3D = 2;
    actor->unk54 = 4;
    if (D_030023E0.mode == 1) {
        unk41 = 0x36;
    } else if (D_030023E0.mode == 0x16B) {
        unk41 = 0x2A;
    } else if (D_030023E0.mode == 0x11B) {
        unk41 = 0x3A;
    } else if (D_030023E0.mode == 0x1A0) {
        unk41 = 0x2E;
    } else {
        unk41 = 0x3E;
    }
    actor->unk41 = unk41;
    actor->unk1C = 0x1D0;
    actor->unk2A = 0x18E;
    sub_08037FC4(actor, 6);
}

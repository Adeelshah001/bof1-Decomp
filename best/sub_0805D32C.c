typedef struct {
    u8 pad00[0xEC];
    u16 unkEC;
    u16 unkEE;
    u8 padF0[0x10C - 0xF0];
    u8 unk10C;
    u8 pad10D[0x116 - 0x10D];
    u16 unk116;
} Actor5D;

void sub_0805D32C(Actor5D *actor)
{
    u16 val = actor->unk10C;

    if (actor->unk116 == 0x210F) {
        val = (val + 0x14 > 0xFF) ? 0xFF : val + 0x14;
    }
    if (actor->unkEC == 0x2145) {
        val = (val + 0x14 > 0xFF) ? 0xFF : val + 0x14;
    }
    if (actor->unkEE == 0x2145) {
        val = (val + 0x14 > 0xFF) ? 0xFF : val + 0x14;
    }
    actor->unk10C = val;
}

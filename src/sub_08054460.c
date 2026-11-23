typedef struct {
    u8 pad00[0x06];
    u16 unk6;
    u8 pad08[0x2C - 0x08];
    u16 unk2C;
    u8 pad2E[0x68 - 0x2E];
    const u8 *unk68;
    u8 pad6C[0x6F - 0x6C];
    u8 unk6F;
} Entity54;

typedef u8 (*Func54)(Entity54 *);
extern const Func54 D_080FE0CC[];
extern const Func54 D_080FE0DC[];
void sub_0803A8EC(Entity54 *);

void sub_08054460(Entity54 *arg0) {
    u32 val = *arg0->unk68;

    if ((u8)(val - 0x51) <= 3) {
        val = D_080FE0CC[val - 0x51](arg0);
    } else {
        val >>= 4;
        if (val <= 3) {
            arg0->unk6F = val;
        }
        val = D_080FE0DC[val](arg0);
    }
    arg0->unk2C = arg0->unk6;
    if (val == 0) {
        sub_0803A8EC(arg0);
    }
}

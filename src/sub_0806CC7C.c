typedef struct {
    u8 pad00[0x3A];
    u8 active : 8;
    u8 pad3B;
    u8 kind : 8;
    u8 pad3D[0xE2 - 0x3D];
    u8 palette : 8;
    u8 padE3[0xF0 - 0xE3];
    u8 flags : 8;
    u8 padF1[0x124 - 0xF1];
} BattleSlot;

extern BattleSlot D_03002AB0[];

void sub_0806CC7C(void)
{
    BattleSlot *slots = D_03002AB0;
    u8 zero = 0;
    s32 i = 7;
    u8 *palette = (u8 *)slots + (7 * sizeof(BattleSlot) + 0xE2);
    s32 offset;
    u8 *paletteSource;
    BattleSlot *slot;

    do {
        *palette = zero;
        palette -= sizeof(BattleSlot);
    } while (--i >= 0);

    i = 0;
    paletteSource = (u8 *)0x0202DE88;
    for (offset = 0; i < 8; offset += sizeof(BattleSlot), i++) {
        slot = (BattleSlot *)(offset + (u32)slots);
        if (slot->active != 0 && slot->kind == 5) {
            if (!(0x40 & slot->flags)) {
                u8 color = *paletteSource;
                u32 mask = 0xF0;
                mask &= color;
                slot->palette = mask;
            }
            return;
        }
    }
}

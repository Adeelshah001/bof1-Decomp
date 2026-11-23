typedef struct {
    u8 pad00[0x01];
    u8 unk1;
    u8 unk2;
    u8 pad03[0x60 - 0x03];
    u8 unk60;
    u8 pad61[0x63 - 0x61];
    u8 unk63;
} Unk73064;

typedef struct {
    u8 pad00[0xDC];
    u16 unkDC;
    u8 padDE[0xF0 - 0xDE];
    u8 unkF0;
    u8 unkF1;
    u8 padF2[0x124 - 0xF2];
} Unk2AB0;

extern Unk2AB0 D_03002AB0[];

s32 sub_08073064(Unk73064 *arg0) {
    Unk2AB0 *entry = &D_03002AB0[arg0->unk63];
    if ((entry->unkF1 & 0x80) || (entry->unkDC & 0x240) || (entry->unkF0 & 0x10)) {
        u32 next = arg0->unk63;
        next = (u8)(next + 1);
        if (next == arg0->unk60) {
            next = 0;
            arg0->unk1 = 0x1E;
            arg0->unk2 = 0;
        }
        arg0->unk63 = next;
        return 1;
    }
    return 0;
}

typedef struct {
    u8 pad00[0xA4];
    u16 unkA4;
} Unk030023E0;

typedef struct {
    u8 pad00[0xBA];
    u8 unkBA;
} UnkArg1;

extern Unk030023E0 D_030023E0;

s32 sub_0804A830(Entity *arg0, UnkArg1 *arg1)
{
    s32 ret = 0;

    if (arg1->unkBA & 9) {
        u8 val = (D_030023E0.unkA4 == 0xA9) ? 0xA : 0xC;
        u8 *ptr = &arg0->unk41;
        *ptr = val | 0x10;
        arg0->unk3A |= 0x80;
    } else if (arg1->unkBA & 2) {
        ret = 4;
        arg0->unk3A &= 0x7F;
        arg0->unk41 = 0xE;
        if (D_030023E0.unkA4 == 0)
            arg0->unk41 = 0x3E;
    }
    return ret;
}

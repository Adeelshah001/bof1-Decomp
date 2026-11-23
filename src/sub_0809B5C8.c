typedef struct {
    u8 pad0[8];
    s32 unk8;
    u8 padC[8];
    s16 unk14;
    s16 unk16;
    u8 pad18[2];
    u8 unk1A;
    u8 unk1B;
    u8 unk1C;
} Struct03004550;

extern Struct03004550 D_03004550;

void sub_0809B5C8(void)
{
    s32 val = 0x4C6;
    D_03004550.unk16 = val;
    D_03004550.unk14 = val;
    D_03004550.unk8 = val;
    D_03004550.unk1A = 0;
    D_03004550.unk1B = 0;
    D_03004550.unk1C = 0x20;
}

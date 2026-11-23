extern u16 D_03004114;
extern u8 D_030023E0[];

typedef struct {
    u8 pad00[0xA4];
    u16 unkA4;
} Unk030023E0;

typedef struct {
    u8 pad00[0x4D];
    u8 unk4D;
    u8 pad4E[0x50 - 0x4E];
    u8 unk50;
} Unk080320C8;

u8 sub_0805CF40(u16, u16 *);

void sub_080320C8(Unk080320C8 *arg0) {
    u16 sp0;
    D_03004114 = 0;
    if (((Unk030023E0 *)D_030023E0)->unkA4 == 0x11F && sub_0805CF40(0x15B, &sp0) == 0) {
        arg0->unk4D = 4;
        arg0->unk50 = 0;
        D_03004114 = 1;
    }
}

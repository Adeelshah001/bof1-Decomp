typedef struct {
    u8 pad00[4];
    const u8 *unk04;
    u8 pad08[0x10];
    s32 unk18;
} State59FE0;

extern State59FE0 D_03000AE0;
extern u8 D_03000B08;
extern struct {
    const u8 *unk00;
    u8 pad04[0x16];
    u8 unk1A;
    u8 unk1B;
} D_03004550;
extern const u8 D_080FFA80[];

s32 sub_080A07AC(s32, s32);

void sub_08059FE0(void)
{
    s32 stride = D_03000AE0.unk18;
    s32 offset;

    D_03000B08 = sub_080A07AC(D_03000B08, stride) + 1;
    offset = *(volatile u8 *)&D_03000B08;
    offset *= stride;
    D_03000B08 = offset;
    if (**(const u8 **)0x03004550 != 0xEB)
        D_03000B08 = offset + 1;

    if (D_03000AE0.unk04 == D_080FFA80)
        D_03000B08 += 0x14;
    else
        D_03000B08 += 0xC;

    D_03004550.unk1A = 6;
    D_03004550.unk1B = 0x3C;
}

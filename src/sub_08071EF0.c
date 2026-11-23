typedef struct {
    u16 unk0;
    u16 unk2;
    u16 unk4;
    u16 unk6;
    u16 unk8;
    u16 unkA;
    u16 unkC;
    u16 unkE;
} Unk081511F8;

extern u32 D_03000F64;
extern const Unk081511F8 D_081511F8[];

s32 sub_0805B568(s32, s32, s32, s32, s32);

void sub_08071EF0(void)
{
    u32 idx = D_03000F64;

    if (idx <= 10) {
        sub_0805B568(
            D_081511F8[idx].unk0,
            D_081511F8[idx].unk2,
            0xD,
            1,
            D_081511F8[idx].unk4 == 2 ? 0x1F : 0x90);
        if (D_081511F8[idx].unkC != 0) {
            sub_0805B568(
                D_081511F8[idx].unk8,
                D_081511F8[idx].unkA,
                0xD,
                1,
                D_081511F8[idx].unkC == 2 ? 0x1F : 0x90);
        }
    }
}

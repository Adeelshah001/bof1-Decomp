typedef struct {
    u16 unk0;
    u16 unk2;
    u32 unk4;
    s32 unk8;
    u8 unkC[0x18];
} Unk03000AE0;

typedef struct {
    u32 unk0;
    u8 unk4;
    u8 unk5;
    u8 unk6;
    u8 unk7;
    u8 unk8[0x5C];
} Unk03000B10;

extern Unk03000AE0 D_03000AE0;
extern Unk03000B10 D_03000B10[];

void sub_0805B358(u32 arg0, u8 arg1, u8 arg2, u8 arg3, s32 arg4) {
    Unk03000AE0 *ae;
    s32 i;
    u32 addr;
    D_03000B10[arg4].unk0 = arg0;
    D_03000B10[arg4].unk4 = arg1;
    D_03000B10[arg4].unk5 = arg2;
    D_03000B10[arg4].unk6 = arg3;
    D_03000B10[arg4].unk7 = 0;
    ae = &D_03000AE0;
    for (i = 0; i < 0x5A; i++) {
        D_03000B10[arg4].unk8[i] = 0;
    }
    addr = (u32)ae->unkC;
    *(u8 *)(arg4 + addr) = 1;
}

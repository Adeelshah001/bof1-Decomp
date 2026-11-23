typedef struct {
    u16 unk0;
    u16 unk2;
    u32 unk4;
    s32 unk8;
    u8 unkC[0x18];
} Unk03000AE0;

typedef struct {
    u8 pad00[0x08];
    u8 unk8[0x5C];
} Unk03000B10;

extern Unk03000AE0 D_03000AE0;
extern Unk03000B10 D_03000B10[];

void sub_0805B3F4(s32 arg0) {
    D_03000AE0.unkC[arg0] = 1;
}

void sub_0805B404(s32 arg0) {
    D_03000AE0.unkC[arg0] = 0;
}

void sub_0805B414(void) {
    if (D_03000AE0.unk8 >= 0) {
        D_03000AE0.unk8--;
    }
}

void sub_0805B3C4(s32 arg0, s32 arg1) {
    D_03000B10[arg0].unk8[arg1] = 1;
}

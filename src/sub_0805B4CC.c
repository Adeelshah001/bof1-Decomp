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
extern volatile u32 D_040000D4[];
extern u8 D_080FFBEC[];
extern u8 D_02020FC0[];
extern u8 D_020211C0[];

u16 sub_0805B1F4(void);
void sub_0805B1BC(void);
void sub_08039420(void);
void sub_08003218(void);
void sub_08000248(s32);
void sub_08068818(s32);

void sub_0805B39C(s32 arg0) {
    D_03000B10[arg0].unk7 = 1;
}

void sub_0805B358(u32 arg0, u8 arg1, u8 arg2, u8 arg3, s32 arg4) {
    Unk03000B10 *entry = &D_03000B10[arg4];
    s32 i;
    entry->unk0 = arg0;
    entry->unk4 = arg1;
    entry->unk5 = arg2;
    entry->unk6 = arg3;
    entry->unk7 = 0;
    for (i = 0x59; i >= 0; i--) {
        D_03000B10[arg4].unk8[i] = 0;
    }
    D_03000AE0.unkC[arg4] = 1;
}

void sub_0805B4CC(void) {
    if (D_03000AE0.unk2 != 0) {
        D_03000AE0.unk2 = 2;
        D_03000AE0.unk0 = 6;
        while (sub_0805B1F4() != 0) {
            sub_0805B1BC();
            sub_08039420();
            sub_08003218();
            sub_08000248(1);
        }
    }
}

void sub_0805B504(void) {
    D_040000D4[0] = (u32)D_080FFBEC;
    D_040000D4[1] = (u32)D_02020FC0;
    D_040000D4[2] = 0x80000010;
    (void)D_040000D4[2];
    D_040000D4[0] = (u32)D_080FFBEC;
    D_040000D4[1] = (u32)D_020211C0;
    D_040000D4[2] = 0x80000010;
    (void)D_040000D4[2];
    sub_08068818(8);
}

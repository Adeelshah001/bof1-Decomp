#define UNUSED(x) (void)(x)

/* Local struct definition for Obj30 */
typedef struct {
    u8 pad3C[0x3C];
    u8 unk3C;
    u8 pad3D[0x50 - 0x3D];
    u8 unk50;
} Obj30;

/* External data arrays */
extern const u32 D_080FA478[];
extern const u32 D_080FA484[];
extern const u32 D_080FA490[];
extern const u32 D_080FA650[];

/* External function */
extern s32 sub_080A0774(Obj30 *obj);

// Function sub_08031000
s32 sub_08031000(Obj30 *arg0) {
    ((void (*)(Obj30 *))D_080FA478[arg0->unk50 >> 1])(arg0);
    return 0;
}

// Function sub_08031020
s32 sub_08031020(Obj30 *arg0) {
    ((void (*)(Obj30 *))D_080FA484[arg0->unk50 >> 1])(arg0);
    return 0;
}

// Function sub_08031040
s32 sub_08031040(Obj30 *arg0) {
    ((void (*)(Obj30 *))D_080FA490[arg0->unk50 >> 1])(arg0);
    return 0;
}

// Function sub_08031060
s32 sub_08031060(Obj30 *arg0) {
    ((void (*)(Obj30 *))D_080FA650[arg0->unk50 >> 1])(arg0);
    return 0;
}

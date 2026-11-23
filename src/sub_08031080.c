// extern declarations
extern const u32 D_080FA65C[];
extern const u32 D_080FA5BC[];
extern const u32 D_080FA46C[];
extern const u32 D_080FA648[];

// object layout for the parameter
struct Obj30 {
    u8  pad3C[0x3C];
    u8  unk3C;
    u8  pad3D[0x50 - 0x3D];
    u8  unk50;
};

// Each function forwards to a function table entry based on unk50 field
s32 sub_08031080(struct Obj30 *obj) {
    ((void (*)(struct Obj30 *))D_080FA65C[(obj->unk50 >> 1)])(obj);
    return 0;
}

s32 sub_080310A0(struct Obj30 *obj) {
    ((void (*)(struct Obj30 *))D_080FA5BC[(obj->unk50 >> 1)])(obj);
    return 0;
}

s32 sub_080310C0(struct Obj30 *obj) {
    ((void (*)(struct Obj30 *))D_080FA46C[(obj->unk50 >> 1)])(obj);
    return 0;
}

s32 sub_080310E0(struct Obj30 *obj) {
    ((void (*)(struct Obj30 *))D_080FA648[(obj->unk50 >> 1)])(obj);
    return 0;
}

typedef struct {
    u8 pad3C[0x3C];
    u8 unk3C;
    u8 pad3D[0x50 - 0x3D];
    u8 unk50;
} Obj30;

extern u32 D_080FA620[];
extern u32 D_080FA760[];
extern u32 D_080FA504[];
extern u8 D_030023E0[];
extern s32 sub_0802F2F4(s32);

s32 sub_08030FE0(Obj30 *arg0) {
    ((void (*)(Obj30 *))D_080FA620[arg0->unk50 >> 1])(arg0);
    return 0;
}

u8 sub_08030FBC(Obj30 *arg0) {
    return ((u8 (*)(Obj30 *))D_080FA760[arg0->unk50 >> 1])(arg0);
}

s32 sub_08030F90(Obj30 *arg0) {
    ((void (*)(Obj30 *))D_080FA504[arg0->unk3C])(arg0);
    return 0;
}

u8 sub_08030F64(s32 arg0) {
    u8 r3 = 0;
    if (*(u16 *)(D_030023E0 + 0xA4) != 0x101) {
        r3 = sub_0802F2F4(arg0);
    }
    return r3;
}

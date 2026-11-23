typedef struct {
    u8 pad[0xA4];
    u16 unkA4;
} State23E0;

extern State23E0 D_030023E0;
extern s32 sub_0802F2F4(s32);

u8 sub_08030F64(s32 arg0) {
    u8 r3 = 0;
    if (D_030023E0.unkA4 != 0x101) {
        r3 = sub_0802F2F4(arg0);
    }
    return r3;
}

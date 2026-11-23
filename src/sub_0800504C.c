extern u8 D_03002AB0[];

typedef struct {
    u8 pad0[2];
    u16 unk2;
    u8 pad4[2];
    u16 unk6;
} Unk458C;

extern Unk458C *D_0300458C;

s32 sub_0800504C(u8 arg0, u16 arg1, u16 arg2) {
    s32 tmp;
    s32 ret = 1;
    u8 *base = D_03002AB0;
    if (base[0x61] == arg0) {
        Unk458C *s = D_0300458C;
        if (arg1 != s->unk2 || arg2 != s->unk6) {
            tmp = 1;
        } else {
            tmp = 0;
        }
        ret = tmp;
    }
    return ret;
}

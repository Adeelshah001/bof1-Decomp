extern const u32 D_080F9754[];
u8 sub_08001770(u8);

s32 sub_080292EC(u8 arg0, u8 arg1) {
    s32 result = 0;

    if (sub_08001770(arg0) != 0) {
        result = D_080F9754[arg1 >> 1];
    }
    return result;
}

typedef struct {
    u8 pad00[0x2A];
    s8 unk2A;
} Struct_03004830;

s32 sub_08029318(u8 arg0, u8 arg1) {
    s32 result = 0;

    if (((Struct_03004830 *)D_03004830)->unk2A == arg1) {
        result = D_080F9754[arg0];
    }
    return result;
}

extern const u8 D_081A0E7C[];
extern u8 D_02020FC0[];
extern u8 D_020211C0[];
void sub_080A0210(const void *src, void *dst, u32 size);

void sub_080292A8(u16 arg0, u16 arg1, u8 arg2) {
    u32 size = (u32)(arg2 * 32) >> 2;
    const u8 *src = D_081A0E7C + arg1;

    sub_080A0210(src, D_02020FC0 + arg0, size);
    sub_080A0210(src, D_020211C0 + arg0, size);
}

typedef struct {
    u8 pad00[0xA4];
    u16 unkA4;
} Struct_030023E0;

extern u8 D_030023E0[];
u8 sub_08037754(u16);
s32 sub_080377A8(s32, u16);

s32 sub_08029268(s32 arg0, u16 *arg1, u8 *arg2) {
    *arg2 = 1;
    if (sub_08037754(((Struct_030023E0 *)D_030023E0)->unkA4) != 0xFF) {
        *arg1 <<= 1;
        arg0 = sub_080377A8(arg0, *arg1);
        *arg2 = 2;
    }
    return arg0;
}

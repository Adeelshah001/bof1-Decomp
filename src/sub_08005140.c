extern u8 *D_0300458C;

typedef struct {
    u8 unk0;
    u8 pad1[7];
    u16 unk8;
} Unk030045B0;
extern Unk030045B0 D_030045B0;

typedef struct {
    u8 pad00[0x94];
    s32 unk94;
} Unk03002AB0;
extern Unk03002AB0 D_03002AB0;

void sub_08030C80(s32);

typedef struct {
    u8 pad00[0x31];
    s8 unk31;
} State4830;
typedef void (*FuncPtr4F84)(void *);
extern const FuncPtr4F84 D_080F4AF8[];

s32 sub_08005090(u16 arg0, u16 arg1) {
    u8 *ptr = D_0300458C;
    if (arg0 == *(u16 *)(ptr + 2) && arg1 == *(u16 *)(ptr + 6)) {
        return 0;
    }
    return 1;
}

void sub_0800511C(u16 arg0, u8 arg1) {
    D_030045B0.unk8 = arg0;
    D_03004830[0x33] = 1;
    if (arg1 != 0) {
        D_030045B0.unk0 |= 0x40;
    }
}

void sub_08005140(s32 arg0, s32 arg1) {
    sub_08030C80(arg0);
    D_03002AB0.unk94 = arg1;
    D_030023D0[0] = 2;
}

void sub_08004F84(void *arg0) {
    if (((State4830 *)D_03004830)->unk31 >= 0) {
        D_080F4AF8[((State4830 *)D_03004830)->unk31](arg0);
    }
}

typedef struct {
    u8 pad00[0x3A];
    u8 unk3A;
} Unk03002510;
extern Unk03002510 D_03002510;

extern const u16 D_080FA6E2[];
void sub_0802C840(u16, s32, s32, s32);

typedef struct {
    u8 pad00[0xA4];
    u16 unkA4;
} Unk030023E0;
extern Unk030023E0 D_030023E0;

typedef struct {
    u8 pad00[0x2B8];
    u8 unk2B8;
} Unk0202DBD0;
extern Unk0202DBD0 D_0202DBD0;

extern u8 D_030043B8;

extern const u16 D_080A63CE[12];
void sub_080A0A68(void *, const void *, s32);

typedef struct {
    u8 pad00[0x3B];
    u8 unk3B;
    u8 pad3C[0x51 - 0x3C];
    u8 unk51;
    u8 pad52[0xBA - 0x52];
    u8 unkBA;
} Obj32B98;

void sub_08032B78(void) {
    ((Entity *)D_03003420)->unk68 -= 9;
    D_03002510.unk3A &= 0xBF;
}

void sub_08032B98(Obj32B98 *arg0) {
    s32 var_r1;
    s32 var_r2;
    u16 val = D_080FA6E2[arg0->unk51];

    switch (val) {
    case 0x134:
        var_r1 = 0x128;
        var_r2 = 0xA54C;
        break;
    case 0x1CF:
        var_r1 = 0x768;
        var_r2 = 0xB86C;
        break;
    default:
        var_r1 = 0x178;
        var_r2 = 0x337C;
        break;
    }
    sub_0802C840(val, var_r1, var_r2, 0);
    arg0->unk51 = 0;
}

void sub_08032D00(Obj32B98 *arg0) {
    if (D_030023E0.unkA4 == 0 && !(D_0202DBD0.unk2B8 & 2) && (arg0->unkBA & 2)) {
        D_030043B8 |= 1 << arg0->unk3B;
    }
}

s32 sub_08032D50(u16 arg0) {
    u16 arr[12];
    u8 i;

    sub_080A0A68(arr, D_080A63CE, sizeof(arr));
    for (i = 0; i <= 0xB; i++) {
        if (arg0 == arr[i]) {
            return 1;
        }
    }
    return 0;
}

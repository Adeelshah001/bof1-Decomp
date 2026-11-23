typedef struct {
    u8 pad00[2];
    u16 unk2;
    u8 pad04[2];
    u16 unk6;
} Unk03002430;

typedef struct {
    u8 pad00[0x42];
    u16 unk42;
} Unk030045B0;

typedef struct {
    u8 pad00[0x2B];
    u8 unk2B;
    s8 unk2C;
    s8 unk2D;
} Unk03004830;

extern Unk03002430 D_03002430;
extern Unk030045B0 D_030045B0;
extern u8 D_0202DBD0[];
extern s16 D_03004120;

void sub_0800764C(s32);
s8 sub_080100B8(s16, s16);
void sub_08001888(s32);
void sub_08005140(Entity *, s32);

void sub_08010434(u16 arg0) {
    D_03002430.unk2 = arg0;
    if (!(D_030045B0.unk42 & 4)) {
        D_03002430.unk6--;
    }
    D_030045B0.unk42++;
}

void sub_0801045C(u8 arg0, u8 arg1) {
    if (--D_03004830[0x2C] == 0) {
        D_0202DBD0[0x483] |= arg0;
        D_03004830[0x2C] = arg1;
        sub_0800764C(4);
        D_03004830[0x2B]++;
    }
}

s8 sub_080103F8(s16 arg0) {
    D_03004120 = ((s8)D_03004830[0x2D] << 8) | (s8)D_03004830[0x2C];
    return sub_080100B8(arg0, D_03004120);
}

void sub_08010630(Entity *arg0) {
    sub_08001888(0x7F);
    ((Unk03004830 *)D_03004830)->unk2D &= ~2;
    sub_08005140(arg0, 0x8242);
    arg0->unk68 += 2;
}

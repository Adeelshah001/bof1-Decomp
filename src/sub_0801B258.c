/* identical to sub_0800E09C (matched), with its names changed by decompdecomp */
extern u8 D_03002AB0[];
extern u16 D_03004120;

typedef struct {
    u8 pad00[0xA8];
    u16 unkA8;
} Unk030023E0;

extern Unk030023E0 D_030023E0;

void sub_0800C6F8(void);
void sub_0800421C(s32, s32, s32);
void sub_0803AF58(s32, u32);
void sub_0800764C(s32);

void sub_0800E034(void) {
    u8 *p = D_03004830;
    p[0x2C] = 0x80;
    p[0x2B]++;
}

void sub_0800E04C(void) {
    sub_0800C6F8();
    D_030023E0.unkA8 |= 0x8000;
    D_03004120 = 2;
    sub_0800421C(0xAB, 0x1998, 0x565C);
    D_03004830[0x2C] = 8;
    D_03004830[0x2B]++;
}

void sub_0800DFFC(void) {
    u8 *p = D_03004830;
    p[0x2C] = 5;
    p[0x2D] = 0x10;
    sub_0803AF58(0x77, 0xFFFF);
    sub_0800764C(6);
    p[0x2B]++;
}

void sub_0801B258(void) {
    D_03002AB0[0xB8] |= 0x40;
    D_03004830[0x2B]++;
}

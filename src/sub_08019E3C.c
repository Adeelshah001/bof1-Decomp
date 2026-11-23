extern u8 D_0202DBD0[];

typedef struct {
    u8 pad00[0x16];
    u16 unk16;
    u8 pad18[0x1A - 0x18];
    u16 unk1A;
    u8 pad1C[0x290 - 0x1C];
    u16 unk290;
    u8 pad292[0x2B9 - 0x292];
    u8 unk2B9;
} State2DBD0;

void sub_08019E60(u16, u16);

void sub_08019E3C(s32 arg0) {
    ((State2DBD0 *)D_0202DBD0)->unk16 = 0x178;
    sub_08019E60(0x337C, arg0);
}

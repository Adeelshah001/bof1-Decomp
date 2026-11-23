typedef struct {
    u8 pad00[0x2AA];
    u8 unk2AA;
} Struct_0202DBD0;

extern Struct_0202DBD0 D_0202DBD0;
extern u32 D_03001694;
extern u8 D_03004410[];
extern u8 D_03004620[];
extern u16 D_03004E30;

void sub_08066F5C(s32);

s32 sub_08040C58(void) {
    D_03004620[6] = 0;
    D_03004620[7] = 0;
    D_03004620[0] = 0;
    D_0202DBD0.unk2AA = 0;
    sub_08066F5C(0);
    D_03001694 |= 4;
    D_03004620[6] = 0;
    if (!(D_03004E30 & 8)) {
        D_03004410[0xA] = 2;
    } else {
        D_03004410[0xA] = 6;
    }
    return 0;
}

extern u8 D_03002AB0[];

typedef struct {
    u8 pad00[0x2A];
    s8 unk2A;
    s8 unk2B;
    s8 unk2C;
    u8 pad2D[0x3F - 0x2D];
    s8 unk3F;
    s8 unk40;
    s8 unk41;
    s8 unk42;
} State4830;

void sub_08018420(void) {
    s32 timer = (s8)(--((State4830 *)D_03004830)->unk2C);

    if (timer == 0) {
        D_03002AB0[0xB8] &= 0xFB;
        ((State4830 *)D_03004830)->unk3F = timer;
        ((State4830 *)D_03004830)->unk40 = timer;
        ((State4830 *)D_03004830)->unk2A = timer;
        ((State4830 *)D_03004830)->unk2B = timer;
        ((State4830 *)D_03004830)->unk41 = timer;
        ((State4830 *)D_03004830)->unk42 = timer;
    }
}

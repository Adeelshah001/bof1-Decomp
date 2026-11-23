extern u16 D_03001680;
extern u8 D_03004830[];

typedef struct {
    u8 pad00[0x2A];
    u8 unk2A;
    u8 unk2B;
    s8 unk2C;
    s8 unk2D;
} State4830;

void sub_0800C130(void) {
    D_03001680 += 2;
    if (--((State4830 *)D_03004830)->unk2D == 0) {
        ((State4830 *)D_03004830)->unk2B++;
    } else {
        ((State4830 *)D_03004830)->unk2B--;
        ((State4830 *)D_03004830)->unk2C = 0x40;
    }
}

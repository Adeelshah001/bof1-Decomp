extern u8 D_03004754;
extern s32 D_03004EB4;
extern s32 D_03004F10;
extern s32 D_03004F24;
extern s32 D_03004FE0;
extern u8 D_08151FC8[];

void sub_08070868(s32, s32, s32, s32, const void *, s32);

typedef struct {
    u8 pad00[0x0C];
    u16 unkC;
} Struct08081F10;

s32 sub_08081F10(Struct08081F10 *arg0) {
    sub_08070868(2, 8, 0, -1, D_08151FC8, 0);
    if (D_03004F10 + D_03004EB4 == 0) {
        D_03004FE0 = 0;
        D_03004F24 = 1;
    } else {
        D_03004FE0 = -1;
        D_03004F24 = 0;
    }
    arg0->unkC = 1;
    D_03004754 = 1;
    return 1;
}

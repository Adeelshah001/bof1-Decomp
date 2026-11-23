extern u8 D_03004620[];
extern u8 D_03004760[];
extern u8 D_08100744[];

void sub_0805B358(void *, s32, s32, s32, s32);
void sub_080600A8(void);
void sub_08068938(s32, s32);

s32 sub_08061CD8(void) {
    u8 *ptr;

    sub_08068938(2, 6);
    ptr = D_03004620;
    ptr[0xB4] = 0;
    ptr[0xB5] = 0x72;
    ptr[0xB2] = 0xFF;
    sub_080600A8();
    sub_0805B358(D_08100744, 0, 0xB, 0, 1);
    D_03004760[0x19] = 2;
    return 0;
}

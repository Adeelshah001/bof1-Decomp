extern u8 D_030045B0[];
extern u8 D_03004620[];
extern u8 D_03004760[];
extern u32 D_08100E0C[];
extern u32 D_08100E14[];
extern u8 D_08100744[];
extern u8 D_08100824[];
extern u8 D_08100B06[];

void sub_080674B8(s32);
void sub_08068984(s32, s32, s32, s32, void *);
void sub_0805B358(void *, s32, s32, s32, s32);
void sub_080600A8(void);
void sub_08068938(s32, s32);

s32 sub_08061CB8(void) {
    return ((s32 (*)(void))D_08100E0C[D_03004620[3] >> 1])();
}

s32 sub_08061D28(void) {
    return ((s32 (*)(void))D_08100E14[D_03004760[0x19] >> 1])();
}

s32 sub_08061CD8(void) {
    u8 *ptr;

    sub_08068938(2, 6);
    ptr = D_03004620;
    ptr += 0xB4;
    *ptr++ = 0;
    *ptr = 0x72;
    ptr -= 3;
    *ptr = 0xFF;
    sub_080600A8();
    sub_0805B358(D_08100744, 0, 0xB, 0, 1);
    D_03004760[0x19] = 2;
    return 0;
}

s32 sub_08061D68(void) {
    u32 zero;

    sub_080674B8(1);
    sub_08068984(1, 1, 1, 0, D_08100B06 + 1);
    zero = 0;
    sub_0805B358(D_08100824, 0, 1, 0, zero);
    D_030045B0[0x5A] = zero;
    D_03004620[3] = 2;
    return 0;
}

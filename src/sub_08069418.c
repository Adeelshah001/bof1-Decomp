extern u8 D_03004620[];
extern u16 D_030016E0[];
extern u8 D_0814BC76[];
extern u8 sub_0814C2F6[];

void sub_080416AC(void);
void sub_08064008(void);
void sub_0805B358(u32, u8, u8, u8, s32);
void sub_08063CA0(void);
void sub_080379D4(s32);
s32 sub_08068B0C(void);
void sub_08059978(void);
void sub_0805B308(void *);

s32 sub_08069438(s32 arg0, s32 arg1, s32 arg2) {
    if (arg1 == 0) {
        return 1;
    }
    if (arg1 == 1 && (arg2 & 3) != 1) {
        return 1;
    }
    return 0;
}

s32 sub_08069418(void) {
    u8 *p;
    sub_080416AC();
    p = D_03004620;
    p[0xB2] = 0;
    p[3] = 2;
    return 0;
}

s32 sub_080694F0(void) {
    u8 *p = D_03004620;
    p[0xB4] = 0;
    p[0xB2] = 0;
    sub_08064008();
    sub_0805B358((u32)(sub_0814C2F6 + 0x112), p[0xB1], 5, 0, 1);
    sub_08063CA0();
    p[3] = 6;
    return 0;
}

s32 sub_08069534(void) {
    u16 flags = D_030016E0[3];
    if (flags & 4) {
        sub_080379D4(0x15);
        return sub_08068B0C();
    }
    if (flags & 3) {
        sub_080379D4(2);
        sub_08059978();
        sub_0805B308(D_0814BC76);
        D_03004620[3] = 2;
    }
    return 0;
}

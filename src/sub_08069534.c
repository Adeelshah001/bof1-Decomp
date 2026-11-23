extern u16 D_030016E0[];
extern u8 D_03004620[];
extern u8 D_0814BC76[];

void sub_080379D4(s32);
s32 sub_08068B0C(void);
void sub_08059978(void);
void sub_0805B308(void *);

s32 sub_08069438(s32 arg0, s32 arg1, s32 arg2) {
    switch (arg1) {
    case 0:
        return 1;
    case 1:
        if ((arg2 & 3) != 1) {
            return 1;
        }
    }
    return 0;
}

s32 sub_08069534(void) {
    if (4 & D_030016E0[3]) {
        sub_080379D4(0x15);
        return sub_08068B0C();
    }
    if (3 & D_030016E0[3]) {
        sub_080379D4(2);
        sub_08059978();
        sub_0805B308(D_0814BC76);
        D_03004620[3] = 2;
    }
    return 0;
}

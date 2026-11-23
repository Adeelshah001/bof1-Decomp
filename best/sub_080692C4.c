extern u8 D_03004620[];
extern u16 D_030016E0[];

s32 sub_080379D4(s32);
s32 sub_08068B00(void);

s32 sub_080692C4(void) {
    u16 flags = D_030016E0[3];
    u16 r4 = (u16)(4 & flags);

    if (r4 != 0) {
        sub_080379D4(0x15);
        return sub_08068B00();
    }

    if (3 & flags) {
        sub_080379D4(3);
        D_03004620[2] = 8;
        D_03004620[3] = r4;
        D_03004620[7] = r4;
    }

    return 0;
}

s32 sub_08069268(void) {
    u16 flags = D_030016E0[3];
    u16 r4 = (u16)(4 & flags);

    if (r4 != 0) {
        sub_080379D4(0x15);
        return sub_08068B00();
    }

    if (3 & flags) {
        sub_080379D4(2);
        D_03004620[2] = 8;
        D_03004620[3] = r4;
        D_03004620[7] = r4;
    }

    return 0;
}

s32 sub_08069334(void) {
    u16 flags = D_030016E0[3];

    if (2 & flags) {
        sub_080379D4(3);
        D_03004620[3] = 0;
        return 0;
    }

    if (1 & flags) {
        sub_080379D4(2);
        D_03004620[3] = 8;
        return 0;
    }

    return 0;
}

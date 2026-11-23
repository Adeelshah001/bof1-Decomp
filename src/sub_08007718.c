s32 sub_08001770(s32);
void sub_08007548(s32, s32);
void sub_080A0770(s32);

extern u8 D_03004830[];
extern u32 D_080F58C4[];
extern u32 D_080F5A50[];

void sub_08007718(void) {
    if ((sub_08001770(0x27) << 0x18) == 0) {
        sub_08007548(8, 0);
        sub_08007548(9, 0);
        sub_08007548(0xA, 0);
        sub_08007548(0xB, 0);
        sub_08007548(0xC, 0);
    }
}

void sub_08007754(void) {
    if ((sub_08001770(0x3B) << 0x18) != 0) {
        sub_08007548(0, 0);
        sub_08007548(1, 0);
        sub_08007548(2, 0);
        sub_08007548(3, 0);
    }
}

void sub_08007788(void) {
    s8 val = D_03004830[0x2B];
    u32 idx = (u32)val * 4;
    sub_080A0770(D_080F58C4[idx]);
}

void sub_080077D0(void) {
    s8 val = D_03004830[0x2B];
    u32 idx = (u32)val * 4;
    sub_080A0770(D_080F5A50[idx]);
}

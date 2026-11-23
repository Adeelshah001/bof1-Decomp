extern u8 D_030023DC[];
extern u8 D_030045B0[];
extern u8 D_03004620[];

u8 sub_0805B040(s32);
s32 sub_0805C934(u8);
s32 sub_0805CC30(void);
void sub_0805CA64(void);
s32 sub_08068AF4(void);

s32 sub_08061B5C(void) {
    u8 r4;
    u8 r1;

    if (D_030023DC[0] == 1)
        return 0;
    r4 = sub_0805B040(0);
    r1 = 0x80 & r4;
    if (r1 != 0)
        return 0;
    D_030045B0[0x37] = r1;
    if (sub_0805C934(r4) != 0) {
        D_03004620[0] = r4;
        return 0;
    }
    if (sub_0805CC30() == 0)
        return 0;
    sub_0805CA64();
    return sub_08068AF4();
}

extern u8 D_03004620[];
extern u32 D_08100CFC[];
extern u32 D_08100DD4[];
extern u8 D_0300169C[];
extern u8 D_030023DC[];
extern u8 D_030045B0[];

s32 sub_080A0770(s32);
void sub_0805F2E0(s32);
void sub_0806143C(void);
void sub_08061FBC(s32);
void sub_0805F040(void);
u8 sub_0805B040(s32);
s32 sub_0805C934(u8);
void sub_0805CA64(void);
s32 sub_0805CC30(void);
s32 sub_08068AF4(void);

s32 sub_08061BB8(void) {
    return ((s32 (*)(void))D_08100CFC[D_03004620[3] >> 1])();
}

s32 sub_08061BD8(void) {
    if (D_0300169C[0] != 0) {
        sub_08061FBC(4);
    } else {
        sub_08061FBC(9);
    }
    sub_0805F2E0(0);
    sub_0806143C();
    return 0;
}

s32 sub_08061C08(void) {
    s32 res = sub_080A0770((s32)D_08100DD4[D_03004620[3] >> 1]);
    sub_0805F040();
    return res;
}

s32 sub_08061B5C(void) {
    u8 r4;
    u8 r1;

    if (D_030023DC[0] != 1) {
        r4 = sub_0805B040(0);
        r1 = 0x80 & r4;
        if (r1 == 0) {
            D_030045B0[0x37] = r1;
            if (sub_0805C934(r4) == 0) {
                if (sub_0805CC30() != 0) {
                    sub_0805CA64();
                    return sub_08068AF4();
                }
            } else {
                D_03004620[0] = r4;
                return 0;
            }
        }
    }
    return 0;
}

extern u8 D_03004830[];
extern u32 D_080F8CDC[];
extern u32 D_080F8CF0[];
extern u32 D_080F8BF4[];
extern u8 D_03001850[];
extern void sub_080A0770(u32);
extern void sub_08023FD8(s32);
extern void sub_08027860(void);

void sub_080242E4(void) {
    sub_080A0770(D_080F8CDC[D_03004830[0x40]]);
}

void sub_08024304(void) {
    sub_080A0770(D_080F8CF0[D_03004830[0x40]]);
}

void sub_080242B4(void) {
    u8 temp_r4;

    temp_r4 = D_03004830[0x40] & D_03001850[0];
    if (temp_r4 == 0) {
        sub_08023FD8(0x84);
        D_03004830[0x3F] = temp_r4;
        D_03004830[0x40] = temp_r4;
    }
}

void sub_08024324(void) {
    if (D_03004830[0x40] == 0) {
        sub_08027860();
    }
}

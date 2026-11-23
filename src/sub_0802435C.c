extern u8 D_03004830[];
extern u32 D_080F8D08[];
extern u32 D_080F8D14[];
extern u32 D_080F8D20[];
extern u32 D_080F8D30[];
extern void sub_080A0770(u32);

void sub_0802433C(void) {
    sub_080A0770(D_080F8D08[D_03004830[0x40]]);
}

void sub_0802435C(void) {
    sub_080A0770(D_080F8D14[D_03004830[0x40]]);
}

void sub_0802437C(void) {
    sub_080A0770(D_080F8D20[D_03004830[0x40]]);
}

void sub_0802439C(void) {
    sub_080A0770(D_080F8D30[D_03004830[0x40]]);
}

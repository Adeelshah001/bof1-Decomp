extern u8 D_03004830[];
extern u32 D_080F8C04[];
extern u32 D_080F8C28[];
extern u32 D_080F8C40[];
extern u32 D_080F8C50[];
extern void sub_080A0770(u32);

void sub_0802417C(void) {
    sub_080A0770(D_080F8C04[D_03004830[0x40]]);
}

void sub_0802419C(void) {
    sub_080A0770(D_080F8C28[D_03004830[0x40]]);
}

void sub_080241BC(void) {
    sub_080A0770(D_080F8C40[D_03004830[0x40]]);
}

void sub_080241DC(void) {
    sub_080A0770(D_080F8C50[D_03004830[0x40]]);
}

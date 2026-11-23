void sub_080139E0(s32 arg0, s32 arg1);
void sub_08013A00(s32 arg0, s32 arg1);
void sub_08013A50(s32 arg0);
void sub_08013A6C(s32 arg0);

void sub_08013990(void) {
    sub_080139C0(0x2A8, 0xFFFFB2BC);
    sub_080139E0(0x2A8, 0xFFFFB2CC);
    sub_08013A00(0x298, 0xFFFFB2CC);
}

void sub_08013A20(s8 arg0) {
    sub_08013A6C((s32)arg0 | 0x1800);
}

void sub_08013A38(s8 arg0) {
    sub_08013A6C((s32)arg0 | 0x1200);
}

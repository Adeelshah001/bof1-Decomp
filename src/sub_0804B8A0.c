extern u8 D_03003F98[];
void sub_0803EE6C(s32 arg0);
void sub_0803A8EC(s32 arg0);

void sub_0804B8A0(s32 arg0) {
    s32 copy = arg0;
    if (D_03003F98[0] & 0x80) {
        sub_0803EE6C(arg0);
    }
    sub_0803A8EC(copy);
}

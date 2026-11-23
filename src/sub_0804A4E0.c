extern u8 D_080A667C[];
void sub_080A0A68(void *dst, const void *src, s32 len);
void sub_08037FC4(void *arg0, u8 arg1);

void sub_0804A4E0(u8 *arg0) {
    u8 sp0[4];
    sub_080A0A68(sp0, D_080A667C, 4);
    sub_08037FC4(arg0, sp0[arg0[0x61]]);
}

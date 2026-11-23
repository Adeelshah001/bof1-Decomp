extern u8 D_03004830[];

void sub_08007CF8(void) {
    sub_08037A74(0x100);
    sub_0800312C(0x10, 6);
    sub_08001F80(0, 0, 0);
    sub_080017EC(0x21);
    sub_0803AF58(0x93, 0xFFFF);
    sub_0803AF58(0x9A, 0xFFFF);
    sub_0803AF58(0xA1, 0xFFFF);
    sub_08005F10();
    sub_08033B88(0x03002AB0, 2);
    D_03004830[0x2B] += 1;
}

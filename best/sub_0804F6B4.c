
extern void *D_080FD5C4[];
void sub_080A0774(void *arg0, void *arg1);
void sub_080379D4(s32 arg0);
s32 sub_08037C98(void *arg0, s32 arg1);
void sub_0803A8EC(void *arg0);

void sub_0804F698(void *arg0) {
    sub_080A0774(arg0, D_080FD5C4[*(u8 *)(arg0 + 0x3B)]);
}

void sub_0804F6B4(void *arg0) {
    u8 *p;
    u8 val;

    p = (u8 *)arg0 + 0x54;
    val = *p;
    if (val == 0) {
        sub_080379D4(0x16);
        p = (u8 *)arg0 + 0xC9;
        val = *(u8 *)p + 1;
    } else {
        val -= 1;
    }
    *p = val;
}

void sub_0804F6DC(void *arg0) {
    if (sub_08037C98(arg0, 1) << 0x10) {
        sub_0803A8EC(arg0);
    } else {
        *(u8 *)(arg0 + 0xC9) += 1;
    }
}

void sub_0804F704(void *arg0) {
    u16 val;

    val = *(u16 *)(arg0 + 0x54) - 1;
    *(u16 *)(arg0 + 0x54) = val;
    if (val << 0x10) {
        sub_08037C98(arg0, 0);
        sub_0803A8EC(arg0);
    } else {
        *(u16 *)(arg0 + 0x2C) -= 0x32;
        *(u8 *)(arg0 + 0xC9) += 1;
    }
}

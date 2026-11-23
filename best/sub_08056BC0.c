extern void sub_08056B9C(void);

void sub_08056BA8(void *arg0) {
    *(u16 *)((u8 *)arg0 + 0xF6) = *(u16 *)((u8 *)arg0 + 0xF4);
    sub_08056B9C();
}

void sub_08056BC0(void *arg0, u16 arg1) {
    u16 *ptr = (u16 *)((u8 *)arg0 + 0xF6);
    s32 temp;

    if (*ptr != 0) {
        temp = *ptr - (s16)arg1;
        if (temp < 1) {
            temp = 1;
        }
        *ptr = temp;
    }
}

void sub_08056BE0(void *arg0, u16 arg1) {
    u16 *ptr = (u16 *)((u8 *)arg0 + 0xFA);
    s32 temp;

    if (*ptr != 0) {
        temp = *ptr - (s16)arg1;
        if (temp < 1) {
            temp = 1;
        }
        *ptr = temp;
    }
}

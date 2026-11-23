void sub_08037FC4(void *, s32);
void sub_0803800C(void *, s32, s32);

void sub_0807A868(void *arg0) {
    u8 *a = arg0;
    u8 *p4c = a + 0x4C;
    u8 zero = 0;
    u8 result;

    *p4c = 2;
    a[0x4D] = zero;
    a[0x50] = zero;

    if (((a[0xF1] & 3) != 0 && (a[0xF0] & 0x28) == 0) || (a[0xDC] & 0x40) != 0) {
        sub_0803800C(arg0, 4, 2);
        return;
    }

    result = 0;
    if (a[0x3C] == 0 && (a[0xF0] & 0x28) == 0 && a[0x112] > 0x5C) {
        result = 0xC;
    }
    sub_08037FC4(arg0, result);
}

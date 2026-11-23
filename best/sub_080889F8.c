void sub_08037FC4(void *, s32);
void sub_08088624(void *, s32, s32, s32);

void sub_080889F8(void *arg0) {
    u8 *obj = arg0;
    u8 zero = 0;
    obj[0x41] = 0xC;
    sub_08088624(arg0, 0x5320, 0x1C0, 0xC0);
    obj[0x4C] = 2;
    obj[0x4D] = zero;
    sub_08037FC4(arg0, 4);
}

void sub_080A0664(u8 *arg0, u8 *arg1, s32 arg2) {
    s32 n = arg2;

    *(vu16 *)0x04000204 = (*(vu16 *)0x04000204 & 0xFFFC) | 3;
    n--;
    if (n != -1) {
        do {
            *arg1 = *arg0;
            arg0++;
            arg1++;
            n--;
        } while (n != -1);
    }
}

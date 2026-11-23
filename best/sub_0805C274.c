void sub_0805C1A8(u8 arg0, s16 *arg1, s16 *arg2)
{
    if (arg0 & 0x80) {
        D_03004830[0x2B] = 4;
    } else {
        D_03004830[0x2B] = 2;
    }
    *arg1 = 0x5A4;
    *arg2 = 0x5A3;
}

void sub_0805C1E4(u8 arg0, s16 *arg1, s16 *arg2)
{
    if (!(arg0 & 0x80)) {
        D_03004830[0x2B] = 4;
    }
    *arg1 = 0x5A3;
    *arg2 = 0x5A4;
}

void sub_0805C274(u8 arg0, s16 *arg1, s16 *arg2)
{
    if (arg0 & 0x80) {
        D_03004830[0x2B] = 0;
    } else {
        D_03004830[0x2B] = 1;
    }
    D_03004830[0x2A] = 0x10;
    (*(vu8 *)(0x03002B68)) |= 4;
    *arg1 = 0x5B6;
    *arg2 = 0x5B5;
}

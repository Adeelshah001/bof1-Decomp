void sub_0805C190(u8 arg0, s16 *arg1, s16 *arg2)
{
    *arg1 = 0x4F3;
    *arg2 = 0x4F5;
}

void sub_0805C1A8(u8 arg0, s16 *arg1, s16 *arg2)
{
    if (arg0 & 0x80) {
        (*(vu8 *)(0x0300485B)) = 4;
    } else {
        (*(vu8 *)(0x0300485B)) = 2;
    }
    *arg1 = 0x5A4;
    *arg2 = 0x5A3;
}

void sub_0805C1E4(u8 arg0, s16 *arg1, s16 *arg2)
{
    if (!(arg0 & 0x80)) {
        (*(vu8 *)(0x0300485B)) = 4;
    }
    *arg1 = 0x5A3;
    *arg2 = 0x5A4;
}

void sub_0805C274(u8 arg0, s16 *arg1, s16 *arg2)
{
    if (arg0 & 0x80) {
        (*(vu8 *)(0x0300485B)) = 0;
    } else {
        (*(vu8 *)(0x0300485B)) = 1;
    }
    (*(vu8 *)(0x0300485A)) = 0x10;
    (*(vu8 *)(0x03002B68)) |= 4;
    *arg1 = 0x5B6;
    *arg2 = 0x5B5;
}

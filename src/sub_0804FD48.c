void sub_08037FC4(void *, s32);

void sub_0804FD48(void *arg0) {
    u8 *entity = arg0;
    entity[0x41] = 6;
    entity[0x3D] = 2;
    *(u16 *)(entity + 0x1C) = 0x40;
    *(u16 *)(entity + 0x2A) = 0x74;
    sub_08037FC4(arg0, 0);
}

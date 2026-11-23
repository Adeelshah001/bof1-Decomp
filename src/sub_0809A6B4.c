void sub_0809A6FC(u8 *);
void sub_08038178(u8 *, u32);
void sub_0809A0E4(u8 *);

void sub_0809A6B4(u8 *arg0) {
    u8 *p = *(u8 **)(arg0 + 0x78);
    u16 val;
    *(u16 *)(arg0 + 2) = *(u16 *)(p + 2);
    val = *(u16 *)(p + 6);
    *(u16 *)(arg0 + 6) = val;
    *(u16 *)(arg0 + 0x2C) = val - 0x40;
    arg0[0x4C] = 8;
    sub_0809A6FC(arg0);
}

void sub_0809A6D4(u8 *arg0) {
    u8 *p = *(u8 **)(arg0 + 0x78);
    u16 val;
    *(u16 *)(arg0 + 2) = *(u16 *)(p + 0xE4);
    val = *(u16 *)(p + 0xE6);
    *(u16 *)(arg0 + 6) = val;
    *(u16 *)(arg0 + 0x2C) = val - 0x40;
    arg0[0x4C] = 8;
    sub_0809A6FC(arg0);
}

void sub_0809A780(u8 *arg0) {
    *(u16 *)(arg0 + 0x38) = 0x160;
    arg0[0x4C] = 2;
    sub_08038178(arg0, *(u32 *)(arg0 + 0x78));
    *(u16 *)(arg0 + 0x44) = (arg0[0x61] & 0xF0) << 8;
    sub_0809A0E4(arg0);
}

void sub_0809A5D0(u8 *arg0) {
    *(u16 *)(arg0 + 0x38) = 0x1A0;
    arg0[0x4C] = 2;
    sub_08038178(arg0, *(u32 *)(arg0 + 0x78));
    *(u16 *)(arg0 + 0x44) = (arg0[0x61] & 0xF0) << 8;
    sub_0809A0E4(arg0);
}

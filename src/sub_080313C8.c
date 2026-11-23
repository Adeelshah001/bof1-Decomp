void sub_080327BC(u8 *arg0, u8 arg1);
void sub_0802CCEC(void *arg0);

void sub_080313C8(u8 *arg0, u8 arg1) {
    u8 v = (arg1 >> 4) & 3;
    arg0[0x61] = v;
    sub_080327BC(arg0, arg1);
}

void sub_080313E4(u8 *arg0, u8 arg1) {
    u8 *base = arg0;
    u8 **pp = (u8 **)(base + 0x88);
    u32 t = arg1 << 24;
    u32 f;

    base[0xC3] = (*pp)[1];
    *pp = *pp + 2;
    f = (0x0F000000 & t) >> 24;
    if (f == 0) {
        *(u16 *)(base + 0x22) = f;
        sub_0802CCEC(base);
    }
    base[0x4D] = 4;
}

void sub_08031420(u8 *arg0, u8 arg1) {
    u32 t = arg1 << 24;
    u8 v;
    u32 f;

    *(u32 *)(arg0 + 0x88) += 1;
    v = 0x3F & arg0[0xBA];
    arg0[0xBA] = v;
    f = (0x0F000000 & t) >> 24;
    if (f != 0) {
        if (f & 1) {
            arg0[0xBA] = v | 0x80;
        } else {
            arg0[0xBA] = v | 0x40;
        }
    }
}

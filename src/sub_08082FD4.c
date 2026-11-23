s32 sub_08083014(s32);

s32 sub_08082FFC(u8 *arg0) {
    u8 *p = arg0;
    p += 0x54;
    *p++ = 0;
    *p = 0;
    return sub_08083014((s32)arg0);
}

s32 sub_08082FD4(u8 *arg0) {
    s32 ret;
    sub_08083034(arg0);
    if (++((u16 *)arg0)[0x1C] != 0x1F) {
        ret = 0;
    } else {
        ((u16 *)arg0)[0x1C] = 0;
        ret = 1;
    }
    return ret;
}

void sub_0800B274(Entity *arg0, u16 arg1, s32 arg2) {
    u16 *p;
    s32 val;
    *(u16 *)((u8 *)arg0 + 2) = arg1;
    p = (u16 *)((u8 *)arg0 + 0x46);
    *p = arg1;
    val = (s16)arg2;
    *(s16 *)((u8 *)arg0 + 6) = val;
    *(s16 *)((u8 *)arg0 + 0x2C) = val;
    p += 2;
    *(s16 *)p = val;
    sub_080547DC(arg0, 2);
    *(s16 *)((u8 *)arg0 + 0x2C) = *(s16 *)((u8 *)arg0 + 6);
}

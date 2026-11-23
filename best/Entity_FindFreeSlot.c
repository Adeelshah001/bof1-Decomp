
void sub_0803EE54(u8 *arg0) {
    u8 *p;
    s32 zero;
    p = arg0 + 0x4C;
    zero = 0;
    *(u16 *)p = zero;
    p += 4;
    *(u16 *)p = zero;
    *(u16 *)(arg0 + 0x22) = zero;
    p -= 0x16;
    *(u8 *)p = zero;
    *(u32 *)(arg0 + 0x78) = zero;
}

s32 sub_0803EEF8(void) {
    s32 i;
    u8 *p = D_03003420;
    for (i = 0; i <= 9; i++) {
        if (p[0x3A] == 0) {
            p[0x3B] = i;
            return (s32)D_03003420;
        }
        p += 0x124;
    }
    return 0;
}

u8 *Entity_FindFreeSlot(void) {
    u8 *base = (u8 *)0x03001870;
    u8 *p = base;
    s32 i = 0;
    if (p[0x3A] == 0) {
        return p;
    }
    for (i = 1; i <= 12; i++) {
        p = base + i * 0xE0;
        if (p[0x3A] == 0) {
            return p;
        }
    }
    return NULL;
}

void sub_0803EF2C(u8 *arg0) {
    u8 *p;
    s32 zero;
    p = arg0 + 0x4C;
    zero = 0;
    *(u16 *)p = zero;
    p += 4;
    *(u16 *)p = zero;
    p -= 0x16;
    *(u8 *)p = zero;
}

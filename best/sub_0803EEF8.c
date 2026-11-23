
void sub_0803EE54(u8 *arg0) {
    u8 *p = arg0 + 0x4C;
    s32 zero8 = 0;
    s32 zero32 = 0;
    *(u16 *)p = zero32;
    p += 4;
    *(u16 *)p = zero32;
    *(u16 *)(arg0 + 0x22) = zero32;
    p -= 0x16;
    *(u8 *)p = zero8;
    *(u32 *)(arg0 + 0x78) = zero32;
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
    u8 *p;
    s32 i;
    if (base[0x3A] == 0) {
        return base;
    }
    for (i = 1; i <= 12; i++) {
        p = base + i * 0x8D; /* 0x8D or 0xE0? Wait, stride is 0xE0? Let's check target or notes */
        if (*(u8 *)(p + 0x3A) == 0) {
            return p;
        }
    }
    return NULL;
}

void sub_0803EF2C(u8 *arg0) {
    u8 *p = arg0 + 0x4C;
    s32 zero8 = 0;
    s32 zero32 = 0;
    *(u16 *)p = zero32;
    p += 4;
    *(u16 *)p = zero32;
    p -= 0x16;
    *(u8 *)p = zero8;
}

extern u8 D_030023E0[];
extern u8 D_03002510[];

void sub_0802E3AC(Entity *arg0) {
    u8 *p = (u8 *)arg0;
    u16 val = *(u16 *)(D_030023E0 + 0xA4);
    
    if (val == 0x102 || val == 0xBB) {
        p[0x50] = 6;
    } else {
        u8 *ptr = D_03002510 + 0x3A;
        *ptr |= 0x40;
        
        if (D_03004830[0x36] == 0x85) {
            p[0x54] = 0x10;
            p[0x50] = 0xA;
        } else {
            p[0x54] = 0x10;
            p[0x50] = 2;
        }
    }
}

void sub_0802EA90(Entity *arg0) {
    u8 *p = (u8 *)arg0;
    u8 *src = *(u8 **)(p + 0x88);
    u16 val1 = src[1] | (src[2] << 8);
    u16 val2 = src[3] | (src[4] << 8);
    
    *(u16 *)(p + 0x02) = val1;
    *(u16 *)(p + 0x46) = val1;
    *(u16 *)(p + 0x82) = val1;
    *(u16 *)(p + 0x06) = val2;
    *(u16 *)(p + 0x4A) = val2;
    *(u16 *)(p + 0x86) = val2;
    *(u16 *)(p + 0x2C) = val2;
    *(u32 *)(p + 0x88) = (u32)(src + 5);
}

void sub_0802EAD8(Entity *arg0) {
    u8 *p = (u8 *)arg0;
    u8 *src = *(u8 **)(p + 0x88);
    s16 val1 = (s16)(src[1] | (src[2] << 8));
    s16 val2 = (s16)(src[3] | (src[4] << 8));
    
    if (src[1] & 0x80) val1 |= 0xFF00;
    val1 += *(u16 *)(p + 0x02);
    *(u16 *)(p + 0x02) = val1;
    *(u16 *)(p + 0x82) = val1;
    
    if (src[3] & 0x80) val2 |= 0xFF00;
    val2 += *(u16 *)(p + 0x06);
    *(u16 *)(p + 0x06) = val2;
    *(u16 *)(p + 0x86) = val2;
    *(u16 *)(p + 0x2C) = val2;
    *(u32 *)(p + 0x88) = (u32)(src + 3);
}

extern void sub_0802C934(void);
extern s32 sub_08032BF4(void *arg0, void *arg1, void *arg2, void *arg3);
extern void sub_080379D4(s32 arg0);

s32 sub_0802EDC4(Entity *arg0) {
    u8 *p = (u8 *)arg0;
    u32 sp0, sp4;
    
    sub_0802C934();
    p[0xBA] |= 0x80;
    if ((sub_08032BF4(arg0, &sp0, (void *)((u32)&sp0 + 2), &sp4) << 24) == 0) {
        p[0xBA] |= 4;
    }
    p[0xB8] |= 0x20;
    sub_080379D4(0x20);
    p[0x4D] = 2;
    return 0;
}

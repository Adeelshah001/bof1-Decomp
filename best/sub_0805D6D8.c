void sub_0805D684(u16 *arg0, const u8 *arg1) {
    u8 count;
    u8 val;
    
    while (1) {
        count = *arg1;
        if (count == 0) return;
        
        count = *arg1++;
        val = *arg1++;
        
        do {
            *arg0++ = val;
            count--;
        } while (count != 0);
    }
}

s32 sub_0805CD90(u16);
s32 sub_0805D704(u16, u8 *);

s32 sub_0805D6A8(u16 arg0, u8 *arg1) {
    u8 *r4 = arg1;
    u16 r5 = arg0;
    s32 r6 = 0;
    
    *r4 = 0;
    if (sub_0805CD90(r5) != 0) {
        if (sub_0805D704(r5, r4) == 0) {
            r6 = 1;
        }
    }
    return r6;
}

s32 sub_080A07AC(s32, s32);
s32 sub_080A0844(s32, s32);

void sub_0805D634(s32 arg0, u8 *arg1) {
    u8 *r7 = arg1 + 1;
    s32 r6 = arg0;
    s32 r5;
    
    arg1[0] = 3;
    r5 = 2;
    // write 2 to arg1[3], arg1[2], arg1[1]
    do {
        r7[r5] = 2;
        r5--;
    } while (r5 >= 0);
    
    if (r6 == 0) {
        r7[2] = 0x20;
        return;
    }
    
    r5 = 2;
    while (1) {
        if (r6 == 0) break;
        r7[r5] = sub_080A0844(r6, 0xA) + 0x20;
        r6 = sub_080A07AC(r6, 0xA);
        r5--;
        if (r5 < 0) break;
    }
}

extern u8 D_08100690[4];
extern u32 D_08100694[4];

u32 sub_0805D6D8(u16 arg0) {
    u16 r0 = arg0;
    u32 r2 = (r0 & 0x3000) >> 12;
    u8 r1 = D_08100690[r2];
    u32 r0_low = r0 & 0xFF;
    u32 r0_high = D_08100694[r2];
    return r0_high + r1 * r0_low;
}

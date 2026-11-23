void sub_0805D684(u16 *arg0, const u8 *arg1) {
    u8 count;
    while ((count = *arg1++) != 0) {
        u8 val = *arg1++;
        while (count-- != 0) {
            *arg0++ = val;
        }
    }
}

s32 sub_0805CD90(u16);
s32 sub_0805D704(u16, u8 *);

s32 sub_0805D6A8(u16 arg0, u8 *arg1) {
    s32 result = 0;
    *arg1 = 0;
    if (sub_0805CD90(arg0) != 0) {
        if (sub_0805D704(arg0, arg1) == 0) {
            result = 1;
        }
    }
    return result;
}

s32 sub_080A07AC(s32, s32);
s32 sub_080A0844(s32, s32);

void sub_0805D634(s32 arg0, u8 *arg1) {
    s32 i;
    arg1[0] = 3;
    arg1[1] = 2;
    arg1[2] = 2;
    arg1[3] = 2;
    
    if (arg0 == 0) {
        arg1[3] = 0x20;
        return;
    }
    
    for (i = 2; i >= 0; i--) {
        arg1[i + 1] = sub_080A0844(arg0, 0xA) + 0x20;
        arg0 = sub_080A07AC(arg0, 0xA);
    }
}

extern u8 D_08100690[4];
extern u32 D_08100694[4];

u32 sub_0805D6D8(u16 arg0) {
    u32 index = (arg0 & 0x3000) >> 12;
    u8 mult = D_08100690[index];
    u32 base = D_08100694[index];
    return base + mult * (arg0 & 0xFF);
}

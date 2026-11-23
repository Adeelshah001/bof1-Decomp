extern s32 sub_080A07AC(s32, s32);
extern s32 sub_080A0844(s32, s32);

void sub_0805D634(s32 arg0, u8 *arg1) {
    s32 r6;
    u8 *r7;
    s32 r5;
    u8 *r4;
    
    arg1[0] = 3;
    r6 = arg0;
    r7 = arg1 + 1;
    r5 = 2;
    arg1 += 3;
    
    do {
        arg1[0] = 2;
        arg1--;
        r5--;
    } while (r5 >= 0);
    
    if (r6 != 0) {
        r5 = 2;
        while (1) {
            if (r6 == 0) break;
            r4 = r7 + r5;
            r4[0] = sub_080A0844(r6, 0xA) + 0x20;
            r6 = sub_080A07AC(r6, 0xA);
            r5--;
            if (r5 < 0) break;
        }
    } else {
        r7[2] = 0x20;
    }
}

extern u8 D_08100690[];
extern u32 D_08100694[];

u32 sub_0805D6D8(u16 arg0) {
    u16 r0 = arg0;
    u32 r2 = (r0 & 0x3000) >> 12;
    u8 r1 = D_08100690[r2];
    u32 r0_low = r0 & 0xFF;
    u32 r0_high = D_08100694[r2];
    return r0_high + r1 * r0_low;
}

extern s8 sub_0805D8F4(void);
extern s32 sub_0805D910(u8, void *);

s32 sub_0805D704(u8 *arg1) {
    s32 var_r5;
    s8 temp_r0_2;
    u8 temp_r0;
    u32 sp0;

    temp_r0 = *(u8 *)0x0300169C;
    if (temp_r0 == 0) {
        *arg1 = temp_r0;
        var_r5 = 0;
        temp_r0_2 = sub_0805D8F4();
        if ((s32)temp_r0_2 > 0) {
            while (1) {
                if ((sub_0805D910(*arg1, &sp0) << 0x18) != 0) {
                    return 1;
                }
                var_r5 += 1;
                *arg1 += 1;
                if (var_r5 >= (s32)temp_r0_2) {
                    break;
                }
            }
        }
    }
    return 0;
}

extern s32 sub_0806BDE0(s32, s32, s32, void *, s32);

void sub_0805D800(s32 arg0, s32 arg1, void *arg2) {
    void *var_r3;

    var_r3 = arg2 + 1;
    if (*(u8 *)(arg2 + 1) == 1) {
        var_r3 += 1;
    }
    sub_0806BDE0(0, arg0, arg1, var_r3, *(u8 *)arg2 + 1);
}

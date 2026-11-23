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

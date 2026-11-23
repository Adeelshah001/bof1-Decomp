extern u32 *D_03004550;
extern u8 D_0300169C;
extern u8 D_03002AB0[];
extern u32 D_03002B98;

void sub_08059EE8(void) {
    u32 *r1;
    u32 r0;
    u8 r5;
    u32 *r6;
    u32 r7;
    u8 *r2;
    u32 r4;
    u32 r3;
    s32 r8;

    r1 = D_03004550;
    r0 = *r1;
    r5 = *(u8 *)r0;
    r0 = r0 + 1;
    *r1 = r0;

    r0 = D_0300169C;
    r6 = r1;

    if (r0 != 0) {
        r0 = (r5 << 3) + 0x080FFB74;
    } else {
        r8 = 0;
        r7 = 0x03002AB0;
        r2 = (u8 *)(r7 + 0x3A);
        r4 = 0;
        r3 = 0x124;

        while (r8 <= 7) {
            r0 = *r2;
            if (r0 == 0) {
                goto next_iter;
            }
            r0 = r2[2];
            if (r0 == r5) {
                r0 = r7 + 0xE8 + r4;
                goto store_result;
            }
        next_iter:
            r2 += r3;
            r4 += r3;
            r8++;
        }

        r0 = D_03002B98;
    }

store_result:
    r6[3] = r0;
    r2 = (u8 *)r6;
    r2[0x21] = 4;
    r0 = r2[0x1D] | 2;
    r2[0x1D] = r0;
}

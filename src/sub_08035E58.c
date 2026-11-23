void sub_080A0A68(void *dst, const void *src, s32 n);
void sub_08035F90(u8 c);
void sub_08035F40(void);

extern u8 D_080A64A6[];
extern u8 D_03002490[];

void sub_08035E58(void) {
    u8 buf[2];
    u8 i;

    sub_080A0A68(buf, D_080A64A6, 2);
    i = 0;
    do {
        sub_08035F90(buf[i]);
        i++;
    } while (i <= 1);
    sub_08035F40();
}

u8 *sub_08035F04(void) {
    u8 *r = 0;
    u8 i = 0;
    u8 *p;

    if (D_03002490[0x18] == 0) {
        r = D_03002490;
    } else {
        for (;;) {
            i++;
            if (i > 3)
                break;
            p = (u8 *)(i * 0x1C + (u32)D_03002490);
            if (p[0x18] == 0) {
                r = p;
                break;
            }
        }
    }
    return r;
}

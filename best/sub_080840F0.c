extern u16 D_03004F50[];
extern u8 D_08152036[];

void sub_08084088(void *arg0, u8 arg1) {
    if (arg1 != 0) {
        u8 *p = (u8 *)arg0;
        u8 b = p[0xFC];
        if (D_08152036[b] & arg1) {
            D_03004F50[0x20] = D_03004F50[0x20] + (D_03004F50[0x20] >> 1);
        }
    }
}

void sub_080840F0(void) {
    u16 v = D_03004F50[0x20];
    if (v > 0x3E7U) v = 0x3E7U;
    D_03004F50[0x20] = v;
    D_03004F50[0x3A] = v;
    *(u8 *)0x03004F98 = 0;
}

void sub_08083B90(void *arg0) {
    u8 *p = (u8 *)arg0;
    p[0xE0] = 2;
    p[0xE2] = 0;
    p[0x7D] &= 0xF0;
}

extern u16 D_03001104[];
extern u16 D_03001106[];
extern void sub_080841D0(void *);

void sub_080845C0(void *arg0) {
    if ((((*(u32 *)((u8 *)arg0 + 0x48) << 8) >> 16) & 1) == 0) {
        D_03001104[0] -= 8;
        D_03001106[0] += 8;
    }
    sub_080841D0(arg0);
}

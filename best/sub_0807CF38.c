void sub_0807CF2C(void *);
void sub_0807CA34(void *);
extern u8 D_03004F30[];
extern u8 D_03004F50[];
extern u8 D_03002AB0[];

void sub_0807D260(void *arg0) {
    u8 *p54 = (u8 *)arg0 + 0x54;
    u8 t = *p54 - 1;
    *p54 = t;
    if (t == 0) {
        sub_0807CF2C(arg0);
        return;
    }
    if ((t & 1) && !(D_03004F30[9] & 0xA0) && !(*(u8 *)(p54 + 0x9D) & 0x80)) {
        sub_0807CA34(arg0);
    }
}

void sub_0807D114(void *arg0, s8 arg1) {
    u8 *p = (u8 *)arg0 + 0x4C;
    *p = arg1;
    *++p = 0;
    p += 3;
    *p = 0;
    ++p;
    *p = 0;
    p += 3;
    *p = 0;
    ++p;
    *p = 0;
    D_03004F50[0x5D] = 0;
    p = (u8 *)arg0 + 0xE0;
    *p = 0;
    *++p = 0;
}

s32 sub_0807CF38(void *dummy, void **arg1, u8 arg2) {
    void *ptr;
    u8 *p;
    (void)dummy;
    ptr = (void *)((u32)D_03002AB0 + (u32)arg2 * 0x124);
    *arg1 = ptr;
    p = (u8 *)ptr;
    if (p[0x3A] != 0 && !(p[0xF1] & 0x80) && !(p[0xF0] & 0x50)) return 1;
    return 2;
}

void sub_0807C600(void *arg0, s8 arg1) {
    u8 *p = (u8 *)arg0 + 0x4C;
    D_03004F50[0x4A] = 0;
    *p = arg1;
    *++p = 0;
    p += 3;
    *p = 0;
    ++p;
    *p = 0;
    p += 3;
    *p = 0;
    ++p;
    *p = 0;
    D_03004F50[0x5D] = 0;
    p += 0x8B;
    *p = 0;
    *++p = 0;
}

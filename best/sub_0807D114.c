void sub_0807CF2C(void *);
void sub_0807CA34(void *);
extern u8 D_03004F30[];
extern u8 D_03004F50[];
extern u8 D_03002AB0[];

void sub_0807D260(void *arg0) {
    Entity *e = arg0;
    u8 *p54 = (u8 *)e + 0x54;
    u8 t;
    *p54 = t = *p54 - 1;
    if (t == 0) {
        sub_0807CF2C(e);
        return;
    }
    if ((t & 1) && !(D_03004F30[9] & 0xA0) && !(*(u8 *)((u8 *)e + 0xF1) & 0x80)) {
        sub_0807CA34(e);
    }
}

void sub_0807D114(void *arg0, s8 arg1) {
    u8 *p = (u8 *)arg0 + 0x4C;
    *p = arg1;
    p++;
    *p = 0;
    p += 3;
    *p = 0;
    p++;
    *p = 0;
    p += 3;
    *p = 0;
    p++;
    *p = 0;
    D_03004F50[0x5D] = 0;
    p = (u8 *)arg0 + 0xE0;
    *p = 0;
    p++;
    *p = 0;
}

s32 sub_0807CF38(void **arg1, u8 arg2) {
    u8 idx = arg2;
    void *ptr = (void *)((u32)idx * 0x124 + (u32)D_03002AB0);
    *arg1 = ptr;
    if (((u8 *)ptr)[0x3A] != 0 && !(((u8 *)ptr)[0xF1] & 0x80) && !(((u8 *)ptr)[0xF0] & 0x50)) {
        return 1;
    }
    return 2;
}

void sub_0807C600(void *arg0, s8 arg1) {
    u8 *g = D_03004F50;
    u8 *p = (u8 *)arg0 + 0x4C;
    g[0x4A] = 0;
    *p = arg1;
    p++;
    *p = 0;
    p += 3;
    *p = 0;
    p++;
    *p = 0;
    p += 3;
    *p = 0;
    p++;
    *p = 0;
    g[0x5D] = 0;
    p = (u8 *)arg0 + 0xD7;
    *p = 0;
    p++;
    *p = 0;
}

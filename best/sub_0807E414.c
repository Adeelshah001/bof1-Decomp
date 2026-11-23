extern void (*const D_08151C68[])(void);
extern u8 D_03004F50[];
extern u8 D_03004584[];
void sub_080A0774(s32, void (*)(void));
void sub_08037FC4(void *, u8);
void sub_080A0A68(void *, const void *, s32);
void sub_080A0AC8(void *, s32, s32);

u8 sub_0807E414(void) {
    u8 *g;
    u8 *s;
    void (*const *t)(void);
    void (*f)(void);

    g = D_03004584;
    g[0] = 0;
    s = D_03004F50;
    t = D_08151C68;
    f = t[s[0]];
    sub_080A0774(s[0x5B], f);
    return g[0];
}

void sub_0807E3CC(void *arg0, u8 arg1) {
    u8 buf[8];
    u8 val;
    u8 *dst;

    sub_080A0AC8(buf, 0, 4);
    buf[1] = 1;
    sub_080A0A68(buf + 4, (void *)0x080A6870, 4);
    val = buf[arg1];
    dst = (u8 *)arg0 + 0x40;
    *dst = val;
    sub_08037FC4(arg0, buf[4 + arg1]);
}

extern u8 D_03002BD4[];
void sub_080017EC(s32);

void sub_0807E1F0(void) {
    u8 *base = D_03002BD4;

    sub_080017EC(0x7D);

    *(u16 *)(base + 2) = 0x358;
    *(u16 *)(base + 0x126) = 0x358;
    *(u16 *)(base + 0x24A) = 0x358;
    *(u16 *)(base + 0x12A) = 0x3E9C;
    *(u16 *)(base + 0x24E) = 0x3E8C;
    *(u8 *)(base + 0x185) = 2;
    *(u8 *)(base + 0x2A9) = 2;
}

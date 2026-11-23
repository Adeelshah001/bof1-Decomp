extern void (*const D_08151C68[])(void);
extern u8 D_03004F50[];
extern u8 D_03004584[];
extern u8 D_03004830[];
extern u8 D_03002AB0[];
extern u16 D_0202DBD0[];
void sub_080A0774(s32, void (*)(void));
void sub_08002BBC(u8);
void sub_080017EC(s32);

u8 sub_0807E414(void) {
    u8 *g;
    void (*const *t)(void);
    u8 *s;
    void (*f)(void);

    g = D_03004584;
    g[0] = 0;
    t = D_08151C68;
    s = D_03004F50;
    f = t[s[0]];
    sub_080A0774(s[0x5B], f);
    return g[0];
}

void sub_0807E8B0(s32 arg0) {
    if ((u8)arg0 != 0) {
        D_03004584[0] = 1;
        sub_08002BBC(D_03004F50[0x5B]);
        return;
    }
    D_03004830[0x2D] |= (u8)(0 - 0x80);
    D_0202DBD0[6] = 0x1038;
    D_0202DBD0[0xA] = 0x59BC;
}

void sub_0807ECE8(s32 arg0) {
    if ((u8)arg0 != 0) {
        D_03004584[0] = 1;
        sub_08002BBC(D_03004F50[0x5B]);
        return;
    }
    D_0202DBD0[6] = 0x1678;
    D_0202DBD0[0xA] = 0x676C;
    sub_080017EC(0x9D);
}

void sub_0807ED2C(s32 arg0) {
    if ((u8)arg0 != 0) {
        D_03002AB0[0xB8] &= 0xFB;
        D_03004584[0] = 1;
        sub_08002BBC(D_03004F50[0x5B]);
        return;
    }
    sub_080017EC(0xD7);
}

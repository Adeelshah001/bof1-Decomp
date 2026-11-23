typedef struct {
    u8 pad00[0xB8];
    u8 unkB8;
} State2AB0;

extern u8 D_03002AB0[];
extern u8 D_030033F0;
extern u16 D_03004114;

void sub_080380A4(void *);
u8 sub_08027F80(s16 *, s16 *, s16 *);
void sub_080051C8(s16, s16, s16);

s32 sub_08027990(void) {
    s16 a;
    s16 b;
    s16 c;

    if (sub_08027F80(&a, &b, &c) != 0) {
        sub_080051C8(a, b, c);
        return 1;
    }
    return 0;
}

s32 sub_08027A74(State2AB0 *arg0) {
    u8 flags;

    D_03004114 = 0;
    flags = D_030033F0;
    if (flags != 0 && (flags & 1)) {
        arg0->unkB8 |= 4;
        D_03004830[0x40] = 7;
        arg0->unkB8 |= 0x40;
    }
    return 0;
}

s32 sub_08027AB4(State2AB0 *arg0) {
    D_03004114 = 0;
    if (!(D_030033F0 & 2)) {
        arg0->unkB8 |= 4;
        D_03004830[0x40] = 1;
    }
    return 0;
}

void sub_08027B10(void *arg0, u8 arg1) {
    D_03004830[0x3F] = arg1;
    D_03004830[0x40] = 0;
    ((State2AB0 *)D_03002AB0)->unkB8 |= 4;
    sub_080380A4(arg0);
}

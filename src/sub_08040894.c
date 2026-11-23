extern u8 D_030009B5[];
extern u8 D_030033F0[];
extern u8 D_080A65E0[];
void sub_080A0A68(void *, void *, s32);
void sub_0803FC58(void *);
void sub_08040844(void *);

void sub_0804090C(u8 *arg0) {
    u8 sp[8];
    u32 idx;
    sub_080A0A68(sp, D_080A65E0, 8);
    idx = D_030009B5[0] + 4;
    if (D_030033F0[0] & sp[idx]) {
        arg0[0x26] = arg0[0x25];
        arg0[0x27] = 1;
        sub_0803FC58(arg0);
    }
}

void sub_0804095C(u8 *arg0) {
    if (arg0[0x27] == 1) {
        if (--*(u16 *)(arg0 + 0x1C) == 0) {
            sub_08040844(arg0);
            arg0[0x29] = 0;
            return;
        }
    }
    sub_0803FC58(arg0);
}

void sub_08040894(u8 *arg0) {
    u8 *p = arg0;
    arg0[0x26] = 0;
    if (D_030033F0[0] & arg0[0x28]) {
        arg0[0x26] = arg0[0x25];
    }
    p[0x27] = 1;
    sub_0803FC58(p);
}

void sub_08040990(u8 *arg0) {
    u8 t;
    t = arg0[0x27];
    if (t == 1) {
        if (--*(u16 *)(arg0 + 0x1C) == 0) {
            arg0[0x25] = t;
        }
    }
    sub_0803FC58(arg0);
}

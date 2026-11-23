extern u8 D_030023E0[];
extern void sub_0802F998(void *);
extern void sub_08037C98(void *, s32);

void sub_08031C9C(void *arg0) {
    u8 *p1;
    u8 v;
    u8 *p2;
    p1 = (u8 *)arg0 + 0x4D;
    v = 0;
    *p1 = v;
    p2 = (u8 *)arg0 + 0x50;
    *(u16 *)p2 = v;
}

void sub_08031CAC(void *arg0) {
    void *p;
    u16 unk16;
    int result;

    p = arg0;
    sub_08037C98(p, 0);
    unk16 = *(u16 *)((u8 *)p + 0x16);

    if (*(u16 *)((u8 *)p + 6) == unk16) {
        result = 0;
    } else {
        *(u32 *)((u8 *)p + 4) += *(u32 *)((u8 *)p + 0x10);
        if (*(u16 *)((u8 *)p + 6) == unk16) {
            result = 0;
        } else {
            result = 1;
        }
    }

    if (result == 0) {
        *(u8 *)((u8 *)p + 0x50) = 0x0C;
    }
}

void sub_08031C28(void *arg0) {
    u8 *p = (u8 *)arg0 + 0x54;
    u8 v = *p - 1;
    *p = v;
    if (v == 0) {
        *(u16 *)((u8 *)arg0 + 0x50) = 6;
    }
}

void sub_08031D1C(void *arg0) {
    u8 *p = (u8 *)arg0;
    p[0x4D] = 0;
    *(u16 *)(p + 0x50) = 0;
    if (*(u16 *)(&D_030023E0[0xA4]) == 0) {
        sub_0802F998(arg0);
    }
}

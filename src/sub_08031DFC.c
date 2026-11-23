extern u8 D_03003418[];
extern u8 D_03001860[];
extern void sub_0802C840(s32, s32, s32, s32);
extern void sub_08037C98(void *, s32);
extern s32 sub_08033420(void);

void sub_08031D44(void *arg0) {
    void *p = arg0;
    u8 *bp = (u8 *)p + 0x54;
    u8 v;

    sub_08037C98(p, 0);

    v = *bp - 1;
    *bp = v;
    if (v == 0) {
        sub_0802C840(0, 0x3D8, 0x13EC, 1);
        D_03003418[0] = 0x40;
        D_03001860[0] = 0x10;
    }
}

void sub_08031D88(void *arg0) {
    u8 *p = (u8 *)arg0 + 0x54;
    u8 v = *p - 1;
    *p = v;
    if (v == 0) {
        *(u8 *)((u8 *)arg0 + 0x50) = 0x0A;
        *(u16 *)((u8 *)arg0 + 0x10) = 0x8000;
        *(u16 *)((u8 *)arg0 + 0x12) = 0;
        *(u16 *)((u8 *)arg0 + 0x16) = *(u16 *)((u8 *)arg0 + 0x2C);
    }
}

void sub_08031DFC(void *arg0) {
    u32 r = sub_08033420();
    if ((r << 0x18) != 0) {
        u8 *p = (u8 *)arg0 + 0x54;
        p[0] = 0x5A;
        *(u8 *)(p - 4) = 6;
    }
}

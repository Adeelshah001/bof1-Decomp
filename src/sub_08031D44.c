extern u8 D_03003418[];
extern u8 D_03001860[];
extern void sub_0802C840(s32, s32, s32, s32);
extern void sub_08037C98(void *, s32);

void sub_08031D44(void *arg0) {
    u8 *bp;
    u32 v;

    sub_08037C98(arg0, 0);

    bp = (u8 *)arg0 + 0x54;
    v = *bp - 1;
    *bp = (u8)v;
    if (((u32)v << 24) == 0) {
        sub_0802C840(0, 0x3D8, 0x13EC, 1);
        D_03003418[0] = 0x40;
        D_03001860[0] = 0x10;
    }
}

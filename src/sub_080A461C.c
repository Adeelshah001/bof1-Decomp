s32 sub_080A44FC(s32 arg0);
s32 sub_080A44DC(s32 arg0);
s32 sub_080A45CC(s32 arg0);
s32 sub_080A45F8(s32 arg0, s32 arg1, s32 arg2);

extern u8 D_03001150[];

s32 sub_080A461C(s32 arg0, s32 arg1, s32 arg2) {
    s32 r;
    s32 idx;
    s32 diff;
    u8 *base;
    u8 *p;
    s32 off;

    r = sub_080A44FC(arg0);
    idx = sub_080A44DC(r);
    r = sub_080A45F8(arg0, arg1, arg2);
    if (r < 0)
        return sub_080A45CC(-1);
    diff = arg2 - r;
    if (idx != 0x14) {
        base = D_03001150;
        off = idx << 3;
        p = base + 4;
        *(u32 *)(p + off) += diff;
    }
    return diff;
}

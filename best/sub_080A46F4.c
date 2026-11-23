s32 sub_080A44DC(void);
s32 sub_080A44FC(s32);
s32 sub_080A45CC(s32);
void sub_080A45E0(void);
s32 sub_080A45F8(s32, s32, s32);
void sub_080A4664(void);

extern s32 D_03001150[];

s32 sub_080A461C(s32 arg0, s32 arg1, s32 arg2) {
    s32 r6;
    s32 r0;
    s32 diff;
    u8 *base;

    sub_080A44FC(arg0);
    r6 = sub_080A44DC();
    r0 = sub_080A45F8(arg0, arg1, arg2);
    if (r0 < 0) {
        return sub_080A45CC(-1);
    }
    diff = arg2 - r0;
    if (r6 != 0x14) {
        base = (u8 *)D_03001150;
        *(s32 *)(base + r6 * 8 + 4) += diff;
    }
    return diff;
}

void sub_080A46E8(void) {
    sub_080A4664();
    sub_080A45E0();
}

s32 sub_080A46F4(s32 arg0, s32 arg1, s32 arg2) {
    s32 fd = sub_080A44FC(arg0);
    return fd + arg1 + arg2;
}

s32 sub_080A4718(s32 arg0, s32 arg1, s32 arg2) {
    s32 r7;
    s32 r0;
    s32 diff;
    u8 *base;

    sub_080A44FC(arg0);
    r7 = sub_080A44DC();
    r0 = sub_080A46F4(arg0, arg1, arg2);
    if (r0 == -1 || r0 == arg2) {
        return sub_080A45CC(-1);
    }
    diff = arg2 - r0;
    if (r7 != 0x14) {
        base = (u8 *)D_03001150;
        *(s32 *)(base + r7 * 8 + 4) += diff;
    }
    return diff;
}

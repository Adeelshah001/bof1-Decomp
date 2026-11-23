
s32 sub_08047118(void *arg0) {
    s32 var_r1 = 0;
    if (*(u8 *)((u8 *)arg0 + 0x3B) == 3) {
        var_r1 = 1;
    }
    return var_r1;
}

s32 sub_08047174(void *arg0) {
    s32 var_r2 = 1;
    if ((*(u8 *)((u8 *)arg0 + 0x3B) != 3) && (*(u8 *)((u8 *)arg0 + 0x3E) == 2)) {
        var_r2 = 0;
    }
    return var_r2;
}

void sub_080470B4(void *arg0) {
    s32 temp_r2;
    s32 temp_r3;

    *(s32 *)((u8 *)arg0 + 0) = *(s32 *)((u8 *)arg0 + 0) + *(s32 *)((u8 *)arg0 + 0x10);
    temp_r2 = *(s32 *)((u8 *)arg0 + 0x14);
    temp_r3 = (0xFF000000 & temp_r2) | ((((u32) (temp_r2 & 0xFFFFFF) >> 8) - ((u32) (*(s32 *)((u8 *)arg0 + 0x48) & 0xFFFFFF) >> 8)) << 8);
    *(s32 *)((u8 *)arg0 + 0x14) = temp_r3;
    *(s32 *)((u8 *)arg0 + 4) = *(s32 *)((u8 *)arg0 + 4) - temp_r3;
}

extern u8 D_080FC760[];
extern u8 D_030023E0[];
extern u8 D_080FC740[];

s32 sub_080471BC(u8 arg0, s16 *arg1, s16 *arg2) {
    u32 temp_r3;
    u8 *p760 = D_080FC760;
    u8 *p740 = D_080FC740;
    u16 *p23e0 = (u16 *)D_030023E0;

    temp_r3 = p760[arg0];
    temp_r3 = (temp_r3 << 1);
    *arg1 = *(s16 *)(p740 + (temp_r3 * 2)) + p23e0[1];
    *arg2 = *(s16 *)(p740 + ((temp_r3 + 1) * 2)) + p23e0[3];
    return 0;
}

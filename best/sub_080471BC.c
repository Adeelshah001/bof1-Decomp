
s32 sub_08047118(void *arg0) {
    if (*(u8 *)((u8 *)arg0 + 0x3B) == 3) {
        return 1;
    }
    return 0;
}

s32 sub_08047174(void *arg0) {
    if ((*(u8 *)((u8 *)arg0 + 0x3B) != 3) && (*(u8 *)((u8 *)arg0 + 0x3E) == 2)) {
        return 0;
    }
    return 1;
}

extern u8 D_080FC760[];
extern u8 D_030023E0[];
extern u8 D_080FC740[];

s32 sub_080471BC(u8 arg0, s16 *arg1, s16 *arg2) {
    u8 *p760 = D_080FC760;
    u16 *p23e0 = (u16 *)D_030023E0;
    u16 *p740 = (u16 *)D_080FC740;
    u32 temp;

    temp = p760[arg0];
    temp = (u8)(temp << 1);
    *arg1 = p740[temp] + p23e0[1];
    *arg2 = p740[temp + 1] + p23e0[3];
    return 0;
}

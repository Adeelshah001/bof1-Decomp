void sub_08056690(s32 arg0, void *arg1, s32 arg2);
s32 sub_08055F0C(void);
s32 sub_0805600C(s32 arg0);
void sub_08056A64(void *arg0, s32 arg1);
extern volatile u8 D_03002AB0[];

void sub_08057228(s32 arg0, void *arg1) {
    u8 *p = (u8 *)arg1 + 0x101;
    u8 old = *p;
    *p = old + 1;
    if (*p == 0) {
        *p = old;
    }
    sub_08056690(arg0, arg1, 0x4F);
}

s32 sub_080570AC(s32 arg0, void *arg1) {
    if ((0x80 & *(u8 *)((u8 *)arg1 + 0xF1)) == 0) {
        return 0x8000000D;
    }
    sub_08056A64(arg1, 1);
    return sub_0805600C(arg0);
}

s32 sub_0805705C(s32 arg0) {
    s32 index;
    s32 count;

    if ((sub_08055F0C() << 0x18) != 0) {
        index = 0;
        count = 7;
        do {
            u8 *base = (u8 *)D_03002AB0;
            if ((*(u8 *)(base + index + 0xF1) & 0x80) == 0) {
                sub_08056A64(base + index, 0x96);
            }
            index += 0x124;
            count -= 1;
        } while (count >= 0);
        return sub_0805600C(arg0);
    }
    return 0x8000000D;
}

s32 sub_08057000(s32 arg0, void *arg1) {
    u32 var_r1 = 0;

    if (*(u8 *)((u8 *)arg1 + 0x3A) != 0) {
        s32 temp_r1 = *(u16 *)((u8 *)arg1 + 0xF6) ^ *(u16 *)((u8 *)arg1 + 0xF4);
        var_r1 = (u32)((0 - temp_r1) | temp_r1) >> 0x1F;
    }
    if (var_r1 != 0) {
        if (0x80 & *(u8 *)((u8 *)arg1 + 0xF1)) {
            return 0x80000044;
        }
        sub_08056A64(arg1, 0x64);
        return sub_0805600C(arg0);
    }
    return 0x8000000D;
}

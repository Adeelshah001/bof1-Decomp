void sub_08056690(s32 arg0, void *arg1, s32 arg2);
s32 sub_08055F0C(void);
s32 sub_0805600C(s32 arg0);
void sub_08056A64(void *arg0, s32 arg1);
extern volatile u8 D_03002AB0[];

s32 sub_08057250(s32 arg0) {
    s32 index;
    s32 count;

    if ((sub_08055F0C() << 0x18) != 0) {
        index = 0;
        count = 7;
        do {
            u8 *base = (u8 *)D_03002AB0;
            if ((*(u8 *)(base + index + 0xF1) & 0x80) == 0) {
                sub_08056A64(base + index, 0xFA);
            }
            index += 0x124;
            count -= 1;
        } while (count >= 0);
        return sub_0805600C(arg0);
    }
    return 0x8000000D;
}

s32 sub_080570DC(s32 arg0) {
    s32 index;
    s32 count;

    if ((sub_08055F0C() << 0x18) != 0) {
        index = 0;
        count = 7;
        do {
            u8 *base = (u8 *)D_03002AB0;
            if ((*(u8 *)(base + index + 0xF1) & 0x80) == 0) {
                sub_08056A64(base + index, 0x46);
            }
            index += 0x124;
            count -= 1;
        } while (count >= 0);
        return sub_0805600C(arg0);
    }
    return 0x8000000D;
}

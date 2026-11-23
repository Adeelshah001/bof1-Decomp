extern u32 D_080FBAC8[];
extern u8 sub_080A0774(u8 arg0, s32 arg1);

void sub_08044670(u8 arg0) {
    u8 idx = 0;

    do {
        idx = sub_080A0774(arg0, D_080FBAC8[idx]);
    } while (idx == 0xFF);
}

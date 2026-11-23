extern u8 D_03004830[];
extern u8 sub_08019758(s32 arg0, s32 arg1, s32 arg2);

void sub_0801EA38(void) {
    u8 result;
    result = sub_08019758(0xC, 0xB78, 0xFFFFDDFC);
    if (result == 0) {
        D_03004830[0x2A] = result;
        D_03004830[0x2B] = result;
    }
}

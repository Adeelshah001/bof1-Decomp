extern u8 D_03002AB0[];
void sub_08007504(void);
void sub_08007588(s32 arg0, s32 arg1);

u32 sub_08007468(u16 arg0, u16 arg1) {
    u32 result = 1;
    u16 *base = (u16 *)D_03002AB0;
    if (base[1] == arg0) {
        result = base[3] != arg1;
    }
    return result;
}

void sub_08008070(void) {
    u8 *state = (u8 *)D_03004830;
    s8 v = state[0x2C];
    if (v == 0) {
        sub_08007588(0x2C8, 0x21AC);
        sub_08007504();
        state[0x2B]++;
    }
}

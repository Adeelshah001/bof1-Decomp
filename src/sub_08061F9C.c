
extern u8 D_03004620[];
extern u32 D_08100F18[];

s32 sub_08061F9C(void) {
    return ((s32 (*)(void))D_08100F18[D_03004620[3] >> 1])();
}

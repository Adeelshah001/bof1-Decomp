extern u8 D_03004620[];
extern void *D_0814BF44[];

s32 sub_08068BE8(void) {
    return ((s32 (*)(void))D_0814BF44[D_03004620[3] >> 1])();
}

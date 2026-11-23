extern u8 D_0300169C;
extern u8 D_08100678[];

u8 *sub_0805C574(u16);

s32 sub_0805CBF8(u16 arg0, s32 arg1) {
    s32 ret;
    if (D_0300169C == 0) {
        u8 val = sub_0805C574(arg0)[0xC];
        val &= D_08100678[arg1];
        ret = 1;
        if (val != 0) {
            ret = 0;
        }
    } else {
        ret = 0;
    }
    return ret;
}

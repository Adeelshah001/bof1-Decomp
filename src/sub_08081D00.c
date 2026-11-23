s32 sub_080A07AC(s32, s32);

typedef struct {
    u8 pad00[0xF4];
    u16 unkF4;
    u16 unkF6;
} Obj81D00;

s32 sub_08081D00(Obj81D00 *arg0, s32 *arg1)
{
    s32 ret;
    s32 width;

    if ((u8 *)arg0 >= D_03003420 && (u8 *)arg0 < D_03003420 + 0xB68) {
        width = (*(u8 *)0x03004F50 != 0) ? 0x40 : 0x30;
        if (arg0->unkF4 != 0) {
            ret = sub_080A07AC(arg0->unkF6 * width, arg0->unkF4);
            if (ret > width) {
                ret = width;
            }
        } else {
            ret = width;
        }
    } else {
        width = 0x20;
        if (arg0->unkF4 != 0) {
            ret = sub_080A07AC(arg0->unkF6 * width, arg0->unkF4);
        } else {
            ret = 0x20;
        }
    }
    if (arg1 != NULL) {
        *arg1 = width;
    }
    return ret;
}

extern s32 sub_080A4718(s32, const void *, s32);
extern void sub_080A4A2C(void);
extern u8 D_030051C4[], D_080F3E88[];
extern u8 *D_03001140;

u8 *sub_080A489C(s32 increment)
{
    u8 *previous;
    if (D_03001140 == NULL)
        D_03001140 = D_030051C4;
    previous = D_03001140;
    if ((u32)(previous + increment) > (u32)__builtin_frame_address(0)) {
        sub_080A4718(1, D_080F3E88, 32);
        sub_080A4A2C();
    }
    D_03001140 += increment;
    return previous;
}


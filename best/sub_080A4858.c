extern s32 sub_080A484C(s32);
extern s32 sub_080A4718(s32, const void *, u32);
extern u8 D_030051C4[], D_080F3E88[];
extern u8 *D_03001140;
extern s32 D_030051C0;
extern void sub_080A4878(void);

s32 sub_080A49C8(s32 *error, s32 descriptor)
{
    s32 result;
    D_030051C0 = 0;
    result = sub_080A484C(descriptor);
    if (result == -1 && D_030051C0 != 0)
        *error = D_030051C0;
    return result;
}

void sub_080A4A2C(void)
{
}

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

void sub_080A4858(void)
{
    sub_080A4878();
}

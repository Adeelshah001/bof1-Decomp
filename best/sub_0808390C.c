extern u16 D_03004F18[];
s32 sub_08037980(u16, u16);
s32 sub_0803798C(u16, u8);

void sub_0808390C(void *actor, u16 rate)
{
    u16 *timer;
    u16 saved;
    u16 *backup;
    register u16 previous;
    u16 factor;
    u32 rateBits;
    u32 mode;
    u32 result;
    u16 duration;

    rateBits = (u32)rate << 16;
    timer = (u16 *)((u8 *)actor + 0xF4);
    saved = *timer;
    backup = D_03004F18;
    backup[1] = saved;
    previous = *timer;
    factor = (0xFF0000 & rateBits) >> 16;
    mode = ((u8 *)actor)[0xF0] & 0x28;
    if (mode) {
        result = (u16)sub_08037980(previous, factor);
        if (result > 998)
            result = 999;
    } else {
        result = sub_0803798C(previous, mode);
        if (result == 0)
            result = 1;
    }
    duration = result;
    timer = (u16 *)((u8 *)actor + 0xF4);
    *timer++ = duration;
    *timer = duration;
}

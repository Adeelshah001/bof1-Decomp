void sub_080830B0(u8 *, u16);
s32 sub_08083084(u8 *entity)
{
    u32 count = *(u16 *)(entity + 0x38);
    u16 previous = count;
    s32 result;
    if (count > 31) {
        result = 1;
    } else {
        u16 index;
        u32 scaled = count << 21;
        count = 0x4C000000U;
        scaled += count;
        index = scaled >> 16;
        *(u16 *)(entity + 0x38) = previous + 1;
        sub_080830B0(entity, index);
        result = 0;
    }
    return result;
}

void sub_08083034(u8 *);
s32 sub_08083130(u8 *entity)
{
    int finished;
    s32 count;
    u32 shifted;
    sub_08083034(entity);
    count = *(u16 *)(entity + 0x38) - 1;
    *(u16 *)(entity + 0x38) = count;
    shifted = (u32)count << 16;
    finished = (shifted == 0);
    if (finished)
        ++entity[0x50];
    return 0;
}

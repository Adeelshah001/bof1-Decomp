typedef u8 *(*CompareBytes)(u8 *, u8 *, s32);

u8 *sub_080A06A4(u8 *, u8 *, s32);
u8 *_call_via_r3(u8 *, u8 *, s32, CompareBytes);

u8 *sub_080A06D4(u8 *first, u8 *second, s32 length)
{
    u16 code[0x60];
    const u16 *src;
    u16 *dst;
    u32 scaledCount;
    u32 count;
    u32 start;
    u16 control;

    control = *(vu16 *)0x04000204;
    control = 0xFFFC & control;
    control |= 3;
    *(vu16 *)0x04000204 = control;
    start = (u32)sub_080A06A4;
    start ^= 1;
    src = (const u16 *)start;
    dst = code;
    scaledCount = ((u32)sub_080A06D4 - (u32)sub_080A06A4) << 15;
    goto test;
copy:
    *dst++ = *src++;
    scaledCount = (count - 1) << 16;
test:
    count = scaledCount >> 16;
    if (count != 0)
        goto copy;
    return _call_via_r3(first, second, length, (CompareBytes)((u32)code + 1));
}

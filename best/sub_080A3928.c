void *sub_080A3928(const void *src, s32 value, u32 count)
{
    u32 needle = value;
    const u8 *bytes = src;
    register const u32 *words;
    u32 repeated, i, j, diff, oldCount;
    const u32 ones = 0xFEFEFEFF;
    const u32 highBits = 0x80808080;

    needle &= 0xFF;
    if (count >= 4 && !((u32)bytes & 3)) {
        words = (const u32 *)bytes;
        repeated = 0;
        for (i = 0; i < 4; i++)
            repeated = (repeated << 8) + needle;
        while (count >= 4) {
            diff = *words ^ repeated;
            if (((diff + ones) & ~diff & highBits) != 0) {
                bytes = (const u8 *)words;
                j = 0;
                do {
                    if (*bytes == needle)
                        goto found;
                    bytes++;
                    j++;
                } while (j < 4);
            }
            count -= 4;
            words++;
        }
        bytes = (const u8 *)words;
    }
    goto check;
next:
    if (*bytes == needle) {
    found:
        return (void *)bytes;
    }
    bytes++;
check:
    oldCount = count;
    count--;
    if (oldCount != 0)
        goto next;
    return NULL;
}

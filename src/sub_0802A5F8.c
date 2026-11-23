/* identical to sub_0802A5C0 (matched), with its names changed by decompdecomp */
extern const u8 D_081A0C08[][1];
void sub_08029CD4(u16, u16, const u8 *);
void sub_0802A558(u16, u16, const u8 *);

void sub_0802A5F8(u8 index, u16 x, u16 y)
{
    u32 offset = D_081A0C08[index + 4][0] | (D_081A0C08[index + 5][0] << 8);
    sub_0802A558(x, y, D_081A0C08[offset]);
}

void sub_0802A598(u16 x, u16 y, const u8 *data)
{
    sub_08029CD4((x & 0xFFF0) - 16, (y & 0xFFF0) - 16, data);
}

void sub_0802A578(u16 x, u16 y, const u8 *data)
{
    u32 mask = 0xFFF0;
    y = (y & mask) - 16;
    sub_08029CD4(mask & x, y, data);
}

void sub_0802A558(u16 x, u16 y, const u8 *data)
{
    u32 mask = 0xFFF0;
    y = (y & mask) - 8;
    sub_08029CD4(mask & x, y, data);
}

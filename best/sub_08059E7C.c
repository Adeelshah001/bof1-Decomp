extern u8 D_0300169C;
extern const u8 *const D_0814D388[], *const D_0814F530[];
extern const u8 *const D_0814F9D0[], *const D_0814FF50[];

u32 sub_08059E7C(u16 id, u8 *dest)
{
    u8 *out = dest;
    u32 value = id;
    u32 index;
    if (D_0300169C != 0)
        dest = (u8 *)D_0814D388;
    else {
        switch (0xF000 & value) {
        default:
            dest = (u8 *)D_0814FF50;
            break;
        case 0:
            dest = (u8 *)D_0814F530;
            break;
        case 0x1000:
            dest = (u8 *)D_0814F9D0;
            break;
        }
    }
    index = 0xFF;
    index &= value;
    dest = (u8 *)((const u8 *const *)dest)[index];
    value = 0;
    while ((*out++ = *dest++) != 0)
        value = (u8)(value + 1);
    return value;
}

extern const u8 D_08152004[];

u32 sub_080A098C(u32 a, u32 b);
u32 sub_080A0914(u32 a, u32 b);

u16 sub_08082A18(u8 *dst, u16 val) {
    u8 buf[8];
    s32 i = 0;

    do {
        u8 *p = buf + i;
        *p = D_08152004[(u16)sub_080A098C(val, 10)];
        i++;
        val = sub_080A0914(val, 10);
    } while (val != 0);

    val = i;
    while (i != 0) {
        i--;
        *dst++ = buf[i];
    }
    return val;
}

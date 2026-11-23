void sub_0803EE38(u8 *arg0) {
    u8 *p = arg0 + 0x4C;
    s32 zero8 = 0;
    s32 zero32 = 0;
    *(u16 *)p = zero32;
    p += 4;
    *(u16 *)p = zero32;
    *(u16 *)(arg0 + 0x22) = zero32;
    p -= 0x16;
    *(u8 *)p = zero8;
    p += 6;
    *(u8 *)p = zero8;
    *(u32 *)(arg0 + 0x64) = zero32;
}

void sub_0803EE54(u8 *arg0) {
    u8 *p = arg0 + 0x4C;
    s32 zero8 = 0;
    s32 zero32 = 0;
    *(u16 *)p = zero32;
    p += 4;
    *(u16 *)p = zero32;
    *(u16 *)(arg0 + 0x22) = zero32;
    p -= 0x16;
    *(u8 *)p = zero8;
    *(u32 *)(arg0 + 0x78) = zero32;
}

extern u8 D_0202DBD0[];
void sub_0803F7E8(u8 *arg0, u8 *arg1, u8 arg2);

void sub_0803EEA0(u16 arg0) {
    s32 zero = 0;
    u8 *flag = (u8 *)0x03004E20;
    u8 *q;
    u16 v;
    u8 *table;
    u32 idx;
    *flag = zero;
    q = D_0202DBD0;
    *(u16 *)(q + 0x4BA) = zero;
    table = (u8 *)0x08221D40;
    idx = arg0 * 2;
    v = table[idx] | (table[idx + 1] << 8);
    if (v != 0) {
        sub_0803F7E8(table + (v & 0x7FFF), (u8 *)0x080FB990, 0xE0);
    }
    *flag = 0;
}

u8 *sub_0803EDDC(u16 arg0) {
    u8 *result = NULL;
    u8 start;
    u8 i;
    u8 *base;
    start = (arg0 == 1) ? 8 : 0;
    i = start;
    if (i <= 9) {
        u8 *p;
        base = (u8 *)0x03002510;
        p = base + i * 0x90;
        if (*(u8 *)(p + 0x3A) == 0) {
            result = p;
        } else {
            while (++i <= 9) {
                p = base + i * 0x90;
                if (*(u8 *)(p + 0x3A) == 0) {
                    result = p;
                    break;
                }
            }
        }
    }
    return result;
}

void sub_0803EE54(u8 *arg0) {
    *(u16 *)(arg0 + 0x4C) = 0;
    *(u16 *)(arg0 + 0x50) = 0;
    *(u16 *)(arg0 + 0x22) = 0;
    *(u8 *)(arg0 + 0x3A) = 0;
    *(u32 *)(arg0 + 0x78) = 0;
}

void sub_0803EE38(u8 *arg0) {
    *(u16 *)(arg0 + 0x4C) = 0;
    *(u16 *)(arg0 + 0x50) = 0;
    *(u16 *)(arg0 + 0x22) = 0;
    *(u8 *)(arg0 + 0x3A) = 0;
    *(u8 *)(arg0 + 0x40) = 0;
    *(u32 *)(arg0 + 0x64) = 0;
}

void sub_0803F7E8(u8 *arg0, u8 *arg1, u8 arg2);

void sub_0803EEA0(u16 arg0) {
    u8 *flag = (u8 *)0x03004E20;
    u8 *q;
    u16 v;
    u8 *table;
    *flag = 0;
    q = (u8 *)0x0202DBD0;
    *(u16 *)(q + 0x4BA) = 0;
    table = (u8 *)0x08221D40;
    v = table[arg0 * 2] | (table[arg0 * 2 + 1] << 8);
    if (v != 0) {
        sub_0803F7E8(table + (v & 0x7FFF), (u8 *)0x080FB990, 0xE0);
    }
    *flag = 0;
}

u8 *sub_0803EDDC(u16 arg0) {
    u8 *result = NULL;
    u8 i = 0;
    u8 *base;
    if (arg0 == 1) {
        i = 8;
    }
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

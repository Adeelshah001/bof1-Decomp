u8 sub_0809EC40(u32 unused, u8 *ctx)
{
    u8 *p = *(u8 **)(ctx + 0x40);
    *(u8 **)(ctx + 0x40) = p + 1;
    return *p;
}

void sub_0809EC24(u32 unused, u8 *ctx)
{
    ctx[0x16] = 0;
    ctx[0x1A] = 0;
    if (ctx[0x18] == 0) {
        ctx[0] |= 0x0C;
    } else {
        ctx[0] |= 0x03;
    }
}

void sub_0809EC4C(u32 unused, u8 *ctx)
{
    u8 val = sub_0809EC40(unused, ctx);
    ctx[0x19] = val;
    if (val == 0) {
        sub_0809EC24(unused, ctx);
    }
}

void sub_0809EC60(u32 unused, u8 *ctx)
{
    u8 val = sub_0809EC40(unused, ctx);
    ctx[0x17] = val;
    if (val == 0) {
        sub_0809EC24(unused, ctx);
    }
}

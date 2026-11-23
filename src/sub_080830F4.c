extern u8 D_03001100;
extern u16 D_0201B7C0[];

void sub_080830B0(u8 *entity, u16 index)
{
    u8 *count = &D_03001100;
    u16 value = *count;
    u16 *base = D_0201B7C0;
    u32 offset = (u32)index * 2 - 0x9800;
    u16 *dst = (u16 *)(offset + (u32)base);
    u16 remaining = 0x20;
    u16 fill = 0x40;
    do {
        *dst++ = fill;
        value += 2;
    } while (--remaining != 0);
    *count = value + 5;
}

s32 sub_08083084(u8 *entity)
{
    u16 count = *(u16 *)(entity + 0x38);
    if (count > 31) {
        return 1;
    } else {
        u16 index = ((u32)count << 21) + 0x4C000000U >> 16;
        *(u16 *)(entity + 0x38) = count + 1;
        sub_080830B0(entity, index);
        return 0;
    }
}

extern u16 D_03004EE4, D_03004ECC;
void sub_08073790(void);
void sub_08073944(void);
void sub_08082BC8(u8 *);
s32 sub_08083124(u8 *);
void sub_08083034(u8 *);

s32 sub_080830F4(u8 *entity)
{
    u16 *first = &D_03004EE4;
    u16 zero = 0;
    *first = zero;
    D_03004ECC = zero;
    sub_08073790();
    sub_08073944();
    sub_08082BC8(entity);
    return sub_08083124(entity);
}

s32 sub_08083130(u8 *entity)
{
    int finished;
    s32 count;
    sub_08083034(entity);
    count = *(u16 *)(entity + 0x38) - 1;
    *(u16 *)(entity + 0x38) = count;
    finished = (u16)count == 0;
    if (finished)
        ++entity[0x50];
    return 0;
}

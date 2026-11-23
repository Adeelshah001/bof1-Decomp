extern u8 D_03001100;
extern u16 D_0201B7C0[];

void sub_080830B0(u8 *entity, u16 index)
{
    u16 value = D_03001100;
    u16 *dst = D_0201B7C0;
    u32 offset = (u32)index * 2 - 0x9800;
    u8 *count;
    u16 fill;
    dst = (u16 *)(offset + (u32)dst);
    index = 0x20;
    count = &D_03001100;
    fill = 0x40;
    do {
        *dst++ = fill;
        value += 2;
    } while (--index != 0);
    *count = value + 5;
}

s32 sub_08083084(u8 *entity)
{
    u16 count = *(u16 *)(entity + 0x38);
    u16 previous = count;
    s32 result;
    if (count > 31) {
        result = 1;
    } else {
        u16 index = (((u32)count << 21) + 0x4C000000U) >> 16;
        *(u16 *)(entity + 0x38) = previous + 1;
        sub_080830B0(entity, index);
        result = 0;
    }
    return result;
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
    u32 shifted;
    sub_08083034(entity);
    count = *(u16 *)(entity + 0x38) - 1;
    *(u16 *)(entity + 0x38) = count;
    shifted = (u32)count << 16;
    finished = 0;
    if (shifted == 0)
        finished = 1;
    if (finished)
        ++entity[0x50];
    return 0;
}

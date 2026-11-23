extern u16 D_020211A2[], D_020213A2[];
extern u16 D_02020FC2[], D_020211C2[];
extern u8 D_03004F50[];
extern u8 sub_0807CF38(Entity *, void *, u8);

void sub_0807CB08(void)
{
    u16 white = 0x7FFF;
    u16 *second = D_020213A2;
    u16 *first = D_020211A2;
    s32 remaining = 14;
    do {
        *first = white;
        *second = white;
        second++;
        first++;
    } while (--remaining >= 0);
}

void sub_0807CB50(Entity *entity)
{
    u8 *palette = &entity->unk41;
    u16 src = ((u32)(*palette << 20) + 0x01000000) >> 16;
    u16 dst;
    s32 remaining;
    u16 *first;
    u16 *second;
    *palette = 14;
    dst = 0x1E0;
    remaining = 14;
    first = D_02020FC2;
    second = D_020211C2;
    do {
        u16 color = *(u16 *)(src + (u32)first);
        *(u16 *)(dst + (u32)first) = color;
        *(u16 *)(dst + (u32)second) = color;
        src += 2;
        dst += 2;
    } while (--remaining >= 0);
}

u8 sub_0807CAB8(Entity *entity, void *out)
{
    u8 *state = D_03004F50;
    u8 result;
    if (state[0x5D] == 0) {
        result = 0;
    } else {
        u8 remaining = --state[0x4A];
        if (remaining != 0)
            result = sub_0807CF38(entity, out, entity->unk54 - remaining);
        else
            result = 3;
    }
    return result;
}

s32 sub_0807CA70(Entity *entity)
{
    u32 resultData;
    u8 *state = D_03004F50;
    u8 remaining = state[0x4A];
    do {
        if (--remaining == 0)
            return 1;
    } while (sub_0807CF38(entity, &resultData, entity->unk54 - remaining) == 2);
    return 0;
}

typedef struct {
    u8 pad00[0x12];
    volatile u8 timer : 8;
    u8 pad13[0x41];
    u8 *target;
} PaletteEffect;

u32 sub_080807C8(PaletteEffect *effect, u8 *target);

u32 sub_08080764(PaletteEffect *effect);

u8 sub_08080784(PaletteEffect *effect)
{
    u32 result;
    if (!((--effect->timer) & 0x80)) {
        if (effect->timer == 6)
            result = sub_08080764(effect);
        else
            return 3;
    } else {
        u8 *target = effect->target;
        u8 palette;
        effect->timer = 8;
        palette = 14;
        target[0x41] = palette;
        result = sub_080807C8(effect, target);
    }
    return (u8)result;
}

extern u8 D_03002AB0[];

static inline u8 peekEntityByte(u8 *address)
{
    return *address;
}

s32 sub_08080710(u8 *state, u8 *volatile *cursor, u8 **out)
{
    u8 *next = D_03002AB0;
    u8 *entity;
again:
        *cursor = next;
        entity = *cursor;
        if (!(peekEntityByte(entity + 0xF0) & 0x50) && !(peekEntityByte(entity + 0xF1) & 0x80)) {
            *out = entity;
            return 0;
        }
        if (--state[8] != 0) {
            next = *cursor + 0x124;
            goto again;
        }
    return 1;
}

static inline u8 readEntityByte(u8 *address)
{
    return *address;
}

s32 sub_0808062C(u8 *state, u8 **cursor)
{
    long remaining;
    u8 *previous;
next:
    previous = *cursor;
    *cursor = previous + 0x124;
    if (previous[0x15E] && !(readEntityByte(previous + 0x214) & 0x50) && !(readEntityByte(previous + 0x215) & 0x80))
        return 0;
    state[9]--;
    remaining = 1;
    remaining = state[8] - remaining;
    state[8] = remaining;
    if (remaining << 24)
        goto next;
    return 1;
}

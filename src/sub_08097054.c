extern u8 D_03003410;
extern u32 D_03002500;
extern u32 D_03003FB0;
extern u32 D_030040F0;

void sub_08097054(u32 packed)
{
    u32 high = (u32)packed << 16;
    u32 *third, *second, *first;
    D_03003410 = packed;
    high >>= 24;
    third = &D_030040F0;
    second = &D_03003FB0;
    first = &D_03002500;
    *first = high;
    *second = high;
    *third = high;
}

extern const u8 D_082D2708[][1];
void sub_08096F88(void *entity);
void sub_08097018(void *entity, u8 x, u8 y);

void sub_08096F50(void *entity, u8 delta)
{
    u32 index = (delta + (D_082D2708[6][0] | (D_082D2708[7][0] << 8))) << 20;
    u8 x, y;
    index >>= 20;
    x = D_082D2708[index][0];
    y = D_082D2708[index + 1][0];
    sub_08097018(entity, x, y);
    sub_08096F88(entity);
}

u32 sub_08003104(void);
s32 sub_080984C8(u8 *entity);
s32 sub_08098524(u8 *entity);

void sub_08097110(void *unused, u8 *entity)
{
    if (sub_080984C8(entity) == 0 && sub_08098524(entity) == 0) {
        u8 flags = entity[0xDC];
        u32 state = 0xC0;
        state &= flags;
        if (state == 0) {
            u32 mode, value, bits;
            flags |= 0x80;
            entity[0xDC] = flags;
            mode = entity[0xE0];
            if (mode == 6 || mode == 8)
                entity[0xE0] = state;
            value = sub_08003104() << 24;
            bits = 0x03000000;
            bits &= value;
            bits += 0x01000000;
            value = bits >> 23;
            entity[0xDF] |= value;
        }
    }
}

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
            u32 value;
            u8 *mode;
            flags |= 0x80;
            entity[0xDC] = flags;
            mode = entity + 0xE0;
            flags = *mode;
            if (flags == 6 || flags == 8)
                *mode = state;
            value = sub_08003104();
            value <<= 24;
            state = 0x03000000;
            state &= value;
            state += 0x01000000;
            flags = state >> 23;
            entity[0xDF] |= flags;
        }
    }
}

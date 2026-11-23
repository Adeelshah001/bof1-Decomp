void sub_080379D4(u8);
void sub_08092398(u8 *);
void sub_08095C70(u8 *);
void sub_08097040(u8 *, u8);
void sub_08097054(u16);
extern u8 D_03004F30[], D_0300178C;

void sub_08092330(u8 *entity) {
    u8 *state = entity + 0x4C;
    u8 *timer;
    u32 mode;

    if (*state != 0) {
        sub_08092398(entity);
        return;
    }
    timer = entity + 0x54;
    *timer++ = 0x4E;
    *timer = 3;
    mode = D_03004F30[9];
    mode &= 0xE0;
    if (mode == 0) {
        D_0300178C = mode;
        sub_08097054(0x1801);
    }
    sub_080379D4(0x25);
    sub_08097040(entity, 0x48);
    (*state)++;
    sub_08095C70(entity);
}

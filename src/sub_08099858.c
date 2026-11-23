void sub_0809992C(u8 *);
void sub_0809993C(u8 *);

void sub_08099900(u8 *entity)
{
    u32 mode = *(u16 *)(entity + 0x48) >> 8;
    if (mode == 1) {
        sub_0809992C(entity);
    } else {
        u8 *data = *(u8 **)(entity + 0x78);
        u8 value = data[6];
        entity[0x2C] = value;
        sub_0809993C(entity);
    }
}

void sub_08038178(u8 *, u32);
void sub_08038264(u8 *);
void sub_0809AF3C(u8 *);

void sub_080998B0(u8 *entity)
{
    u8 *parent = *(u8 **)(entity + 0x6C);
    if (parent[0x70] != 0) {
        u8 *timer = entity + 0x54;
        if (--*timer == 0) {
            u16 angle = 0x160;
            *(u16 *)(entity + 0x38) = angle;
            ++*timer;
            sub_08038178(entity, *(u32 *)(entity + 0x78));
            sub_08038264(entity);
        }
    } else {
        ++entity[0x4C];
        sub_0809AF3C(entity);
    }
}

extern const char D_080A7C20[], D_080A7C18[];
void sub_080352D0(const char *, const char *, s32, ...);
void sub_080999A8(u8 *);
void sub_080999D4(u8 *);

void sub_0809995C(u8 *entity)
{
    switch (entity[0x4C]) {
    case 0:
        sub_080999A8(entity);
        break;
    case 1:
        break;
    case 2:
        sub_080999D4(entity);
        break;
    default:
        sub_080352D0(D_080A7C20, D_080A7C18, 0x18D, entity[0x4C]);
        break;
    }
}

void sub_08037FC4(u8 *, s32);
void sub_0809AE08(u8 *, u8);

void sub_08099858(u8 *entity)
{
    u32 coord;
    u8 i;
    s32 next;
    u16 angle;
    u8 *state;
    sub_08037FC4(entity, entity[0x7C]);
    coord = 0xF50;
    *(u16 *)(entity + 2) = coord;
    *(u32 *)(entity + 0x44) = coord << 8;
    coord = 0x2F20;
    *(u16 *)(entity + 6) = coord;
    *(u32 *)(entity + 0x48) = coord << 8;
    angle = 0x160;
    *(u16 *)(entity + 0x38) = angle;
    i = 5;
    do {
        sub_0809AE08(entity, i);
        next = i - 1;
        i = next;
    } while ((next & 0x80) == 0);
    state = entity + 0x70;
    *state = 0xFF;
    state -= 0x24;
    *state = 2;
}

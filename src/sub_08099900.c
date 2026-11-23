void sub_0809992C(u8 *);
void sub_0809993C(u8 *);

void sub_08099900(u8 *entity)
{
    u16 flags = *(u16 *)(entity + 0x48);
    u32 value = flags >> 8;
    if (value == 1) {
        sub_0809992C(entity);
    } else {
        u8 *data = *(u8 **)(entity + 0x78);
        value = data[6];
        entity[0x2C] = value;
        sub_0809993C(entity);
    }
}

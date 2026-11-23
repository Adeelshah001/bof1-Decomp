extern u16 D_03001864;
void sub_0803EE6C(void *);

void sub_0804F30C(Entity *actor)
{
    u32 raw = *(u16 *)((u8 *)actor + 0x54);

    raw--;
    *(u16 *)((u8 *)actor + 0x54) = raw;
    if ((u16)raw != 0) {
        if ((u16)raw > 0x5F) {
            if (!(raw & 1)) {
                D_03001864 &= 0xEF;
            } else {
                D_03001864 |= 0x10;
            }
        } else if ((u16)raw > 0x1F) {
            if (!(raw & 3)) {
                D_03001864 &= 0xEF;
            } else {
                D_03001864 |= 0x10;
            }
        } else {
            if (!(raw & 7)) {
                D_03001864 &= 0xEF;
            } else {
                D_03001864 |= 0x10;
            }
        }
    } else {
        D_03001864 = 0x17;
        sub_0803EE6C(actor);
    }
}

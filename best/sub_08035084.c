extern u8 D_03002AB0[];
extern u8 D_03002BD4[];
extern u8 D_03003F9C[];
extern u8 D_03004830[];

void *Entity_FindFreeSlot(void);

void sub_08035100(u8 *actor)
{
    D_03002AB0[0xB8] ^= 0x10;
    *(u32 *)(actor + 0x88) += 2;
}

void sub_0803511C(u8 *actor)
{
    u8 *obj = Entity_FindFreeSlot();

    if (obj != NULL) {
        obj[0x3A] = 1;
        obj[0x3C] = 0x14;
        obj[0x3B] = 0x12;
        *(u32 *)(obj + 0x14) = 0;
        *(u16 *)(obj + 0x14) = 0x100;
        D_03003F9C[0] = 0x80;
        *(u32 *)(actor + 0x88) += 2;
    }
}

void sub_080350AC(u8 *actor)
{
    u8 *dst = D_03002BD4;
    u8 *src = dst - 0x124;

    *(u16 *)(dst + 2) = *(u16 *)(src + 2);
    *(u16 *)(dst + 6) = *(u16 *)(src + 6);
    *(u32 *)(actor + 0x88) += 2;
}

void sub_08035084(u8 *actor)
{
    if ((s8)D_03004830[0x2C] == 0) {
        *(u32 *)(actor + 0x88) += 5;
    } else {
        *(u32 *)(actor + 0x88) += 2;
    }
}

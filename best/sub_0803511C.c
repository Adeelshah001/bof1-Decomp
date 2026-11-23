extern u8 D_03003F9C[];

void *Entity_FindFreeSlot(void);

void sub_0803511C(u8 *actor)
{
    u8 *obj;
    u8 *p;
    u8 *q;
    u32 zero;
    u8 v;

    obj = Entity_FindFreeSlot();
    if (obj != NULL) {
        p = obj + 0x3A;
        zero = 0;
        *p = 1;
        obj[0x3C] = 0x14;
        q = obj + 0x3B;
        v = 0x12;
        *q = v;
        *(u32 *)(obj + 0x14) = zero;
        *(u16 *)(obj + 0x14) = v + 0xEE;
        D_03003F9C[0] = 0x80;
        *(u32 *)(actor + 0x88) += 2;
    }
}

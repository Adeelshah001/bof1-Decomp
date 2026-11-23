extern u8 D_03003F98;
void *Entity_FindFreeSlot(void);

void sub_08025ECC(u8 *arg0) {
    u8 *script = *(u8 **)(arg0 + 0x68);
    u32 mask = script[2];
    D_03003F98 |= mask;
    *(u8 **)(arg0 + 0x68) = script + 3;
}
void sub_08025EE8(u8 *arg0) {
    u8 *object = Entity_FindFreeSlot();
    if (object != NULL) {
        object[0x3A] = 1;
        object[0x3C] = 0x13;
        object[0x3B] = (*(u8 **)(arg0 + 0x68))[2];
        object[0x80] = (*(u8 **)(arg0 + 0x68))[3];
        object[0x41] = (*(u8 **)(arg0 + 0x68))[4];
        *(u8 **)(arg0 + 0x68) += 5;
    }
}
void sub_08025F2C(u8 *arg0) {
    u8 value;
    if (arg0[0x40] != 0)
        value = 0;
    else
        value = 1;
    arg0[0x40] = value;
    *(u32 *)(arg0 + 0x68) += 2;
}
void sub_08025F48(u8 *arg0) {
    u8 *object = Entity_FindFreeSlot();
    if (object != NULL) {
        object[0x3A] = 1;
        object[0x3C] = 0x14;
        object[0x3B] = 6;
        object[0x54] = (*(u8 **)(arg0 + 0x68))[2];
        object[0x61] = (*(u8 **)(arg0 + 0x68))[3];
        *(u8 **)(object + 0xD4) = arg0;
        *(u8 **)(arg0 + 0x68) += 4;
    }
}

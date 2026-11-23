u8 *Entity_FindFreeSlot(void);

void sub_0804D040(u8 *arg0) {
    if (*(u16 *)(D_03004830 + 0x2A) == 0x20E) {
        *(u16 *)(arg0 + 0xA6) += 2;
    }
}

void sub_0804D10C(u8 *arg0) {
    if (*(u16 *)(D_03004830 + 0x2A) == 0x150E) {
        *(u16 *)(arg0 + 0xA6) += 2;
    }
}

void sub_0804D12C(u8 *arg0) {
    if (*(u16 *)(D_03004830 + 0x2A) == 0x270E) {
        *(u16 *)(arg0 + 0xA6) += 2;
    }
}

void sub_0804D1F8(void *arg0, u8 arg1) {
    u8 *entity = Entity_FindFreeSlot();
    if (entity != NULL) {
        u8 *kind;
        entity[0x3B] = arg1;
        kind = entity + 0x3C;
        *kind = 0x0C;
        kind -= 2;
        *kind = 1;
    }
}

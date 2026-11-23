extern u8 D_03002AB0[];
void *Entity_FindFreeSlot(void);

void sub_08034B24(u8 *arg0) {
    if (*(u16 *)(arg0 + 2) == 0x338) {
        *(u32 *)(arg0 + 0x88) += 2;
    } else {
        *(u32 *)(arg0 + 0x88) += 4;
    }
}

void sub_08034AAC(u8 *arg0) {
    u8 *object = Entity_FindFreeSlot();
    if (object != NULL) {
        object[0x3B] = 0x18;
        object[0x3C] = 0xC;
        object[0x3A] = 1;
        *(u16 *)(object + 2) = *(u16 *)(arg0 + 2);
        *(u16 *)(object + 6) = *(u16 *)(arg0 + 6);
    }
    *(u32 *)(arg0 + 0x88) += 2;
}

void sub_080348D0(u8 *arg0) {
    u8 *state = D_03002AB0;
    if (*(s32 *)(state + 0x88) == 0) {
        *(s32 *)(arg0 + 0x88) = 0;
        arg0[0x4C] = 2;
        arg0[0x50] = 0;
        arg0[0x4D] = 0;
    }
}

void sub_08034888(u8 *arg0) {
    if (*(u16 *)(arg0 + 2) == 0xB78 && *(u16 *)(arg0 + 6) == 0x47FC) {
        *(u32 *)(arg0 + 0x88) += 3;
    } else {
        *(u32 *)(arg0 + 0x88) += 2;
    }
}

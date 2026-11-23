extern u8 D_03004830[];
extern u8 D_03002CF8[];
void sub_08035290(s32, s32);
void *Entity_FindFreeSlot(void);

void sub_08034994(u8 *arg0) {
    arg0[0xB8] = (u8)(8 | arg0[0xB8]);
    *(s32 *)(arg0 + 0x88) += 2;
}

void sub_08034958(u8 *arg0) {
    u8 *obj = Entity_FindFreeSlot();
    if (obj != NULL) {
        obj[0x3C] = 6;
        obj[0x3A] = 1;
        obj[0x37] = 8;
        *(u16 *)(obj + 2) = *(u16 *)(arg0 + 2);
        *(u16 *)(obj + 6) = *(u16 *)(arg0 + 6);
    }
    *(s32 *)(arg0 + 0x88) += 2;
}

void sub_08034940(u8 *arg0) {
    u8 *base = D_03004830;
    base[0x2B] += 1;
    *(s32 *)(arg0 + 0x88) += 2;
}

void sub_08034908(void) {
    sub_08035290(0, 0x80E5);
    *(s32 *)(D_03002CF8 + 0x88) += 1;
}

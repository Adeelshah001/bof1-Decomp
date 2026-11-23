extern u8 *D_03004154;

void *Entity_FindFreeSlot(void);

void sub_0800BDCC(void) {
    u8 *state = D_03004830;
    u8 *timer = state + 0x2C;
    if (--(*timer) == 0) {
        u8 *slot;
        *timer = 0x28;
        slot = Entity_FindFreeSlot();
        D_03004154 = slot;
        if (slot != NULL) {
            slot[0x3A] = 1;
            D_03004154[0x3C] = 0x1C;
        }
    }
}

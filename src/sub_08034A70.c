extern u8 D_03002BD4[];
void sub_080379D4(s32 arg0);
void sub_0802C840(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
void sub_08033AF4(s32 arg0);
void sub_080017EC(s32 arg0);
void *Entity_FindFreeSlot(void);

void sub_08034A10(u8 *arg0) {
    u8 *state = D_03002BD4;
    *(u32 *)(state + 0x88) += 1;
    *(u32 *)(arg0 + 0x88) += 2;
}
void sub_080349E4(void) {
    sub_080379D4(0xD);
    sub_0802C840(0x7F, 0x1198, 0x4B8C, 2);
    sub_08033AF4(6);
    sub_080017EC(0x39);
}
void sub_080349C4(u8 *arg0) {
    u8 *state = D_03004830;
    if (*(u16 *)(state + 0x2A) == 0x70C)
        *(u32 *)(arg0 + 0x88) += 2;
}
void sub_08034A70(u8 *arg0) {
    u8 *object = Entity_FindFreeSlot();
    if (object != NULL) {
        object[0x3B] = 0x17;
        object[0x3C] = 0xC;
        object[0x3A] = 1;
        *(u16 *)(object + 2) = *(u16 *)(arg0 + 2);
        *(u16 *)(object + 6) = *(u16 *)(arg0 + 6);
    }
    *(u32 *)(arg0 + 0x88) += 2;
}

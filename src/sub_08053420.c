extern void (*D_080FDFE8[])(u8 *);
extern u16 D_030016C0;
extern u8 D_02019FC0[];
extern volatile u32 D_040000D4[];

void sub_08053420(u8 *object) {
    D_080FDFE8[object[0x3B]](object);
}

void sub_080533DC(u8 *object) {
    volatile u32 zero;
    *(u16 *)(object + 2) = 3;
    *(u16 *)(object + 6) = 0;
    *(u16 *)(object + 0x12) = 0;
    *(u16 *)(object + 0x16) = 4;
    D_030016C0 = 0;
    *(u16 *)(object + 0x54) = 0x2003;
    zero = 0;
    D_040000D4[0] = (u32)&zero;
    D_040000D4[1] = (u32)D_02019FC0;
    D_040000D4[2] = 0x85000800;
    (void)D_040000D4[2];
}

s32 sub_080533A8(u8 *object, u16 *out) {
    u8 *state = D_03004830;
    switch (state[0x2E]) {
    case 0x5A:
        *out = 12;
        return 1;
    case 0x57:
        *(u16 *)(object + 2) += 0xFFFF;
        *(u16 *)(object + 6) += 0x1A;
    default:
        return 0;
    }
}

void sub_080534DC(u8 *object) {
    u16 temp;
    u16 next;
    u16 *first = *(u16 **)(object + 0xD4);
    u16 *second = *(u16 **)(object + 0xD8);
    temp = first[1];
    first[1] = second[1];
    second[1] = temp;
    temp = first[3];
    next = second[3];
    first[3] = next;
    first[0x16] = next;
    second[3] = temp;
    second[0x16] = temp;
    object[0xCC]++;
}

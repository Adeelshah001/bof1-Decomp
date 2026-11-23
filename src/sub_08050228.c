u16 sub_08050250(u8 *);

void sub_08050228(u8 *object) {
    u16 temp = sub_08050250(object);
    *(u16 *)(object + 2) = temp + *(u16 *)(object + 2);
    temp = sub_08050250(object);
    *(u16 *)(object + 6) = temp + *(u16 *)(object + 6);
}

extern void (*sub_0804F484)(u8 *);

void sub_08050360(u8 *object) {
    if (!(((u8 **)object)[0xD4 / sizeof(void *)][0x3A] & 0x40)) {
        *(u32 *)(object + 0x64) = (u32)&sub_0804F484;
        sub_080A0774(object);
    }
}

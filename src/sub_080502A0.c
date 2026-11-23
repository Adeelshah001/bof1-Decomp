extern void (*D_080FD5BC[])(u8 *);
void sub_080502A0(u8 *object) {
    D_080FD5BC[object[0x50]](object);
}

u16 sub_08050250(u8 *);

void sub_08050228(u8 *object) {
    *(u16 *)(object + 2) = (u16)(sub_08050250(object) + *(u16 *)(object + 2));
    *(u16 *)(object + 6) = (u16)(sub_08050250(object) + *(u16 *)(object + 6));
}

extern void (*sub_0804F484)(u8 *);

void sub_08050360(u8 *object) {
    if (!( (*(Entity **)(object + 0xD4))->unk3A & 0x40 )) {
        *(void **)(object + 0x64) = sub_0804F484;
        sub_080A0774(object);
    }
}

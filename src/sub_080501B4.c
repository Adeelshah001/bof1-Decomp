extern void (*D_080FD5A4[])(u8 *);
void sub_080502A0(u8 *object) {
    D_080FD5A4[object[0x50]](object);
}

u16 sub_08050250(u8 *);

void sub_08050228(u8 *object) {
    *(u16 *)(object + 2) = (u16)(sub_08050250(object) + *(u16 *)(object + 2));
    *(u16 *)(object + 6) = (u16)(sub_08050250(object) + *(u16 *)(object + 6));
}

extern void (*sub_0804F484)(u8 *);

void sub_08050360(u8 *object) {
    if (!( (*(u8 **)(object + 0xD4))[0x3A] & 0x40 )) {
        *(void **)(object + 0x64) = sub_0804F484;
        sub_080A0774(object);
    }
}

extern u32 D_03002AB0[];
s32 sub_08037ED4(u8 *, u16, u16);
void sub_0803824C(u8 *, u8 *, s32, u8);

void sub_080501B4(u8 *object) {
    *(s32 *)(object + 0) = *(s32 *)&D_03002AB0[0];
    *(s32 *)(object + 4) = *(s32 *)&D_03002AB0[1];
    object[0x61] = (sub_08037ED4(object, *(u16 *)(object + 0xB4), *(u16 *)(object + 0xB6)) + 8) & 0x1F;
    sub_0803824C(object, object + 4, 0x100, object[0x61]);
    *(s32 *)(object + 0) = *(s32 *)&D_03002AB0[0] - *(s32 *)(object + 0);
    *(s32 *)(object + 4) = *(s32 *)&D_03002AB0[1] - *(s32 *)(object + 4);
}

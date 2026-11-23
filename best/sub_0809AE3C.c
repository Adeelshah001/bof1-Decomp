typedef u8 *va_list;

void sub_080A0B1C(u8 *dst, u8 *fmt, va_list ap);
void sub_080A0400(u8 *p);

void sub_080A045C(u8 *arg0, ...) {
    u8 buf[0x100];
    va_list ap;

    *(u8 **)&ap = (u8 *)&arg0 + 4;
    sub_080A0B1C(buf, arg0, ap);
    sub_080A0400(buf);
}

void sub_08038178(void *, void *);
void sub_08038264(void *);
void sub_0809AE78(void *);

typedef struct {
    u8 pad0[2];
    u8 unk2;
    u8 pad3[0x4C - 3];
    u8 unk4C;
    u8 pad4D[0x70 - 0x4D];
    u8 unk70;
    u8 pad71[0x74 - 0x71];
    void *unk74;
    void *unk78;
} Struct9AE3C;

void sub_0809AE3C(Struct9AE3C *arg0) {
    Struct9AE3C *unk78;
    sub_08038178(arg0, arg0->unk78);
    sub_08038264(arg0);
    unk78 = arg0->unk78;
    if ((u8)(unk78->unk2 - 0x10) < arg0->unk2) {
        arg0->unk4C = 4;
        arg0->unk70 = 0;
        sub_0809AE78(arg0);
    }
}

s32 sub_08083AF8(void *, s32);

void sub_0809AE08(u8 *arg0, u8 arg1) {
    if (sub_08083AF8(arg0, 0x42) == 0) {
        Entity *ptr = *(Entity **)(arg0 + 0x74);
        *(u16 *)((u8 *)ptr + 2) = *(u32 *)(arg0 + 0x44) >> 8;
        *(u16 *)((u8 *)ptr + 6) = *(u32 *)(arg0 + 0x48) >> 8;
        ptr->unk6C = (u32)arg0;
        ptr->unk78 = *(u32 *)(arg0 + 0x78);
        ptr->unk54 = (arg1 + 1) * 4;
    }
}

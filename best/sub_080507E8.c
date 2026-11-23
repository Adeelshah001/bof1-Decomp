extern void sub_08050970(void *);
extern void sub_08037FC4(void *, s32);
extern void sub_080A0774(void *);
extern void sub_08050BA0(void);

void sub_080507C0(void *arg0) {
    u8 *p = arg0;
    *(u16 *)(p + 0x54) = 0x204;
    p[0x61] = 0x18;
    p[0x3B] = 0;
    sub_08050970(arg0);
}

void sub_080507E8(void *arg0) {
    u8 *p = arg0;
    *(u16 *)(p + 0x54) = 0x102;
    p[0x61] = 0;
    p[0x3B] = 2;
    sub_08050970(arg0);
}

void sub_08050810(void *arg0) {
    u8 *p = arg0;
    *(u16 *)(p + 0x54) = 0x204;
    p[0x61] = 0;
    p[0x3B] = 2;
    sub_08050970(arg0);
}

void sub_08050B78(void *arg0) {
    u8 *p = arg0;
    sub_08037FC4(arg0, (p[0x3B] & 0x7F) * 2);
    *(u32 *)(p + 0x64) = (u32)sub_08050BA0;
    sub_080A0774(arg0);
}

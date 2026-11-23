extern void sub_0807B27C(void *);
extern s32 sub_0807CA70(void *);
extern void sub_08083BB4(void *);
extern void sub_08087F74(void *);
extern void sub_08038278(void *);
extern void sub_0807C638(void *, s32);
extern s32 sub_0807CE0C(void *);
extern void sub_08087EB8(void *);
extern void sub_080380F4(void *, u32, s32, s32);

void sub_08087EC4(void *arg0) {
    *(u8 *)((u8 *)arg0 + 0x50) = 2;
    sub_08087ED8(arg0);
}

void sub_08087ED8(void *arg0) {
    u8 *ptr;
    u8 temp;
    u8 *byte50;

    ptr = *(u8 **)((u8 *)arg0 + 0x74);
    temp = ptr[0x3A];
    if (temp != 0) {
        sub_0807B27C(arg0);
        return;
    }
    sub_08083BB4(arg0);
    byte50 = (u8 *)((u8 *)arg0 + 0x50);
    *byte50 = *byte50 + 1;
    *(u8 *)0x03004FAD = temp;
    if (sub_0807CA70(arg0) != 0) {
        sub_08087F74(arg0);
        return;
    }
    sub_0807B27C(arg0);
}

void sub_08087E6C(void *arg0) {
    u8 *byte54;
    u8 temp;

    byte54 = (u8 *)((u8 *)arg0 + 0x54);
    temp = *byte54 - 1;
    *byte54 = temp;
    if ((temp << 0x18) == 0) {
        *byte54 = 4;
        sub_0807C638(arg0, 4);
    }
    sub_08038278(arg0);
    if (sub_0807CE0C(arg0) != 0) {
        sub_08087EB8(arg0);
        return;
    }
    sub_08083BB4(arg0);
    sub_08087F74(arg0);
}

void sub_08087E3C(void *arg0) {
    u32 val;

    val = *(u32 *)((u8 *)arg0 + 0x78);
    sub_080380F4(arg0, val, 8, 8);
    *(u8 *)((u8 *)arg0 + 0x54) = 4;
    *(u8 *)((u8 *)arg0 + 0x4D) = 0xC;
    *(u16 *)((u8 *)arg0 + 0x38) = 0xB0 << 1;
    sub_08087EB8(arg0);
}

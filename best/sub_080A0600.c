extern void sub_080A05DC(void);
extern void sub_080A077C(s32 arg0, s32 arg1, s32 arg2, u8 *arg3);

void sub_080A0600(s32 arg0, s32 arg1, s32 arg2) {
    u8 buf[0x80];
    u16 *dst = (u16 *)buf;
    u16 *src = (u16 *)sub_080A05DC;
    u32 count;

    *(vu16 *)0x04000204 = (*(vu16 *)0x04000204 & 0xFFFC) | 3;

    count = ((u32)sub_080A0600 - (u32)sub_080A05DC) << 15;

    while ((count >> 16) != 0) {
        u32 temp = count >> 16;
        *dst++ = *src++;
        count = (temp - 1) << 16;
    }

    sub_080A077C(arg0, arg1, arg2, buf + 1);
}

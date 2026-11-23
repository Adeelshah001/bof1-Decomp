extern void sub_08038278(void *);
extern void sub_0807C638(void *, s32);
extern s32 sub_0807CE0C(void *);
extern void sub_08087EB8(void *);
extern void sub_08083BB4(void *);
extern void sub_08087F74(void *);

void sub_08087E6C(void *arg0) {
    u8 *byte54;
    u32 temp;

    byte54 = (u8 *)((u8 *)arg0 + 0x54);
    temp = *byte54 - 1;
    *byte54 = temp;
    if ((temp << 24) == 0) {
        *byte54 = 4;
        sub_0807C638(arg0, 4);
    }
    sub_08038278(arg0);
    if (sub_0807CE0C(arg0) != 0) {
        sub_08087EB8(arg0);
    } else {
        sub_08083BB4(arg0);
        sub_08087F74(arg0);
    }
}

extern void sub_0807B27C(void *);
extern s32 sub_0807CA70(void *);
extern void sub_08083BB4(void *);
extern void sub_08087F74(void *);
extern u8 D_03004F50[];

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
    D_03004F50[0x5D] = temp;
    if (sub_0807CA70(arg0) != 0) {
        sub_08087F74(arg0);
        return;
    }
    sub_0807B27C(arg0);
}

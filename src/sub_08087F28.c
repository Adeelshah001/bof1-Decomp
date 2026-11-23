/* identical to sub_08087758 (matched), with its names changed by decompdecomp */
extern u8 D_03004F50[];
extern void sub_0807B27C(void *);
extern u8 sub_0807CAB8(void *, s32 *);
extern void sub_08087F74(void *);
extern void sub_08087F80(void *);

void sub_08087F28(void *arg0) {
    s32 sp0;
    u8 temp_r1;
    void *r4 = arg0;
    u8 *r5 = D_03004F50;

    while (1) {
        temp_r1 = sub_0807CAB8(r4, &sp0);
        if (temp_r1 == 0) {
            sub_0807B27C(r4);
            return;
        }
        *(s32 *)((u8 *)r4 + 0x78) = sp0;
        *(s32 *)(r5 + 0x54) = sp0;
        if (temp_r1 == 1) {
            sub_08087F80(r4);
            return;
        }
        if (temp_r1 != 2) {
            sub_08087F74(r4);
            return;
        }
    }
}

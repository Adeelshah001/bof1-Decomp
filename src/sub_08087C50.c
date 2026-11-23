extern u8 D_03004F50[];
extern void sub_0807B248(void *);
extern u8 sub_0807CAB8(void *, s32 *);
extern void sub_080877A4(void *);
extern void sub_080877B0(void *);
extern void sub_080877C4(void);
extern void sub_08087594(void *);
extern s32 sub_0807CE30(void *);
extern void sub_08087D34(void *);
extern void sub_08087D88(void *, s32);

void sub_08087758(void *arg0) {
    s32 sp0;
    u8 temp_r1;

    while (1) {
        temp_r1 = sub_0807CAB8(arg0, &sp0);
        if (temp_r1 == 0) {
            sub_0807B248(arg0);
            return;
        }
        *(s32 *)((u8 *)arg0 + 0x78) = sp0;
        *(s32 *)(D_03004F50 + 0x54) = sp0;
        if (temp_r1 == 1) {
            sub_080877B0(arg0);
            return;
        }
        if (temp_r1 != 2) {
            sub_080877A4(arg0);
            return;
        }
    }
}

void sub_080877B0(void *arg0) {
    u8 *p = (u8 *)arg0 + 0x50;
    (*p)--;
    sub_080877C4();
}

void sub_080874D4(void *arg0) {
    u8 *p = (u8 *)arg0;
    p[0x4D] = 4;
    p[0x54] = 0x28;
    p[0xE1] = 5;
    sub_08087594(arg0);
}

void sub_08087C50(void *arg0, s8 arg1) {
    u8 *p = (u8 *)arg0;
    p[0xE1] = arg1;
    if (sub_0807CE30(arg0) != 0) {
        sub_08087D34(arg0);
        return;
    }
    p[0xE0] = 6;
    p[0x54] = 0x28;
    sub_08087D88(arg0, 4);
}

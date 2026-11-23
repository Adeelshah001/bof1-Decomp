extern void sub_08051760(void);
extern void sub_08037FC4(void *, s32);
extern void sub_0805336C(void);
extern void sub_08052300(void *);
extern void sub_08052400(void);
extern void sub_080A0774(void);

extern u8 D_03004E08[];
extern u8 D_03004E0C[];
extern u8 D_03004E14[];
extern u8 D_03004E18[];

extern u8 D_03002430[];
extern u8 D_03003410[];

void sub_08053040(u8 *arg0) {
    *(u16 *)(arg0 + 0xA8) = *(u8 *)(arg0 + 0xCF);
    *(void **)(arg0 + 0x64) = sub_08051760;
}

void sub_08053058(u8 *arg0) {
    *(u16 *)(arg0 + 0x1C) = (*(u8 *)(arg0 + 0xD2) << 4) + 0x180;
    *(u8 *)(arg0 + 0x3D) = 2;
    *(u8 *)(arg0 + 0x3D + 4) = 0xC;
    *(u16 *)(arg0 + 0x2A) = 0x210;
    sub_08037FC4(arg0, 0);
    *(void **)(arg0 + 0x64) = sub_0805336C;
}

void sub_08052FEC(u8 *arg0) {
    *(u16 *)D_03004E18 = 0x2000;
    *(u16 *)D_03004E14 = 0x7FFF;
    *(u16 *)D_03004E08 = 0;
    *(u16 *)D_03004E0C = 0;
    *(u16 *)(arg0 + 0x54) = 0x2010;
    sub_08052300(arg0);
    *(void **)(arg0 + 0x64) = sub_08052300;
}

void sub_080530AC(u8 *arg0) {
    *(u16 *)(D_03002430 + 0x3C) = 0x0E;
    *(u8 *)(arg0 + 0x54) = 0;
    *(u8 *)(arg0 + 0x54 + 0x7B) = 0;
    *D_03003410 = 0x82;
    *(void **)(arg0 + 0x64) = sub_08052400;
    sub_080A0774();
}

extern u8 D_03002430[];
extern u8 D_04000014[];
extern u8 D_04000016[];
extern u8 D_0200BE80[];
extern u8 D_020213C0[];

void sub_08053040(void *);
void sub_08000C68(void *, s32);
void sub_080520B0(void *, s32);
void sub_08051F64(void *);
void sub_08051540(void *);
void sub_080532CC(void *);
void sub_08050DB0(void *);
void sub_080A0210(void *, void *, s32);
void sub_0802B39C(u8);

void sub_08052F2C(void *arg0) {
    ((u8 *)arg0)[0xD0] = 0;
    sub_08053040(arg0);
}

void sub_08052F40(void *arg0) {
    ((u8 *)arg0)[0x40] = 0;
    ((u8 *)arg0)[0x54] = 0xB0;
    *(u16 *)((u8 *)arg0 + 2) = *(u16 *)(D_03002430 + 2);
    *(u16 *)((u8 *)arg0 + 6) = *(u16 *)(D_03002430 + 6);
    sub_08000C68(D_04000014, 2);
    sub_080520B0(arg0, 0);
    *(u32 *)((u8 *)arg0 + 0x64) = (u32)&sub_08051F64;
}

void sub_08052F0C(void *arg0) {
    sub_08051540(arg0);
    *(u16 *)((u8 *)arg0 + 0x5C) = ((u8 *)arg0)[0x54];
    *(u32 *)((u8 *)arg0 + 0x64) = (u32)&sub_080532CC;
}

void sub_08052E0C(void *arg0) {
    ((u8 *)arg0)[0x40] = 1;
    ((u8 *)arg0)[0x54] = 0xFF;
    *(u16 *)((u8 *)arg0 + 0xBA) = 0;
    sub_08000C68(D_04000016, 2);
    sub_08050DB0(arg0);
    sub_080A0210(D_0200BE80, D_020213C0, 0x40);
    sub_0802B39C(((u8 *)arg0)[0xCD]);
    *(u32 *)((u8 *)arg0 + 0x64) = (u32)&sub_08050DB0;
}

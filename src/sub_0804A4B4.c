extern u8 D_080A6678[];
extern u8 D_03002AB0[];
extern u32 D_0202DBD0[];

void sub_080A0A68(void *dst, const void *src, s32 len);
void sub_08037FC4(void *arg0, u8 arg1);
void sub_0803EE6C(s32 arg0);
void sub_080332C0(void *arg0);
void sub_0803A8EC(void *arg0);
void sub_0804A2E8(void *arg0);
extern void sub_0804A394(void);

void sub_0804A4B4(u8 *arg0) {
    u8 sp0[4];
    sub_080A0A68(sp0, D_080A6678, 4);
    sub_08037FC4(arg0, sp0[arg0[0x61]]);
}

u32 sub_0804A470(void) {
    u8 *base = D_03002AB0;
    return base[0x61] != base[0x62];
}

s32 sub_0804A444(s32 arg0) {
    s32 result = 0;
    if (!(*(u8 *)(D_0202DBD0 + 0xAE) & 1)) {
        sub_0803EE6C(arg0);
        result = 1;
    }
    return result;
}

void sub_0804A348(u8 *arg0) {
    *(u16 *)(arg0 + 0x2A) = 0x30;
    sub_080332C0(arg0);
    *(u8 *)(arg0 + 0x3D) = 0;
    *(u8 *)(arg0 + 0x41) = 2;
    *(u16 *)(arg0 + 0x1C) = 4;
    *(u16 *)(arg0 + 0x2E) = 0x6040;
    sub_0804A2E8(arg0);
    sub_0804A4B4(arg0);
    sub_0803A8EC(arg0);
    *(void (**)(void))(arg0 + 0x64) = sub_0804A394;
}

typedef void (*Fn)(u8 *);
extern Fn D_080FA604[];

void sub_08031AC4(u8 *arg0) {
    D_080FA604[arg0[0x50] >> 1](arg0);
}

extern u8 D_080A6394[];
void sub_080A0A68(void *, u8 *, s32);
void sub_08037FC4(void *, u8);
void sub_08037A74(s32);

void sub_08031AF4(u8 *arg0) {
    u8 sp0;
    sub_080A0A68(&sp0, D_080A6394, 4);
    sub_08037FC4(arg0, arg0[0x61] + sp0);
    sub_08037A74(0x100);
    arg0[0x50] = 2;
}

extern u8 D_0202DBD0[];
extern Fn D_080FA548[];
void sub_08032624(u8 *);
void sub_080A0774(u8 *, Fn);

void sub_08031A70(u8 *arg0) {
    s32 temp_r1 = 0xF0 & D_0202DBD0[0x2B8];
    if (temp_r1 == 0x10) {
        D_080FA548[arg0[0x50] >> 1](arg0);
    } else if (temp_r1 == 0x40) {
        sub_08032624(arg0);
    } else {
        arg0[0x4D] = 0;
        *(u16 *)&arg0[0x50] = 0;
    }
}

s32 sub_08037C98(u8 *, s32);
void sub_080379D4(s32);

void sub_08031B30(u8 *arg0) {
    if ((sub_08037C98(arg0, 1) << 0x10) == 0) {
        sub_080379D4(0xA);
        arg0[0x54] = 0x78;
        arg0[0x50] = 4;
    }
}

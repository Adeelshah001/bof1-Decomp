typedef struct {
    u8 pad00[0x3B];
    u8 unk3B;
    u8 unk3C;
    u8 pad3D[0x54 - 0x3D];
    u8 unk54;
    u8 pad55[0x64 - 0x55];
    u32 unk64;
} LocalEntity;

s32 sub_08037C98(void *, s32);
void sub_0803EE6C(void *);
void sub_0803A974(void *);

void sub_0804AC0C(void *arg0) {
    if ((sub_08037C98(arg0, 1) << 0x10) == 0) {
        sub_0803EE6C(arg0);
    } else {
        sub_0803A974(arg0);
    }
}

void sub_08048264(void *, s32);

void sub_0804ABEC(LocalEntity *arg0) {
    u8 *base = D_03003420;
    base[0x50] = 1;
    arg0->unk64 = (u32)&sub_0804AC0C;
    sub_08048264(arg0, 0x22);
}

void sub_080379D4(s32);
void sub_08037FC4(void *, s32);
void sub_0804AC30(void);

void sub_0804AB80(LocalEntity *arg0) {
    sub_08037C98(arg0, 0);
    if (--arg0->unk54 != 0) {
        sub_0803A974(arg0);
    } else if (--arg0->unk3B == 0) {
        arg0->unk64 = (u32)&sub_0804AC30;
    } else {
        arg0->unk54 = 0x10;
        sub_080379D4(0x25);
        sub_08037FC4(arg0, 0);
    }
}

void sub_0803A8EC(void);
extern u8 D_03003F98[];

void sub_0804AA9C(LocalEntity *arg0) {
    sub_0803A8EC();
    switch (D_03003F98[0] & 3) {
    case 1:
        if (arg0->unk3C == 0) {
            goto match;
        }
        break;
    case 3:
        goto match;
    case 2:
        if (arg0->unk3C != 0) {
match:
            arg0->unk64 = (u32)&sub_0804AC30;
            sub_08037FC4(arg0, 2);
        }
        break;
    }
}

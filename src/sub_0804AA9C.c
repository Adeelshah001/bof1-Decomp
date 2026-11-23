typedef struct {
    u8 pad00[0x3B];
    u8 unk3B;
    u8 unk3C;
    u8 pad3D[0x54 - 0x3D];
    u8 unk54;
    u8 pad55[0x64 - 0x55];
    u32 unk64;
} LocalEntity;

void sub_0803A8EC(void);
void sub_08037FC4(void *, s32);
void sub_0804AC30(void);
extern u8 D_03003F98[];

void sub_0804AA9C(LocalEntity *arg0) {
    sub_0803A8EC();
    switch (D_03003F98[0] & 3) {
    case 1:
        if (arg0->unk3C != 0) {
            break;
        }
        goto match;
    case 3:
        goto match;
    case 2:
        if (arg0->unk3C == 0) {
            break;
        }
match:
        arg0->unk64 = (u32)&sub_0804AC30;
        sub_08037FC4(arg0, 2);
        break;
    }
}

extern s32 sub_08037C98(void *arg0, s32 arg1);
extern void sub_0803A974(void *arg0);
extern void sub_0803EE6C(void *arg0);
extern void sub_08048264(void *arg0, s32 arg1);
extern void sub_080379D4(s32 arg0);
extern void sub_08037FC4(void *arg0, s32 arg1);
extern void sub_0803A8EC(void);
extern void sub_0804AC30(void *arg0);
extern u8 D_03003F98[];

// sub_0804AC0C
void sub_0804AC0C(Entity *arg0) {
    if ((sub_08037C98(arg0, 1) << 0x10) == 0) {
        sub_0803EE6C(arg0);
        return;
    }
    sub_0803A974(arg0);
}

// sub_0804ABEC
void sub_0804ABEC(Entity *arg0) {
    D_03003420[0x50] = 1;
    arg0->unk64 = (u32)&sub_0804AC0C;
    sub_08048264(arg0, 0x22);
}

// sub_0804AB80
void sub_0804AB80(Entity *arg0) {
    Entity *r5 = arg0;
    
    sub_08037C98(arg0, 0);
    arg0->unk54--;
    if (arg0->unk54 != 0) {
        sub_0803A974(arg0);
        return;
    }
    
    arg0->unk3B--;
    if (arg0->unk3B == 0) {
        arg0->unk64 = (u32)&sub_0804AC30;
        return;
    }
    
    arg0->unk54 = 0x10;
    sub_080379D4(0x25);
    sub_08037FC4(r5, 0);
}

// sub_0804AA9C
void sub_0804AA9C(Entity *arg0) {
    s32 temp;
    
    sub_0803A8EC();
    temp = D_03003F98[0] & 3;
    
    if (temp == 2) {
        if (((u8 *)arg0)[0x3C] != 0) {
            arg0->unk64 = (u32)&sub_0804AC30;
            sub_08037FC4(arg0, 2);
        }
    } else if (temp == 3) {
        arg0->unk64 = (u32)&sub_0804AC30;
        sub_08037FC4(arg0, 2);
    } else if (temp == 1) {
        if (((u8 *)arg0)[0x3C] == 0) {
            arg0->unk64 = (u32)&sub_0804AC30;
            sub_08037FC4(arg0, 2);
        }
    }
}

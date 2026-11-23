extern u16 D_030045B0[];
extern u8 D_0202DBD0[];
extern u32 D_03002AB0[];

void sub_0805C9A0(void *, s32);
void sub_08030B68(void);

void sub_0805C110(u8 arg0, u16 *arg1, u16 *arg2) {
    *arg1 = 0x37B;
    *arg2 = 0x37C;
}

void sub_0805C124(u8 arg0, u16 *arg1, u16 *arg2) {
    D_030045B0[0x38 / 2] = 0x844F;
    *arg1 = 0x44E;
    *arg2 = 0x450;
}

void sub_0805C0C0(u8 arg0, u16 *arg1, u16 *arg2) {
    if (!(arg0 & 0x80)) {
        sub_0805C9A0(D_0202DBD0, 0x1770);
        sub_08030B68();
    } else {
        *(u32 *)((u8 *)D_03002AB0 + 0x88) += 1;
    }
    *arg1 = 0x344;
    *arg2 = 0xFFFF;
}

void sub_0805C160(u8 arg0, u16 *arg1, u16 *arg2) {
    *arg1 = 0x4C6;
    *arg2 = 0x4C3;
}

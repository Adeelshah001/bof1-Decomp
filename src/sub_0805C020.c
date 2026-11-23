extern u8 D_0202DBD0[];
struct Unk03002AB0_C0 {
    u8 pad[0x88];
    u32 unk88;
};
extern struct Unk03002AB0_C0 D_03002AB0;

void sub_0805C9A0(void *, s32);
void sub_08030B68(void);

void sub_0805BFF4(u8 arg0, u16 *arg1, u16 *arg2) {
    if (arg0 & 0x80) {
        D_03002AB0.unk88 += 0x16;
    }
    *arg1 = 0xFFFF;
    *arg2 = 0xFFFF;
}

void sub_0805C020(u8 arg0, u16 *arg1, u16 *arg2) {
    if (!(arg0 & 0x80)) {
        sub_0805C9A0(D_0202DBD0, 0x1388);
        sub_08030B68();
    } else {
        D_03002AB0.unk88++;
    }
    *arg1 = 0x344;
    *arg2 = 0xFFFF;
}

void sub_0805BFC0(u8 arg0, u16 *arg1, u16 *arg2) {
    if (arg0 & 0x80) {
        D_03002AB0.unk88 += 0x16;
    }
    *arg1 = 0x303;
    *arg2 = 0xFFFF;
}

void sub_0805BE58(u8 arg0, u16 *arg1, u16 *arg2) {
    u8 flag = arg0 & 0x80;
    if (flag == 0) {
        D_03004830[0x42] = flag;
        if (*(u32 *)(D_0202DBD0 + 0x20) > 99) {
            *arg1 = 0x28D;
        } else {
            *arg1 = 0x27F;
        }
    }
    *arg2 = 0x28B;
}

extern u16 D_030045B0[];
extern vu8 D_0300169C;
extern u8 D_03004620[];
extern u32 D_08100F2C[];
extern u8 D_0202DBD0[];

struct Unk03002AB0_C0 {
    u8 pad[0x88];
    u32 unk88;
};
extern struct Unk03002AB0_C0 D_03002AB0;

void sub_0805C9A0(void *, s32);
void sub_08030B68(void);

void sub_0805C2D0(u32 arg0, u16 *arg1, u16 *arg2) {
    D_030045B0[0x38 / 2] = arg0 << 8;
    *arg1 = 0xFFFF;
    *arg2 = 0xFFFF;
}

void sub_0805C2E8(u8 arg0, u16 *arg1, u16 *arg2) {
    D_030045B0[0x38 / 2] = (arg0 << 8) | 1;
    *arg1 = 0xFFFF;
    *arg2 = 0xFFFF;
}

s32 sub_0805C430(void) {
    D_0300169C;
    return ((s32 (*)(void))D_08100F2C[D_03004620[2] >> 1])();
}

void sub_0805C070(u8 arg0, u16 *arg1, u16 *arg2) {
    if (!(arg0 & 0x80)) {
        sub_0805C9A0(D_0202DBD0, 0x157C);
        sub_08030B68();
    } else {
        D_03002AB0.unk88++;
    }
    *arg1 = 0x344;
    *arg2 = 0xFFFF;
}

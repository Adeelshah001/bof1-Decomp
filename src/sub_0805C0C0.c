extern u8 D_0202DBD0[];
struct Unk03002AB0_C0 {
    u8 pad[0x88];
    u32 unk88;
};
extern struct Unk03002AB0_C0 D_03002AB0;

void sub_0805C9A0(void *, s32);
void sub_08030B68(void);

void sub_0805C0C0(u8 arg0, u16 *arg1, u16 *arg2) {
    if (!(arg0 & 0x80)) {
        sub_0805C9A0(D_0202DBD0, 0x1770);
        sub_08030B68();
    } else {
        D_03002AB0.unk88++;
    }
    *arg1 = 0x344;
    *arg2 = 0xFFFF;
}

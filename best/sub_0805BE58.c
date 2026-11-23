struct Unk0202DBD0 {
    u8 pad[0x20];
    u32 unk20;
};
extern struct Unk0202DBD0 D_0202DBD0;

void sub_0805BE58(u8 arg0, u16 *arg1, u16 *arg2) {
    u8 flag = arg0 & 0x80;
    if (flag == 0) {
        D_03004830[0x42] = flag;
        if (D_0202DBD0.unk20 > 99) {
            *arg1 = 0x28D;
        } else {
            *arg1 = 0x27F;
        }
    }
    *arg2 = 0x28B;
}

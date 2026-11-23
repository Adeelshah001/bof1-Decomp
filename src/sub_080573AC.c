u8 sub_08001770(u16);
void sub_080379D4(s32);

extern u16 D_03004890;
extern u16 D_03001678;

void sub_080573AC(u8 *arg0) {
    if (arg0[0x4C] == 0) {
        if (sub_08001770(0x49) == 0) {
            D_03001678 = 0x207;
            return;
        }
        arg0[0x4C]++;
    } else {
        arg0[0x4D]--;
        if (arg0[0x4D] != 0) {
            D_03001678 = 0x207;
            return;
        }
    }
    D_03004890 = 0xC8;
    sub_080379D4(0x18);
    arg0[0x4D] = 0x60;
    D_03001678 = 0x207;
}

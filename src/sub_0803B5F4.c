void sub_0803ADDC(s32 arg0, s32 arg1);
void sub_0803AF58(s32 arg0, s32 arg1);

void sub_0803B5F4(void) {
    if ((s8)D_03004830[0x31] == 0) {
        sub_0803ADDC(0x1A0, 0xFFFF);
        sub_0803ADDC(0xE8, 0xFFFF);
        sub_0803AF58(0x3F, 0xFFFF);
    }
}

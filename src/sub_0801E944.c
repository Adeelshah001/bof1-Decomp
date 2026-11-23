extern u8 D_03004830[];
s32 sub_08038458(s32 arg0);
void sub_08024008(s32 arg0);

void sub_0801E944(void) {
    s32 val = sub_08038458(0);
    if ((val << 0x18) != 0) {
        sub_08024008(0x3E);
        D_03004830[0x2B] += 1;
    }
}

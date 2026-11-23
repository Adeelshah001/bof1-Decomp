extern u8 D_030043DC;
extern u32 D_03001694;
void sub_0802411C(u16 arg0, u16 arg1);

void sub_080260A0(u8 *arg0) {
    u8 *script = *(u8 **)(arg0 + 0x68);
    u16 idx = script[2] + 0x180;
    u16 value = script[3] | (script[4] << 8);
    sub_0802411C(value, idx);
    *(u32 *)(arg0 + 0x68) += 5;
    D_030043DC = 1;
    D_03001694 |= 1;
}

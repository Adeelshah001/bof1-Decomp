void sub_08088624(void *arg0, u16 arg1, u16 arg2, u8 arg3) {
    u8 *p = (u8 *)arg0;
    u16 var_r5 = arg1;
    u16 var_r4 = arg2;
    s32 var_r3 = arg3;
    u16 temp;
    u16 *dest2_addr;
    u16 *dest1_addr;
    u16 *source_addr;

    var_r3 += p[0x7D] & 0xF;
    p[0x7D] = var_r3;
    var_r3 = 0xF;

    do {
        dest2_addr = (u16 *)(0x02020FC0 + var_r4);
        dest1_addr = (u16 *)(0x020211C0 + var_r4);
        source_addr = (u16 *)(0x081A0E7C + var_r5);
        temp = *source_addr;
        *dest1_addr = temp;
        *dest2_addr = temp;
        var_r5 += 2;
        var_r4 += 2;
        var_r3--;
    } while (var_r3 >= 0);
}

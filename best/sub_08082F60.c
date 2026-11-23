vu16 *const D_050001E8 = (vu16 *)0x050001E8;
vu16 *const D_050001F0 = (vu16 *)0x050001F0;
vu16 *const D_050001F8 = (vu16 *)0x050001F8;

s32 sub_08082F60(void *arg0) {
    s32 var_r4;
    u32 val;
    u8 byte_val;
    
    val = *(u16 *)((u8 *)arg0 + 0x38);
    val = val + 1;
    *(u16 *)((u8 *)arg0 + 0x38) = (u16)val;
    byte_val = (u8)val;
    var_r4 = 0;
    if (byte_val > 0x77) {
        var_r4 = 1;
    }
    if (byte_val == 0x78) {
        *(u8 *)((u8 *)arg0 + 0x50) = *(u8 *)((u8 *)arg0 + 0x50) + 1;
        return 0;
    }
    if ((byte_val & 1) == 0) {
        vu16 *r1 = D_050001E8;
        u16 r3 = *r1;
        u16 r0 = *D_050001F0;
        *r1 = r0;
        r1 = r1 + 8;
        r0 = *r1;
        *D_050001F0 = r0;
        *r1 = r3;
    }
    return var_r4;
}

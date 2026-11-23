s32 sub_08037980(u16, s32);
s32 sub_080382A4(void *);
s32 sub_0807B248(void);
s32 sub_0807C638(void *, s32);
s32 sub_08083BB4(void *);

void sub_080862C4(void *arg0) {
    u8 *ptr4;
    u8 *ptr5;
    u32 temp_r0;
    s32 temp_r0_2;
    u32 var_r2;

    ptr4 = (u8 *)arg0;
    sub_0807B248();
    ptr5 = ptr4 + 0x54;

    if (!(1 & *ptr5)) {
        sub_0807C638(ptr4, 1);
    }
    sub_080382A4(ptr4);
    temp_r0 = *ptr5 - 1;
    *ptr5 = temp_r0;
    if ((temp_r0 << 0x18) == 0) {
        *ptr5 = 0x10;
        *(ptr4 + 0x50) = *(ptr4 + 0x50) + 1;
        sub_08083BB4(ptr4);
        ptr5 = (u8 *)0x03004F50;
        ptr4 = ptr5 + 0x40;
        temp_r0_2 = sub_08037980(*(u16 *)ptr4, 0x180);
        var_r2 = (u32)(temp_r0_2 << 8) >> 0x10;
        if (0xFF & temp_r0_2) {
            var_r2 = (u32)(u16)(var_r2 + 1);
        }
        *(u16 *)ptr4 = (u16)var_r2;
        *(u16 *)(ptr5 + 0x74) = (u16)var_r2;
    }
}

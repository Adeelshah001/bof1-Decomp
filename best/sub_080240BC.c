void sub_08028F48(u8);

void sub_080240BC(void) {
    u16 *r0_ptr = (u16 *)0x030023E0;
    u16 *r1_ptr = (u16 *)0x03004120;
    u16 *r2_ptr = (u16 *)0x03004100;
    u8 *r3_ptr = (u8 *)0x030045B0;
    u32 *r4_ptr = (u32 *)0x0202B1C0;

    u16 r1;
    u16 r0;
    u32 r2;
    u32 r1_val;
    u8 r0_byte;
    u32 r1_const;
    u8 r1_byte;
    u8 r0_byte2;

    r1 = r0_ptr[1];  // ldrh r1, [r0, #0x02]
    r1 += 0x80;      // adds r1, #0x80
    r1_ptr[0] = r1;  // strh r1, [r2, #0x00]

    r0 = r0_ptr[3];  // ldrh r0, [r0, #0x06]
    r0 += 0x80;      // adds r0, #0x80
    r2_ptr[0] = r0;  // strh r0, [r2, #0x00]

    r2 = 0xFF;
    r2 <<= 8;        // lsls r2, r2, #0x08
    r0 &= r2;        // ands r0, r2
    r0 >>= 3;        // lsrs r0, r0, #0x03

    r2 = 0xF8;
    r2 <<= 5;        // lsls r2, r2, #0x05
    r1 &= r2;        // ands r1, r2
    r1 >>= 8;        // lsrs r1, r1, #0x08

    r0 |= r1;        // orrs r0, r1

    r1_val = r4_ptr[0];  // ldr r1, _08024110 @ =0x0202B1C0
    r0 += r1_val;        // adds r0, r0, r1

    r0_byte = (u8)r0;    // ldrb r0, [r0, #0x00]

    r1_const = 0x081A7A7C;
    r0 += r1_const;      // adds r0, r0, r1

    r1_byte = (u8)r0;    // ldrb r1, [r0, #0x00]

    r0_byte2 = r3_ptr[2]; // ldrb r0, [r2, #0x02]

    if (r0_byte2 != r1_byte) {  // cmp r0, r1
        r3_ptr[2] = r1_byte;    // strb r1, [r2, #0x02]
        sub_08028F48(r1_byte);  // bl sub_08028F48
    }
}

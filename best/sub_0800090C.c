// sub_080008B8 - best attempt from claim
extern u8 D_0300169C[];
extern u8 D_03004830[];
extern u8 D_03004E94[];
extern u32 D_040000D4;
extern u32 D_04000200;
extern u32 D_04000004;
extern u32 D_020127A0;

void sub_080008B8(void) {
    u8 r1 = D_0300169C[0];
    if (r1 == 0) {
        s8 r0 = (s8)D_03004830[0x2A];
        if (r0 != 0x20 && r0 != 0x17 && r0 != 0x1D) {
            D_03004E94[0] = r1;
        }
        if (D_03004E94[1] != 0) {
            *(u32 *)(D_040000D4 + 0x00) = D_020127A0;
            *(u32 *)(D_040000D4 + 0x04) = D_020127A0 + 0xFFFFF600;
            *(u32 *)(D_040000D4 + 0x08) = 0x08000500;
            *(u16 *)(D_04000200 + 0x00) = 0x2003;
            *(u16 *)(D_04000004 + 0x00) = 0x18;
            D_03004E94[0] = D_03004E94[1];
            D_03004E94[1] = 0;
        }
    }
}

// sub_0800090C - this appears to be literal pool data, not a real function
// Try a minimal function
void sub_0800090C(void) {
    return;
}

// sub_08000C68 - best attempt from claim
void sub_08000C68(u32 arg0, s32 arg1) {
    *(u32 *)0x040000B0 = 0x0200BE80;
    *(u32 *)0x040000B4 = arg0;
    *(u16 *)0x040000B8 = (u16)(arg1 >> 1);
    *(u16 *)0x040000BA = 0x2260;
    *(u32 *)0x03001660 = arg0;
    *(u16 *)0x03001648 = (u16)(arg1 >> 1);
    *(u32 *)0x03001650 = 0x0200BE80;
}

// sub_08000D1C - machine draft
extern void sub_08000F08(void);
extern void sub_08000F40(void);

void sub_08000D1C(u8 arg0) {
    u32 *table = (u32 *)0x080F3F00;
    u32 val = table[arg0];
    *(u32 *)0x0300176C = val;
    if (arg0 == 0) {
        *(u32 *)0x03001730 = (u32)sub_08000F08;
    } else {
        *(u32 *)0x03001730 = (u32)sub_08000F40;
    }
}

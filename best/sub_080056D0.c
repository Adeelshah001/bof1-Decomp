extern u16 D_03002AB0[];
extern u8 D_03004830[];
extern u8 D_03001864[];
extern u8 D_03004E14[];
extern u8 D_02020FC0[];

void sub_080050B4(s32, s32, s32, s32);
void sub_0803D510(void);

void sub_08005678(void) {
    *(u8 *)(D_03004830 + 0x2D) = 0;
    *(u8 *)((u8 *)D_03002AB0 + 0xB8) |= 4;
    *(u16 *)D_03001864 = 0;
    *(u8 *)(D_03004830 + 0x36) = 1;
    sub_080050B4(1, 0x66, 0x178, 0x707C);
    *(u8 *)(D_03004830 + 0x2C) = 0x7F;
    (*(u8 *)(D_03004830 + 0x2B))++;
}

void sub_080056D0(void) {
    sub_0803D510();
    if (*(s8 *)(D_03004830 + 0x2C) == 0) {
        u16 timer = *(u16 *)D_03004E14;
        if (timer == 0x10) {
            *(u8 *)(D_03004830 + 0x2C) = 0x7F;
            (*(u8 *)(D_03004830 + 0x2B))++;
        } else {
            u16 next = timer + 1;
            *(u16 *)D_03004E14 = next;
            *(u8 *)D_02020FC0 = next;
            *(u8 *)(D_02020FC0 + 1) = next >> 8;
            *(u8 *)(D_03004830 + 0x2C) = 8;
        }
    }
}

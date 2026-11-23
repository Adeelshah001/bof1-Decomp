void sub_08068938(s32, s32);
void sub_0805B428(s32, s32, s32, s32);
void sub_0805B284(void);
void sub_0805B404(s32);
void sub_08059978(void);
void sub_08059D68(s32);

extern u8 D_03004620[];

s32 sub_0806B29C(void) {
    u16 sp0;
    volatile u32 *dma;
    u16 *sp_ptr;

    sub_08068938(4, 0x12);

    sp_ptr = &sp0;
    *sp_ptr = 0x140;
    dma = (volatile u32 *)0x040000D4;
    dma[0] = (u32)sp_ptr;
    dma[1] = 0x0201AB00;
    dma[2] = 0x81000120;
    dma[2];

    sub_0805B428(0x30, 0x58, 0xF0, 0x98);
    sub_0805B284();

    if (D_03004620[0xB2] > 7) {
        sub_0805B404(1);
    }
    sub_08059978();
    sub_08059D68(0x59D);
    D_03004620[7] = 0;
    D_03004620[3] = 0x10;
    return 0;
}

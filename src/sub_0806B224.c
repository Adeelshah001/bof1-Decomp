extern vu32 D_0201AB00;
extern u8 D_03004620[];

typedef struct {
    vu32 src;
    vu32 dst;
    vu32 cnt;
} DmaChannel;

s32 sub_0806B224(void) {
    u16 sp0;
    u16 *sp_save;
    volatile DmaChannel *dma;
    
    sub_08068938(4, 0x12);
    
    sp_save = &sp0;
    sp0 = 0xA0 << 1;
    
    dma = (volatile DmaChannel *)0x040000D4;
    dma->src = (u32)sp_save;
    dma->dst = 0x0201AB00;
    dma->cnt = 0x81000120;
    
    (void)dma->cnt;
    
    sub_0805B428(0x30, 0x58, 0xF0, 0x98);
    sub_0805B284();
    
    if (D_03004620[0xB2] > 7) {
        sub_0805B404(1);
    }
    
    sub_08059978();
    sub_08059D68(0x59C);
    
    D_03004620[7] = 0;
    D_03004620[3] = 0x10;
    
    return 0;
}

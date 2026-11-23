extern u8 D_03002AB0[];
extern u8 D_03004114[];
extern u8 D_03004830[];

void sub_0800511C(s32, s32);

void sub_0800C170(void) {
    u8 *base = D_03002AB0;
    u8 *rec1;
    u8 *rec2;
    u16 zero = 0;
    u16 val;

    val = 0x0FF8;
    *(u16 *)(base + 0x02) = val;
    
    rec1 = base + (0x92 << 1);
    val = 0x0FE8;
    *(u16 *)(rec1 + 0x02) = val;
    
    rec2 = base + (0x92 << 2);
    val = 0x0FD8;
    *(u16 *)(rec2 + 0x02) = val;
    
    val = 0x085C;
    *(u16 *)(base + 0x06) = val;
    *(u16 *)(rec1 + 0x06) = val;
    *(u16 *)(rec2 + 0x06) = val;
    
    sub_0800511C(0, 1);
    
    *(u16 *)D_03004114 = zero;
    
    D_03004830[0x2B]++;
}

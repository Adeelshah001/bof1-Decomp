extern u8 D_03001678[];
extern u8 D_030016D0[];
extern u8 D_03004830[];

void sub_0801943C(void);
void sub_080194A4(void);

void sub_08017354(void) {
    u16 *p1;
    u16 *p2;
    u16 v1, v2;
    
    D_03004830[0x4D] = 0x10;
    
    p1 = (u16 *)D_030016D0;
    v1 = *p1 & 0xFFFC;
    p2 = (u16 *)D_03001678;
    v2 = *p2 & 0xFFFC;
    *p1 = v1 | 2;
    *p2 = v2 | 2;
    
    sub_0801943C();
    D_03004830[0x2C] = 0x50;
    D_03004830[0x2B]++;
}

void sub_08017438(void) {
    u16 *p1;
    u16 *p2;
    u16 v1, v2;
    
    D_03004830[0x4D] = 0x20;
    
    p1 = (u16 *)D_030016D0;
    v1 = *p1 & 0xFFFC;
    p2 = (u16 *)D_03001678;
    v2 = *p2 & 0xFFFC;
    *p1 = v1 | 3;
    *p2 = v2 | 3;
    
    sub_080194A4();
    D_03004830[0x2D]++;
    D_03004830[0x2B]++;
}

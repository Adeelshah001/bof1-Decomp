extern u8 sub_08001770(s32);

void sub_0800CE44(void) {
    extern u8 D_03001850[];
    extern u16 D_03004114[];
    
    u8 val;
    
    if (sub_08001770(0x5F) != 0 || (val = D_03001850[0], (val & 0x80) != 0)) {
        D_03004114[0] = 0;
        return;
    }
    D_03001850[0] = 0x80;
    D_03004114[0] = 0;
}

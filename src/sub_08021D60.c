extern u32 D_03004154;
extern u8 D_030033F0[];
extern u8 D_03002AB0[];
extern u8 D_03004830[];

void sub_08021A28(s32 arg0, s32 arg1);
void sub_08021A90(s32 arg0, s32 arg1);
s32 sub_08033420(void);
void sub_080379D4(s32 arg0);
void sub_08040A74(s32 arg0);
u8 sub_08040A34(s32 arg0, s32 arg1, void *arg2);

void sub_080207A4(void) {
    s8 state;
    u16 *ptr;
    
    state = D_03004830[0x2C];
    if (state < 0) {
        sub_08021A28(2, 0x68);
        sub_08021A90(2, 0x68);
        
        ptr = (u16 *)D_03004154;
        ptr[1] = 0x0A88;
        ptr[3] = 0xFC38;
        ptr[0x16] = 0xFE4C;
        ptr[9] = 3;
        ptr[0xB] = 3;
        
        D_03004830[0x2B] = D_03004830[0x2B] + 1;
    }
}

void sub_08021D60(void) {
    u8 *base;
    u8 *dest;
    
    if (!(D_030033F0[0] & 1)) {
        goto epilogue_code;
    }
    if ((sub_08033420() << 0x18) == 0) {
        goto function_exit;
    }
    D_03002AB0[0xB8] &= 0xBF;

epilogue_code:
    sub_08040A74(9);
    base = D_03004830;
    base[0x40] = 6;
    dest = base + 0x41;
    *dest = base[0x40] - 7;
    sub_080379D4(0x12);
    D_03004830[0x41] = 0x1E;

function_exit:
    return;
}

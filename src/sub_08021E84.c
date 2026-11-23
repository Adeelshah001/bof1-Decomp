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
    
    state = D_03004830[0x2C];
    if (state < 0) {
        sub_08021A28(2, 0x68);
        sub_08021A90(2, 0x68);
        
        ((u16 *)D_03004154)[1] = 0x0A88;
        ((u16 *)D_03004154)[3] = 0xFC38;
        ((u16 *)D_03004154)[0x16] = 0xFE4C;
        ((u16 *)D_03004154)[9] = 3;
        ((u16 *)D_03004154)[0xB] = 3;
        
        D_03004830[0x2B] = D_03004830[0x2B] + 1;
    }
}

void sub_08021D60(void) {
    if (!(D_030033F0[0] & 1)) {
        goto epilogue_code;
    }
    if ((sub_08033420() << 0x18) == 0) {
        goto function_exit;
    }
    D_03002AB0[0xB8] &= 0xBF;

epilogue_code:
    sub_08040A74(9);
    D_03004830[0x40] = 6;
    D_03004830[0x41] = D_03004830[0x40] - 7;
    sub_080379D4(0x12);
    D_03004830[0x41] = 0x1E;

function_exit:
    return;
}

void sub_08021DB8(void) {
    u8 sp0;
    u8 result;
    u32 val;
    
    result = sub_08040A34(0, 0xD, &sp0);
    if (result == 0) {
        D_03002AB0[0xB8] &= 0xFB;
        D_03004830[0x40] = result;
    }
    val = D_03004830[0x41] - 1;
    D_03004830[0x41] = (u8)val;
    if (val & 0x80) {
        sub_080379D4(0x12);
        D_03004830[0x41] = 0x1E;
    }
}

void sub_08021E84(void) {
    u8 sp0;
    u8 result;
    u32 val;
    
    result = sub_08040A34(0, 9, &sp0);
    if ((result << 0x18) == 0) {
        D_03004830[0x40] = 3;
        return;
    }
    val = D_03004830[0x41] - 1;
    D_03004830[0x41] = (u8)val;
    if (val & 0x80) {
        sub_080379D4(0x12);
        D_03004830[0x41] = 0x1E;
    }
}

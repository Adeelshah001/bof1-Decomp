
extern void (*D_080FBB44[])(void);

void sub_08044354(u8 arg0) {
    u8 value = arg0;
    void (**handlers)(void) = D_080FBB44;
    handlers[value >> 1]();
}

extern u16 D_030016E0[];
s32 sub_080675B8(s32 arg);

s32 sub_0804432C(void) {
    u16 val = D_030016E0[3];
    if ((val & 1) == 0) {
        return 2;
    }
    sub_080675B8(0);
    return 0xFF;
}

u8 sub_0804152C(void);
s32 sub_0805B404(s32 arg);
extern u8 D_03004410[];

s32 sub_080444C0(void) {
    switch (sub_0804152C()) {
        case 1:
            sub_0805B404(1);
            D_03004410[0xC] = 0;
            D_03004410[0xE] = 0;
            break;
        case 2:
            D_03004410[0xE] = 0xC;
            break;
    }
    return 0;
}

extern void (*D_080FBD54[])(void);
extern u8 D_03004620[];

s32 sub_080444FC(void) {
    u32 idx = D_03004620[0xB2];
    void (*func)(void) = D_080FBD54[idx];
    if (func != NULL) {
        func();
        D_03004410[0xE] = 0xE;
    }
    return 0;
}

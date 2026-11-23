
extern void (*D_080FBB44[])(void);

void sub_08044354(u8 arg0) {
    u8 value = arg0;
    void (**handlers)(void) = D_080FBB44;
    handlers[value >> 1]();
}

extern u16 D_030016E0[];
s32 sub_080675B8(s32);

s32 sub_0804432C(void) {
    if ((D_030016E0[3] & 1) == 0) {
        return 2;
    }
    sub_080675B8(0);
    return 0xFF;
}

u8 sub_0804152C(void);
s32 sub_0805B404(s32);
extern u8 D_03004410[];

s32 sub_080444C0(void) {
    u8 val = sub_0804152C();
    if (val == 1) {
        sub_0805B404(1);
        D_03004410[0xC] = 0;
        D_03004410[0xE] = 0;
    } else if (val == 2) {
        D_03004410[0xE] = 0xC;
    }
    return 0;
}

extern void (*D_080FBD54[])(void);
extern u8 D_03004620[];

s32 sub_080444FC(void) {
    void (*func)(void) = D_080FBD54[D_03004620[0xB2]];
    if (func != NULL) {
        func();
        D_03004410[0xE] = 0xE;
    }
    return 0;
}

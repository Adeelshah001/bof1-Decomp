extern u16 D_030016E0[];
extern u8 D_03004620[];
extern u8 D_0814BC86[];
extern u8 sub_0814C2A4[];
extern u8 D_081011E2[];

void sub_080379D4(s32);
s32 sub_08068B0C(void);
void sub_08059978(void);
void sub_0805B308(void *);
void sub_0805A9FC(void);
void sub_0805B568(s32, s32, s32, s32, s32);

s32 sub_08069580(void) {
    if (4 & D_030016E0[3]) {
        sub_080379D4(0x15);
        return sub_08068B0C();
    }
    if (3 & D_030016E0[3]) {
        sub_080379D4(2);
        sub_08059978();
        sub_0805B308(D_0814BC86 + 1);
        sub_0805A9FC();
        D_03004620[3] = 0xA;
    }
    return 0;
}

void sub_08069608(s32 arg0, s32 arg1, u16 arg2) {
    u8 **table = (u8 **)(sub_0814C2A4 + 0x20);
    sub_0805B568(arg0, arg1, 0, 0, table[arg2 >> 12][arg2 & 0xFF] + 0x3C0);
}

void sub_08069640(u16 arg0, s32 arg1) {
    sub_0805B568(((arg0 & 0x3E) << 2) - 8, ((arg0 & 0x7C0) >> 3) + 4, 0, 0, D_081011E2[arg1] + 0x3C0);
}

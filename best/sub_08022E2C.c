extern u8 D_030033F0[];
extern u8 D_03002AB0[];

s32 sub_08033420(void);
void sub_08053B34(void);
void sub_08004154(void);

void sub_08022748(void) {
    u32 func;
    u8 b;

    if (((u32)sub_08033420() << 24) != 0) {
        func = (u32)sub_08053B34;
        *(u32 *)(0x03002510 + 0x64) = func;
        *(u32 *)(0x03002510 + 0xF4) = func;
        *(u32 *)(0x03001870 + 0x64) = func;
        *(u32 *)(0x03001870 + 0x144) = func;
        D_030033F0[0] = 0xFF;
        b = D_03002AB0[0xB8];
        b = (u8)((b | 0x80) & 0xBF);
        D_03002AB0[0xB8] = b;
        D_03004830[0x40]++;
    }
}

void sub_08022E2C(void) {
    u8 i;
    u8 *base;
    u8 *rec;

    base = (u8 *)0x03002AB0;
    sub_08004154();
    for (i = 1; i <= 7; i++) {
        rec = base + i * 0x124;
        if (rec[0x3A] != 0) continue;
        if (!(rec[0xF0] & 0x40)) {
            rec[0xF0] |= 0x42;
        }
    }
}

extern u8 D_02020FC0[];
extern u8 D_020211C0[];
extern u8 D_03001864[];
extern u8 D_030033F0[];
extern u8 D_03002AB0[];

s32 sub_08033420(void);
void sub_08053B34(void);
void sub_0800312C(s32 arg0, s32 arg1);
void sub_08004154(void);

void sub_08022A98(void) {
    u8 val;
    u8 bit;

    val = D_03004830[0x41] - 1;
    D_03004830[0x41] = val;
    bit = val;
    if (bit == 0) {
        D_03004830[0x41] = 8;
        D_020211C0[0] = bit;
        D_02020FC0[0] = bit;
        D_020211C0[1] = bit;
        D_02020FC0[1] = bit;
        *(u16 *)0x03001864 = 0x17;
        D_03004830[0x40]++;
    }
}

void sub_08022748(void) {
    if (sub_08033420() != 0) {
        *(void (**)(void))((u8 *)0x03002510 + 0x64) = sub_08053B34;
        *(void (**)(void))((u8 *)0x03002510 + 0xF4) = sub_08053B34;
        *(void (**)(void))((u8 *)0x03001870 + 0x64) = sub_08053B34;
        *(void (**)(void))((u8 *)0x03001870 + 0x144) = sub_08053B34;
        D_030033F0[0] = 0xFF;
        D_03002AB0[0xB8] = (u8)((D_03002AB0[0xB8] | 0x80) & 0xBF);
        D_03004830[0x40]++;
    }
}

void sub_08022708(void) {
    D_03004830[0x41]--;
    if (D_03004830[0x41] == 0) {
        D_03003420[0x3A] &= 0x9F;
        sub_0800312C(0x10, 8);
        D_03004830[0x40]++;
    }
}

void sub_08022E2C(void) {
    u8 i;
    u8 *rec;

    sub_08004154();
    for (i = 1; i <= 7; i++) {
        rec = (u8 *)0x03002AB0 + i * 0x124;
        if (rec[0x3A] != 0) continue;
        if (!(rec[0xF0] & 0x40)) {
            rec[0xF0] |= 0x42;
        }
    }
}

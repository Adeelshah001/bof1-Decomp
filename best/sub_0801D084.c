extern u8 sub_08001770(s32 arg0);
extern void sub_080017EC(s32 arg0);
extern void sub_08004EA0(s32 arg0);
extern void sub_08005274(s32 arg0);
extern void sub_0801DBF0(u8 arg0);
extern void sub_0803ADA8(s32 arg0);

extern u8 D_03001694[];
extern u8 D_03001864[];
extern u8 D_030023DC[];
extern u8 D_03002500[];
extern u8 D_03002AB0[];
extern u8 D_030033D4[];
extern u8 D_03003410[];
extern u8 D_030040F0[];
extern u8 D_03004114[];
extern u8 D_0300482C[];
extern u8 D_03004830[];

void sub_08018A30(void) {
    u8 result = sub_08001770(0xA0);
    s8 state = (s8)D_03004830[0x2A];
    if (result != 0 || state == 3) {
        *(u16 *)D_03004114 = 0;
        return;
    }
    D_03004830[0x2A] = 3;
    D_03004830[0x2B] = result;
    D_03002AB0[0xB8] |= 0x04;
    *(u16 *)D_03004114 = result;
}

void sub_0801CE80(void) {
    s8 *state = (s8 *)&D_03004830[0x2C];
    if (*state == 0) {
        sub_08005274(7);
        *state = 1;
    }
    *(u16 *)D_030033D4 = 8;
    *(u16 *)D_03001864 = 0x17;
    *(u32 *)D_03001694 |= 0x80;
    if (D_030023DC[0] != 1) {
        *state = 0x40;
        D_03004830[0x2B]++;
    }
}

void sub_0801D084(void) {
    u8 *counter = &D_03004830[0x2C];
    s8 val = (s8)(*counter - 1);
    *counter = val;
    if (val == 0) {
        sub_080017EC(0xC8);
        sub_0803ADA8(0x13);
        sub_08004EA0(0x8551);
        *counter = 0x20;
        D_0300482C[0] = 0;
        D_03004830[0x2B]++;
    }
}

void sub_0801D0D0(void) {
    u8 *counter = &D_03004830[0x2D];
    *counter = 7;
    do {
        sub_0801DBF0(*counter);
        *counter = *counter - 1;
    } while ((s32)((s8)*counter) >= 0);
    *(u32 *)D_030040F0 = 0xF;
    *(u32 *)D_03002500 = 0xF;
    D_03003410[0] = 0x3F;
    D_03004830[0x2B]++;
}

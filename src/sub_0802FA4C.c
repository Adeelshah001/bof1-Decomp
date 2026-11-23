void sub_08037FC4(void *arg0, s32 arg1);

extern u8 D_03002AB0[];
extern u32 D_0202DBD0[];
extern u8 D_030023E0[];
extern u16 D_03004114[];
extern u8 D_03004408[];

s32 sub_0802EE1C(void *arg0) {
    u8 *b;

    *(u16 *)((u8 *)arg0 + 0x82) = *(u16 *)((u8 *)arg0 + 2);
    *(u16 *)((u8 *)arg0 + 0x86) = *(u16 *)((u8 *)arg0 + 6);
    *(u16 *)((u8 *)arg0 + 6) = *(u16 *)((u8 *)arg0 + 6) - 0x80;
    b = (u8 *)arg0 + 0xB8;
    *b &= 0xDF;
    b -= 0x77;
    *(u16 *)((u8 *)arg0 + 0x36) = (u16)*b;
    *b |= 0x30;
    sub_08037FC4(arg0, 0xC);
    *(u8 *)((u8 *)arg0 + 0x4D) = 2;
    return 0;
}

s32 sub_0802FA4C(void) {
    u8 i;
    u8 *rec;

    for (i = 1; i <= 3; i++) {
        rec = (u8 *)D_03002AB0 + i * 0x124;
        if (rec[0x3A] != 0 && (rec[0xF0] & 0x50) == 0 && (rec[0xBA] & 4) == 0)
            return 1;
    }
    return 0;
}

void sub_0803043C(void *arg0, s32 arg1) {
    u8 flag;

    *D_03004114 = 0;
    flag = 0xF0 & *(u8 *)(&D_0202DBD0[0xAE]);
    if (flag == 0x10) {
        if (*(u16 *)(D_030023E0 + 0xA4) != 0)
            return;
    } else if (flag != 0x40) {
        return;
    }
    if (flag == 0x40)
        *(u32 *)((u8 *)arg0 + 0xA4) = arg1;
    *(u8 *)((u8 *)arg0 + 0x4D) = 4;
    *(u8 *)((u8 *)arg0 + 0x50) = 0;
    *D_03004114 = 1;
}

void sub_0802D144(void *arg0) {
    u8 val;

    val = *(u8 *)((u8 *)arg0 + 0x3C);
    *(u8 *)((u8 *)arg0 + 0xB6) = val;
    switch (val) {
    case 3:
        *(u16 *)((u8 *)arg0 + 0x9E) = 0xFFFF;
        *(u16 *)((u8 *)arg0 + 0xA2) = -1;
        return;
    case 5:
        *(u16 *)((u8 *)arg0 + 0xB0) = *D_03004408;
        *(u32 *)((u8 *)arg0 + 0xA4) = 0;
        return;
    case 6:
        *(u16 *)((u8 *)arg0 + 0xAA) = 0xFFFF;
        *(u16 *)((u8 *)arg0 + 0xAE) = -1;
        return;
    default:
        return;
    }
}

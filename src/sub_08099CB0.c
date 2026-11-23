extern u8 D_03004F50[];
extern u8 D_08152E94[];
extern const char D_080A7C68[];
extern const char D_080A7C18[];
extern const char D_080A7C88[];

void sub_0809A0E4(u8 *);
void sub_08099BC4(u8 *);
void sub_08099BFC(u8 *);
void sub_08098F88(u8 *);
void sub_08098FF0(u8 *);
void sub_08099D10(u8 *);
void sub_08099D34(u8 *);
void sub_08099D50(u8 *);
void sub_0809A1B4(u8 *);
void sub_080352D0(const char *, const char *, s32, u8);

void sub_08099BDC(u8 *arg0) {
    *(u16 *)(arg0 + 0x38) = 0x160;
    arg0[0x54] = 3;
    arg0[0x4C] = 2;
    sub_0809A0E4(arg0);
}

void sub_08099B64(u8 *arg0) {
    switch (arg0[0x4C]) {
    case 0:
        sub_08099BC4(arg0);
        break;
    case 2:
        sub_08099BFC(arg0);
        break;
    case 4:
        sub_08098F88(arg0);
        break;
    case 6:
        sub_08098FF0(arg0);
        break;
    default:
        sub_080352D0(D_080A7C68, D_080A7C18, 0x24A, arg0[0x4C]);
        break;
    }
}

void sub_08099CB0(u8 *arg0) {
    switch (arg0[0x4C]) {
    case 0:
        sub_08099D10(arg0);
        break;
    case 2:
        sub_08099D34(arg0);
        break;
    case 4:
        sub_08099D50(arg0);
        break;
    case 6:
        sub_0809A1B4(arg0);
        break;
    default:
        sub_080352D0(D_080A7C88, D_080A7C18, 0x30A, arg0[0x4C]);
        break;
    }
}

void sub_08099AFC(u8 *arg0, u8 arg1, s16 *arg2, s16 *arg3) {
    u8 x;
    u8 idx;
    u8 val0;
    u8 val1;

    x = D_03004F50[0x5F];
    idx = (u8)(((((u32)x - 0x20) << 24) & 0xF0000000u) >> 26) + arg1;
    val0 = D_08152E94[idx];
    *(u16 *)(arg0 + 0x44) = (u16)(val0 << 8);
    *arg2 = (u16)(val0 | 0xF00);
    val1 = D_08152E94[idx + 1];
    *arg3 = (u16)(val1 | 0x2F00);
}

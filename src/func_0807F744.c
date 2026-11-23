extern void sub_0807F778(s32);
extern void sub_08002BBC(u8);

extern u16 D_050001E8[];
extern u16 D_050001F0[];
extern u16 D_050001F8[];

extern u8 D_0202DBD0[];
extern u8 D_03004584[];
extern u8 D_03004F50[];

void func_0807F744(void) {
    sub_0807F778(0xE);
}

void sub_0807F61C(void *arg0) {
    *(u16 *)((u8 *)arg0 + 0x46) = *(u16 *)((u8 *)arg0 + 2);
    *(u16 *)((u8 *)arg0 + 0x4A) = *(u16 *)((u8 *)arg0 + 6);
    *(u16 *)((u8 *)arg0 + 0x2C) = *(u16 *)((u8 *)arg0 + 6);
}

void sub_0807F5CC(s16 arg0, s16 arg1, s16 arg2) {
    *(u16 *)((u8 *)D_0202DBD0 + 0x290) = arg0;
    *(u16 *)((u8 *)D_0202DBD0 + 0x16) = arg1;
    *(u16 *)((u8 *)D_0202DBD0 + 0x1A) = arg2;
    *D_03004584 = 1;
    sub_08002BBC(D_03004F50[0x5B]);
}

s32 sub_08082F60(void *arg0) {
    u8 *base = arg0;
    u16 *val_ptr = (u16 *)(base + 0x38);
    u16 newval = *val_ptr + 1;
    u8 val = (u8)newval;
    s32 ret = 0;

    *val_ptr = newval;

    if (val > 0x77) ret = 1;

    if (val == 0x78) {
        (*(u8 *)(base + 0x50))++;
        return 0;
    }

    if ((val & 1) == 0) {
        u16 tmp = D_050001E8[0];
        D_050001E8[0] = D_050001F0[0];
        D_050001F0[0] = D_050001F8[0];
        D_050001F8[0] = tmp;
    }

    return ret;
}

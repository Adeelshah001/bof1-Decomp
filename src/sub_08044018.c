extern u8 D_0202DBD0[];

void sub_0804305C(s32);
void sub_08040AD0(u8, void *);

void sub_08044018(void) {
    D_0202DBD0[0x2BA] = 0;
    sub_08040AD0(D_0202DBD0[0x2BA], D_0202DBD0 + 0x24);
}

s32 sub_08043FC8(void) {
    sub_0804305C(6);
    D_0202DBD0[0x2BA] = 0;
    D_0202DBD0[0x2BB] = 0xFF;
    ((s8 *)D_0202DBD0)[0x2BC] = -1;
    ((s8 *)D_0202DBD0)[0x2BD] = -1;
    sub_08040AD0(0, D_0202DBD0 + 0x24);
    return 0;
}

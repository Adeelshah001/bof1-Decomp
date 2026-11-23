extern u8 D_0202DBF4[];
extern u8 D_03002AB0[];
extern u8 D_03002B98[];

void sub_08040AD0(u8, void *);
void sub_08033BBC(void *, void *, u8, u8);
void sub_08083EF0(void *, u8);
void sub_0805DA14(void *);

void sub_08044394(u8 arg0, u8 arg1, void *arg2, u8 *arg3) {
    u8 i;

    sub_08040AD0(arg0, arg2);
    if (!(arg1 & 0x80)) {
        sub_08033BBC(D_03002AB0, arg2, arg0, 0);
        sub_08083EF0(D_03002AB0, arg1);
        sub_0805DA14(D_03002AB0);
    }
    for (i = 0; i < 0x30; i++) {
        D_0202DBF4[*arg3 * 0x3C + i] = D_03002B98[i];
    }
    (*arg3)++;
}

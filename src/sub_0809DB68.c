
extern u32 D_081531A4[];
extern u8 D_03004410[];
extern void sub_080A0770(u32);
extern void sub_0805B404(s32);
extern void sub_0809E008(void);
extern u16 D_03005000[];
extern void sub_0805B1BC(void);

void sub_0809DB68(void) {
    u32 *table = D_081531A4;
    sub_080A0770(table[D_03004410[0x0F]]);
}

void sub_0809DB88(void) {
    sub_0809E008();
    D_03004410[0x0C] = 0;
    D_03004410[0x0E] = 0;
    sub_0805B404(1);
    sub_0805B404(2);
    sub_0805B404(3);
}

void sub_0809DAD8(void) {
    u16 temp = *D_03005000 - 1;
    *D_03005000 = temp;
    if (temp == 0) {
        *D_03005000 = 0x1E;
        D_03004410[0x0F]++;
    }
}

void sub_0809DAAC(void) {
    u16 temp;
    sub_0805B1BC();
    temp = *D_03005000 - 1;
    *D_03005000 = temp;
    if (temp == 0) {
        *D_03005000 = 0x1E;
        D_03004410[0x0F] = 0x11;
    }
}

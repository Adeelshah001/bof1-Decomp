
extern u32 D_08153180[];
extern u8 D_03004410[];
extern void sub_080A0770(u32);
extern void sub_0809DFF4(void);
extern u8 D_08152F54[];
extern u16 D_03005000[];
extern u8 D_03005080[];
extern u16 D_030016E0[];
extern void sub_080379D4(s32);
extern u32 D_08153188[];

void sub_0809D908(void) {
    u32 *table = D_08153180;
    sub_080A0770(table[D_03004410[0x0F]]);
}

void sub_0809D928(void) {
    s32 i;
    sub_0809DFF4();
    for (i = 0; i <= 0x0D; i++) {
        D_03005080[i] = D_08152F54[i];
    }
    *D_03005000 = 0x258;
    D_03004410[0x0F]++;
}

void sub_0809D8E0(void) {
    if (D_030016E0[3] & 3) {
        sub_080379D4(3);
        D_03004410[0x0E] = 0x15;
    }
}

void sub_0809D96C(void) {
    u32 *table = D_08153188;
    sub_080A0770(table[D_03004410[0x0F]]);
    if (D_030016E0[3] & 2) {
        sub_080379D4(3);
        D_03004410[0x0E] = 0x15;
    }
}

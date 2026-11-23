extern u8 D_03002AB0[];
extern u8 D_030023E0[];
extern u8 D_03004100[];
extern u8 D_03004114[];
extern u8 D_03004120[];
void sub_080327A4(void *arg0, void *arg1, void *arg2);
void sub_080102AC(s32 arg0, s32 arg1);

void sub_08010228(void) {
    u8 *p = D_03002AB0;
    u8 v;
    p[0xB8] = ((v = 4 + (p[0xB8] >> 8)), v | p[0xB8]);
    p = D_03004830;
    p[0x2B]++;
}

void sub_08010160(void) {
    u8 *p;
    u16 val;
    sub_080327A4(D_03002AB0, D_03004120, D_03004100);
    p = D_030023E0;
    val = *(u16 *)(p + 0xA4);
    if (val != 0x133) {
        if (val != 0xD9) {
            *(u16 *)D_03004114 = 0;
            return;
        }
        sub_080102AC(0x1C8, 0x6A6C);
        return;
    }
    sub_080102AC(0x1C8, 0xFFFFAB2C);
}

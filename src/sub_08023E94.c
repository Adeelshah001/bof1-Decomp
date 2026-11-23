extern u8 D_03002AB0[];
extern u8 D_030023E0[];
extern u8 D_03004114[];
extern u32 D_080F8E80[];
void sub_080240BC(u8 arg0);
void sub_08023F94(void *arg0);
s8 sub_08027990(void);

u8 sub_08023E94(void) {
    u8 *p;
    u8 result;
    if (sub_08027990() == 0) {
        p = D_030023E0;
        if (*(u16 *)(p + 0xA4) == 0)
            sub_080240BC((u8)*(u16 *)(p + 0xA4));
        sub_08023F94(D_080F8E80);
        result = D_03004114[0];
    } else {
        result = 1;
    }
    return result;
}

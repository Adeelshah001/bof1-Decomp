
extern u8 D_03004620[];
extern void *D_08100CC4[];
extern void *D_08100CD8[];
extern u8 D_03004760[];

void sub_0805CA64(void);
void sub_08068AF4(void);
s32 sub_0805A9FC(void);
void sub_0805B4CC(void);
s32 sub_080696B0(void);
s32 sub_08067C50(s32, s32);
s32 sub_080A0770(s32);

void sub_08061A50(void) {
    void **tbl = D_08100CC4;
    u8 *p = D_03004620;
    sub_080A0770((s32)tbl[p[4] >> 1]);
}

s32 sub_08061A94(void) {
    void **tbl = D_08100CD8;
    u8 *p = D_03004620;
    s32 res = sub_080A0770((s32)tbl[p[3] >> 1]);
    sub_08067C50(0xFA, 0x25A);
    return res;
}

void sub_08061ACC(void) {
    sub_0805CA64();
    sub_08068AF4();
}

s32 sub_08061ADC(void) {
    if (sub_0805A9FC() != 0) {
        D_03004760[0x1B] = 0;
        sub_0805B4CC();
        sub_0805CA64();
        return sub_080696B0();
    }
    return 0;
}

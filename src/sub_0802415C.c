extern u8 D_03004830[];
extern u32 D_080F8BF4[];
extern void sub_080A0770(u32);
extern void sub_080A0210(void *, void *, u32);
extern void sub_08027508(void);
extern void sub_08027534(void);
extern void sub_08028F48(u8);

void sub_0802415C(void) {
    sub_080A0770(D_080F8BF4[D_03004830[0x40]]);
}

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

void sub_0802411C(u16 arg0, u16 arg1) {
    u32 temp = arg0 + 0x081A0E7C;
    void *ptr1 = (void *)(temp);
    void *ptr2 = (void *)(0x02020FC0 + arg1);
    sub_080A0210(ptr1, ptr2, 8);
    sub_080A0210(ptr2, (void *)(0x020211C0 + arg1), 8);
}

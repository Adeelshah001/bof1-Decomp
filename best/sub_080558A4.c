extern u8 D_030023E0[];
extern void sub_08055B04(void);
extern void sub_0803A8EC(void *arg0);
extern void sub_08045504(void);

void sub_080558A4(void *arg0) {
    if (*(u16 *)(D_030023E0 + 0xA4) == 0x1B5) {
        *(u16 *)((u8 *)arg0 + 2) = (u16)(*(u16 *)((u8 *)arg0 + 2) + 8);
    }
    *(u32 *)((u8 *)arg0 + 0x64) = (u32)sub_08055B04;
}

void sub_080558CC(void *arg0) {
    void *e1 = arg0;
    void *e2 = arg0;
    if (*(u16 *)(D_030023E0 + 0xA4) == 0x1B5) {
        *(u16 *)((u8 *)e1 + 2) = (u16)(*(u16 *)((u8 *)e1 + 2) + 8);
    }
    *(u16 *)((u8 *)e2 + 6) = (u16)(*(u16 *)((u8 *)e2 + 6) + 0x10);
    *(u16 *)((u8 *)e2 + 0x2C) = (u16)(*(u16 *)((u8 *)e2 + 0x2C) - 8);
    *(u32 *)((u8 *)e2 + 0x64) = (u32)sub_08045504;
    sub_0803A8EC(e2);
}

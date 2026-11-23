typedef struct {
    u8 pad00[0xA4];
    u16 unkA4;
} Struct23E0;
extern Struct23E0 D_030023E0;

extern u32 sub_08055B04_addr;
extern void sub_08045504(void);
extern void sub_0803A8EC(void *arg0);

void sub_080558A4(void *arg0) {
    void *e = arg0;
    if (D_030023E0.unkA4 == 0x1B5) {
        *(u16 *)((u8 *)e + 2) = (u16)(*(u16 *)((u8 *)e + 2) + 8);
    }
    *(u32 *)((u8 *)e + 0x64) = sub_08055B04_addr;
}

void sub_080558CC(void *arg0) {
    void *p = arg0;
    void *q;
    if (D_030023E0.unkA4 == 0x1B5) {
        *(u16 *)((u8 *)p + 2) = (u16)(*(u16 *)((u8 *)p + 2) + 8);
    }
    q = p;
    *(u16 *)((u8 *)q + 6) = (u16)(*(u16 *)((u8 *)q + 6) + 0x10);
    *(u16 *)((u8 *)q + 0x2C) = (u16)(*(u16 *)((u8 *)q + 0x2C) - 8);
    *(u32 *)((u8 *)q + 0x64) = (u32)sub_08045504;
    sub_0803A8EC(q);
}

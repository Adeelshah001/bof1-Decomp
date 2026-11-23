typedef struct {
    u8 pad00[0xA4];
    u16 unkA4;
} Struct23E0;
extern Struct23E0 D_030023E0;

extern void sub_08055AD4(void *arg0);
extern void sub_08055B04(void);
extern void sub_08045504(void);
extern void sub_0803A8EC(void *arg0);
extern s32 sub_08055660(u8 arg0);
extern void sub_08055A98(void);

void sub_080558A4(void *arg0) {
    if (D_030023E0.unkA4 == 0x1B5) {
        *(u16 *)((u8 *)arg0 + 2) = (u16)(*(u16 *)((u8 *)arg0 + 2) + 8);
    }
    *(u32 *)((u8 *)arg0 + 0x64) = (u32)sub_08055B04;
}

void sub_080558CC(void *arg0) {
    void *p1 = arg0;
    void *p2 = arg0;
    if (D_030023E0.unkA4 == 0x1B5) {
        *(u16 *)((u8 *)p1 + 2) = (u16)(*(u16 *)((u8 *)p1 + 2) + 8);
    }
    *(u16 *)((u8 *)p2 + 6) = (u16)(*(u16 *)((u8 *)p2 + 6) + 0x10);
    *(u16 *)((u8 *)p2 + 0x2C) = (u16)(*(u16 *)((u8 *)p2 + 0x2C) - 8);
    *(u32 *)((u8 *)p2 + 0x64) = (u32)sub_08045504;
    sub_0803A8EC(p2);
}

void sub_0805590C(void *arg0) {
    void *p = arg0;
    if ((sub_08055660(*(u8 *)((u8 *)p + 0x5C)) << 24) != 0) {
        *(u32 *)((u8 *)p + 0x64) = (u32)sub_08055A98;
    }
    sub_0803A8EC(p);
}

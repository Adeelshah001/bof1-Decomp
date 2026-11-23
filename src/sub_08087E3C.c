extern void sub_080380F4(void *, u32, s32, s32);
extern void sub_08087EB8(void *);

void sub_08087E3C(void *arg0) {
    u32 val;
    u16 half;

    val = *(u32 *)((u8 *)arg0 + 0x78);
    sub_080380F4(arg0, val, 8, 8);
    *(u8 *)((u8 *)arg0 + 0x54) = 4;
    *(u8 *)((u8 *)arg0 + 0x4D) = 0xC;
    half = 0xB0 * 2;
    *(u16 *)((u8 *)arg0 + 0x38) = half;
    sub_08087EB8(arg0);
}

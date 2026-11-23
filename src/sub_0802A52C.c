typedef void (*Func_080F97D8)(u8, u16, u16);
extern const u8 D_080F97D8[];

void sub_0802A52C(u8 arg0, u32 arg1, u16 arg2, u16 arg3) {
    const u8 *table = D_080F97D8;
    (*(const Func_080F97D8 *)(table + (arg1 & 0xFC)))(arg0, arg2, arg3);
}

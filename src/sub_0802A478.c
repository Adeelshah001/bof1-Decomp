typedef void (*Func_080F97D8)(u8, u16, u16);
extern const Func_080F97D8 D_080F97D8[];

void sub_0802A52C(u8 arg0, u8 arg1, u16 arg2, u16 arg3) {
    D_080F97D8[arg1 & 0x3F](arg0, arg2, arg3);
}

extern u8 D_0300418C;

u16 sub_0802A4F8(u16 arg0) {
    u8 tmp = ((arg0 & 0x1C00) >> 10) + D_0300418C;
    return (arg0 & 0x3FF) | (tmp << 12) | ((arg0 >> 14) << 10);
}

u8 sub_08029B84(u16, u16 *, u16 *, u8 *);

s32 sub_0802A4B8(u16 arg0, u16 arg1, u16 arg2) {
    u16 a;
    u16 b;
    u8 c;

    if (sub_08029B84(arg0, &a, &b, &c) && a == arg1 && b == arg2) {
        return 1;
    }
    return 0;
}

typedef struct {
    u8 pad00[0xC5];
    u8 unkC5;
} Struct_0802A478;

void sub_080379D4(u8);

void sub_0802A478(Struct_0802A478 *arg0) {
    u16 a;
    u16 b;
    u8 c;

    if (sub_08029B84(arg0->unkC5, &a, &b, &c)) {
        sub_0802A52C(2, c, a, b);
        arg0->unkC5 = 0;
        sub_080379D4(0x11);
    }
}

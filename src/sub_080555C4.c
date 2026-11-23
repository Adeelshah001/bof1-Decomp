/* machine draft (m2c) for agbcc -O2 -mthumb-interwork, tried by autopilot */
#ifndef M2C_DEFINES
#define M2C_DEFINES
typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#define M2C_ERROR(desc) (0)
#define M2C_CARRY 0
#define M2C_OVERFLOW(a) (0)
#endif

M2C_UNK sub_080379D4(s32);                          /* extern */
M2C_UNK sub_0803A8EC(void *);                       /* extern */
s32 sub_08055660(u8);                               /* extern */
extern M2C_UNK sub_080462E0;

void sub_080555C4(void *arg0) {
    M2C_FIELD(arg0, s16 *, 0x2C) = (s16) (M2C_FIELD(arg0, u16 *, 6) - 0x90);
    if ((sub_08055660(M2C_FIELD(arg0, u8 *, 0x5C)) << 0x18) != 0) {
        M2C_FIELD(arg0, u8 *, 0x3B) = (u8) (M2C_FIELD(arg0, u8 *, 0x3B) - 1);
        sub_080379D4(0x14);
        M2C_FIELD(arg0, M2C_UNK **, 0x64) = &sub_080462E0;
        M2C_FIELD(arg0, s16 *, 0x2C) = (s16) (M2C_FIELD(arg0, u16 *, 6) - 0x90);
    } else {
        sub_0803A8EC(arg0);
    }
    M2C_FIELD(arg0, u8 *, 0x41) = (u8) ((0xCF & M2C_FIELD(arg0, u8 *, 0x41)) | 0x20);
}

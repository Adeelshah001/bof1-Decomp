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

M2C_UNK sub_0803828C(void *, s32, u16, u8);         /* extern */
M2C_UNK sub_0803A8EC(void *);                       /* extern */
M2C_UNK sub_08053C00(void *);                       /* extern */
extern M2C_UNK sub_08053C20;

void sub_08053AD4(void *arg0) {
    u8 temp_r0;

    sub_0803828C(arg0, arg0 + 4, M2C_FIELD(arg0, u16 *, 0x38), M2C_FIELD(arg0, u8 *, 0x61));
    temp_r0 = M2C_FIELD(arg0, u8 *, 0x54) - 1;
    M2C_FIELD(arg0, u8 *, 0x54) = temp_r0;
    if ((temp_r0 << 0x18) == 0) {
        M2C_FIELD(arg0, s16 *, 0x46) = (s16) ((0xFFF0 & M2C_FIELD(arg0, u16 *, 6)) | 0xC);
        M2C_FIELD(arg0, u16 *, 0x2C) = (u16) (M2C_FIELD(arg0, u16 *, 0x2C) + M2C_FIELD(arg0, u8 *, 0x55));
        sub_08053C00(arg0);
        M2C_FIELD(arg0, M2C_UNK **, 0x64) = &sub_08053C20;
    }
    sub_0803A8EC(arg0);
}

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
M2C_UNK sub_08082B68(void *);                       /* extern */
M2C_UNK sub_08093640(void *);                       /* extern */

void sub_080963DC(void *arg0) {
    *(s16 *)0x03001864 = 0x17;
    sub_080379D4(0x22);
    M2C_FIELD(arg0, s32 *, 0x44) = 0x100;
    sub_08082B68(arg0);
    sub_08093640(arg0);
    M2C_FIELD(arg0, u8 *, 0x4C) = (u8) (M2C_FIELD(arg0, u8 *, 0x4C) + 1);
}

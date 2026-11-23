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

M2C_UNK sub_08037FC4(void *, s32);                  /* extern */
M2C_UNK sub_08048284(void *, s32, s32, s32);        /* extern */
M2C_UNK sub_080482D8();                             /* extern */
extern M2C_UNK sub_0804AC0C;

void sub_080485F0(void *arg0) {
    sub_080482D8();
    M2C_FIELD(arg0, M2C_UNK **, 0x64) = &sub_0804AC0C;
    M2C_FIELD(arg0, s16 *, 0x2A) = 0xEA;
    sub_08048284(arg0, 8, 0, 0);
    sub_08037FC4(arg0, 0);
}

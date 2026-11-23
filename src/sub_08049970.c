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

M2C_UNK sub_08049C40(void *, s32, s32);             /* extern */
M2C_UNK sub_08049EAC(void *, s32, s32);             /* extern */
s32 sub_08049F34(void *, s32);                      /* extern */
extern M2C_UNK sub_08049CC0;

void sub_08049970(void *arg0) {
    if ((sub_08049F34(arg0, 0x87) << 0x18) != 0) {
        M2C_FIELD(arg0, M2C_UNK **, 0x64) = &sub_08049CC0;
        sub_08049C40(arg0, 0xC0, 0x3E);
        sub_08049EAC(arg0, 4, 4);
    }
}

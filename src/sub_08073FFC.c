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

M2C_UNK sub_0806B028(s32, s32);                     /* extern */
M2C_UNK sub_0807CB2C();                             /* extern */

void sub_08073FFC(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x54) = arg1;
    M2C_FIELD(arg0, s8 *, 0x12) = 0;
    *(s8 *)0x0300457C = 0x10;
    sub_0806B028(arg1, 0);
    M2C_FIELD(arg0, u8 *, 0xF) = (u8) M2C_FIELD(arg0, u8 *, 0xC);
    *(s8 *)0x03004754 = 1;
    M2C_FIELD(arg0, s8 *, 0x12) = 0;
    sub_0807CB2C();
}

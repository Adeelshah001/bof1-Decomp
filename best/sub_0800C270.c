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

s8 sub_08035B50();                                  /* extern */

void sub_0800C270(void) {
    s8 temp_r0;

    *(s8 *)0x03002C35 = 2;
    *(s8 *)0x03002D59 = 2;
    M2C_FIELD((void *)0x03002BD4, s16 *, 2) = 0x1018;
    M2C_FIELD((void *)0x03002CF8, s16 *, 2) = 0x1008;
    M2C_FIELD((void *)0x03002BD4, s16 *, 6) = 0x89C;
    M2C_FIELD((void *)0x03002CF8, s16 *, 6) = 0x89C;
    M2C_FIELD((void *)0x030045B0, s8 *, 2) = 8;
    temp_r0 = sub_08035B50();
    *(s16 *)0x0300413C = 0x78;
    *(s8 *)0x0300485C = temp_r0;
    *(u8 *)0x0300485B += 1;
}

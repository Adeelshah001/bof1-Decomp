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

M2C_UNK sub_0800518C(s32, s32, s32);                /* extern */
M2C_UNK sub_08037A74(s32);                          /* extern */

void sub_0800F644(void) {
    sub_08037A74(0x800);
    *(u16 *)0x03002488 |= 0x8000;
    *(s8 *)0x03004861 = 3;
    M2C_FIELD((void *)0x0300485B, s8 *, 0) = 0;
    M2C_FIELD((void *)0x0300485B, s8 *, 1) = 0;
    M2C_FIELD(((void *)0x0300485B + 1), s8 *, 1) = 0;
    *(s8 *)0x0300485A = 1;
    sub_0800518C(0x184, 0x758, 0xFFFFC9BC);
    *(u8 *)0x03002AEA &= 0xBF;
    *(u8 *)0x03002C0E &= 0xBF;
    *(u8 *)0x03002D32 &= 0xBF;
    *(u8 *)0x03002E56 &= 0xBF;
    *(u8 *)0x0300345A &= 0xBF;
    *(u8 *)0x03002B68 &= 0x7F;
}

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

s32 sub_08001770(s32);                              /* extern */

void sub_0800EDAC(void) {
    u16 temp_r2;

    temp_r2 = *(u16 *)0x03002484;
    if ((temp_r2 != 0x133) && (temp_r2 != 0x10D) && (temp_r2 != 0x10E) && (temp_r2 != 0x10F)) {
        M2C_FIELD((void *)0x0300485C, s8 *, 0) = 0;
        M2C_FIELD((void *)0x0300485C, s8 *, 1) = 0;
        if ((temp_r2 == 0xC7) && ((sub_08001770(0x6C) << 0x18) == 0) && ((sub_08001770(0x6F) << 0x18) != 0)) {
            M2C_FIELD((void *)0x0300485A, s8 *, 0) = 7;
            M2C_FIELD((void *)0x0300485A, s8 *, 1) = 6;
        }
    }
}

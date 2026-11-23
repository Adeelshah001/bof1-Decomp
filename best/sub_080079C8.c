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

M2C_UNK sub_08007548(s32, s32);                     /* extern */

void sub_080079C8(void) {
    s8 temp_r2;

    temp_r2 = *(s8 *)0x0300485C;
    if (temp_r2 == 0) {
        *(s16 *)0x03004E18 = 0x7F80;
        *(s16 *)0x03004E08 = (s16) temp_r2;
        *(s16 *)0x03004E14 = (s16) temp_r2;
        *(s16 *)0x03004E0C = (s16) temp_r2;
        *(s8 *)0x0300485C = 8;
        sub_08007548(0, 0);
        sub_08007548(1, 0);
        sub_08007548(2, 0);
        sub_08007548(3, 0);
        *(u8 *)0x0300485B += 1;
    }
}

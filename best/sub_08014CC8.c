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

M2C_UNK sub_080017EC(s32);                          /* extern */
M2C_UNK sub_08013874(s32, s32, s32);                /* extern */
M2C_UNK sub_08013990();                             /* extern */
M2C_UNK sub_08037FC4(s32, s32);                     /* extern */

void sub_08014CC8(void) {
    sub_08013990();
    sub_08013874(0x03003420, 0x278, 0xFFFFB2CC);
    sub_08013874(0x03003520, 0x278, 0xFFFFB2AC);
    sub_08013874(0x030034A0, 0x278, 0xFFFFB2BC);
    sub_08037FC4(0x030035A0, 0x1A);
    sub_080017EC(0x91);
    *(u8 *)0x0300485B += 1;
}

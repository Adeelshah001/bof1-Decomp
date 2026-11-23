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

M2C_UNK sub_08073320();                             /* extern */
M2C_UNK sub_08074C9C();                             /* extern */
M2C_UNK sub_08074CC4();                             /* extern */

void sub_08074C70(void *arg0) {
    u8 temp_r1;

    temp_r1 = M2C_FIELD(arg0, u8 *, 1);
    switch (temp_r1) {                              /* irregular */
    case 0:
        sub_08074C9C();
        return;
    case 2:
        sub_08073320();
        return;
    case 4:
        sub_08074CC4();
        return;
    }
}

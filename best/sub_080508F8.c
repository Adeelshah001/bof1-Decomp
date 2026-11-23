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

s32 sub_08038058(s32);                              /* extern */
M2C_UNK sub_0803A974(void *);                       /* extern */
M2C_UNK sub_08050638(void *);                       /* extern */
M2C_UNK sub_080506C0(void *);                       /* extern */
M2C_UNK sub_08050838(void *);                       /* extern */
M2C_UNK sub_08050870(void *);                       /* extern */

void sub_080508F8(void *arg0) {
    s16 temp_r0;

    if ((sub_08038058(2) << 0x18) == 0) {
        sub_0803A974(arg0);
        return;
    }
    temp_r0 = 3 & M2C_FIELD((void *)0x03004830, u16 *, 0x10);
    M2C_FIELD(arg0, s16 *, 0x5A) = temp_r0;
    switch (temp_r0) {                              /* irregular */
    case 0:
        sub_08050870(arg0);
        return;
    case 1:
        sub_08050638(arg0);
        return;
    case 2:
        sub_080506C0(arg0);
        return;
    default:
        sub_08050838(arg0);
        return;
    }
}

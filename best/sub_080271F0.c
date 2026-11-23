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

M2C_UNK sub_08027A00(void *);                       /* extern */

s32 sub_080271F0(void *arg0) {
    u16 temp_r1;

    if (M2C_FIELD(arg0, u16 *, 6) == 0xF15C) {
        temp_r1 = M2C_FIELD(arg0, u16 *, 2);
        switch (temp_r1) {                          /* irregular */
        case 0x1D68:
        case 0x1D98:
        case 0x1D58:
            sub_08027A00(arg0);
            break;
        case 0x1DA8:
            sub_08027A00(arg0);
            break;
        }
    }
    return 0;
}

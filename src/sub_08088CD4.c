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

M2C_UNK sub_08037FC4(void *, s32);                  /* extern */
M2C_UNK sub_08083BB4(void *);                       /* extern */

void sub_08088CD4(void *arg0) {
    s32 var_r1;
    u8 temp_r5;

    temp_r5 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x74), u8 *, 0x3A);
    if (temp_r5 == 0) {
        sub_08083BB4(arg0);
        M2C_FIELD(arg0, u8 *, 0x4D) = temp_r5;
        var_r1 = 2;
        if (M2C_FIELD((arg0 + 0x4D), u8 *, 0x8B) != 0x62) {
            var_r1 = 4;
        }
        sub_08037FC4(arg0, var_r1);
    }
}

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

M2C_UNK sub_08087488(void *);                       /* extern */
M2C_UNK sub_08087494(void *, s32);                  /* extern */
M2C_UNK sub_080874B0(void *);                       /* extern */
M2C_UNK sub_080874D4(void *);                       /* extern */

void sub_08087444(void *arg0) {
    u8 temp_r0;
    u8 temp_r0_2;

    temp_r0 = M2C_FIELD(arg0, u8 *, 0xE0);
    if (temp_r0 == 8) {
        sub_080874D4(arg0);
        return;
    }
    if (temp_r0 == 0xA) {
        temp_r0_2 = M2C_FIELD(arg0, u8 *, 0xE1);
        if (temp_r0_2 == 2) {
            sub_08087488(arg0);
            return;
        }
        if (temp_r0_2 != 1) {
            sub_080874B0(arg0);
            return;
        }
        goto block_7;
    }
block_7:
    sub_08087494(arg0, 8);
}

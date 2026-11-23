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

M2C_UNK sub_08074448(void *, s32);                  /* extern */
s32 sub_08084A38(void *, void *);                   /* extern */

void sub_080743FC(void *arg0, s32 arg1, void *arg2) {
    u8 temp_r0;

    M2C_FIELD(arg0, s32 *, 0x54) = arg1;
    M2C_FIELD(arg2, s32 *, 0x78) = arg1;
    M2C_FIELD(arg0, s8 *, 2) = 8;
    if ((M2C_FIELD(arg2, u8 *, 0xE0) == 2) && (sub_08084A38(arg0, arg2) == 0)) {
        sub_08074448(arg0, 0x1E);
        return;
    }
    temp_r0 = M2C_FIELD(arg2, u8 *, 0xE0);
    if ((temp_r0 == 0x14) || (temp_r0 == 0x16)) {
        sub_08074448(arg0, 0x1C);
    }
}

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

M2C_UNK sub_080382F8(void *);                       /* extern */
M2C_UNK sub_08038360(void *);                       /* extern */

void sub_08037F5C(void *arg0) {
    u32 temp_r1;
    u32 temp_r2;
    u32 temp_r2_2;
    u32 temp_r2_3;
    u32 temp_r2_4;

    temp_r2 = (u32) (M2C_FIELD(arg0, u32 *, 0x44) << 8) >> 0x10;
    if (((temp_r2 != 0) && !(temp_r2 & 0x8000)) || ((temp_r1 = M2C_FIELD(arg0, u32 *, 0x48), temp_r2_2 = (u32) (temp_r1 << 8) >> 0x10, (temp_r2_2 != 0)) && !(temp_r2_2 & 0x8000))) {
        sub_08038360(arg0);
        return;
    }
    temp_r2_3 = (u32) (M2C_FIELD(arg0, u32 *, 0x44) << 8) >> 0x10;
    if (temp_r2_3 != 0) {
        M2C_FIELD(arg0, u32 *, 0x44) = (u32) ((u32) ((0 - temp_r2_3) << 0x10) >> 8);
    }
    temp_r2_4 = (u32) (temp_r1 << 8) >> 0x10;
    if (temp_r2_4 != 0) {
        M2C_FIELD(arg0, u32 *, 0x48) = (u32) ((u32) ((0 - temp_r2_4) << 0x10) >> 8);
    }
    M2C_FIELD(arg0, s8 *, 0x51) = 2;
    sub_080382F8(arg0);
}

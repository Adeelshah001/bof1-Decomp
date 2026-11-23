/* machine draft (m2c) for agbcc -mthumb-interwork -O2, tried by autopilot */
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

s32 sub_0807CE0C(void *arg0) {
    void *temp_r2;

    temp_r2 = M2C_FIELD(arg0, void **, 0x78);
    if (((u32) M2C_FIELD(temp_r2, u8 *, 2) >= (u32) M2C_FIELD(arg0, u8 *, 2)) && ((u32) (u8) (M2C_FIELD(temp_r2, u8 *, 6) + 0x10) >= (u32) M2C_FIELD(arg0, u8 *, 6))) {
        return 1;
    }
    return 0;
}

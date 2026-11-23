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

void *sub_0803ED98();                               /* extern */

void sub_08007548(u16 arg0, s32 arg1) {
    u16 temp_r4;
    void *temp_r0;

    temp_r4 = arg0;
    temp_r0 = sub_0803ED98();
    *(void **)0x03000840 = temp_r0;
    if (temp_r0 != NULL) {
        M2C_FIELD(temp_r0, s8 *, 0x3B) = (s8) temp_r4;
        M2C_FIELD(*(void **)0x03000840, s8 *, 0x3E) = (s8) (temp_r4 >> 8);
        M2C_FIELD(*(void **)0x03000840, s8 *, 0x3A) = 1;
        M2C_FIELD(*(void **)0x03000840, s8 *, 0x3C) = 0x12;
        M2C_FIELD(*(void **)0x03000840, s32 *, 0xD4) = arg1;
    }
}

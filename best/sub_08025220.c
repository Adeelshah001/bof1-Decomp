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

void sub_08025220(void) {
    u16 temp_r1;

    temp_r1 = M2C_FIELD((void *)0x03002510, u16 *, 6) + 1;
    M2C_FIELD((void *)0x03002510, u16 *, 6) = temp_r1;
    if ((u32) (temp_r1 << 0x10) > 0xF5970000U) {
        *(u8 *)0x03004870 += 1;
    }
}

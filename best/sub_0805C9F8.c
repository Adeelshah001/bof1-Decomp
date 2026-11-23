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

s32 sub_0805C9F8(void) {
    s32 temp_r1;

    temp_r1 = *(s32 *)0x03002B44;
    if ((0xFFFF0000 & temp_r1) && ((3 & M2C_FIELD(M2C_FIELD(temp_r1, void **, 0x64), u8 *, 1)) == 1)) {
        return 0;
    }
    return 1;
}

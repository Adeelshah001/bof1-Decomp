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

s32 sub_080A44FC(s32 arg0) {
    s32 *var_r0;
    void *temp_r1;

    temp_r1 = *(void **)0x08318774;
    if (arg0 == M2C_FIELD(M2C_FIELD(temp_r1, void **, 4), s16 *, 0xE)) {
        var_r0 = (s32 *)0x03001144;
        goto block_7;
    }
    if (arg0 == M2C_FIELD(M2C_FIELD(temp_r1, void **, 8), s16 *, 0xE)) {
        var_r0 = (s32 *)0x03001148;
        goto block_7;
    }
    if (arg0 != M2C_FIELD(M2C_FIELD(temp_r1, void **, 0xC), s16 *, 0xE)) {
        return arg0 - 0x20;
    }
    var_r0 = (s32 *)0x0300114C;
block_7:
    return *var_r0;
}

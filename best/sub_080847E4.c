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

void sub_080847E4(void *arg0, void *arg1) {
    u16 var_r1;
    u16 var_r2;
    void *var_r4;

    if (!(M2C_FIELD(arg1, u8 *, 0xF0) & 0x20)) {
        if ((M2C_FIELD(arg1, u8 *, 0xE2) & 0xF0) == 0x80) {
            var_r1 = 0xFF & M2C_FIELD(arg0, u16 *, 0x24);
            M2C_FIELD(arg0, u16 *, 0x24) = var_r1;
            var_r4 = (void *)0x03004EC0;
            goto block_4;
        }
    } else {
        var_r1 = 0xFF & M2C_FIELD(arg0, u16 *, 0x24);
        M2C_FIELD(arg0, u16 *, 0x24) = var_r1;
        var_r4 = (void *)0x03004F18;
block_4:
        var_r2 = M2C_FIELD(var_r4, u16 *, 2) + var_r1;
        if ((u32) var_r2 > 0x3E6U) {
            M2C_FIELD(arg0, u16 *, 0x24) = (u16) (var_r2 + 0xFFFFFC19);
            var_r2 = 0x3E7;
        }
        M2C_FIELD(var_r4, u16 *, 2) = var_r2;
    }
}

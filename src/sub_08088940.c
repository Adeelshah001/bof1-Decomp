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

M2C_UNK sub_0807B248(void *);                       /* extern */

void sub_08088940(void *arg0) {
    u8 temp_r0;
    u8 temp_r0_2;
    u8 var_r1;
    u8 var_r2;
    void *temp_r1;
    void *temp_r2;

    temp_r2 = M2C_FIELD(arg0, void **, 0xD0);
    temp_r1 = M2C_FIELD(arg0, void **, 0xD4);
    temp_r0 = M2C_FIELD(arg0, u8 *, 2);
    M2C_FIELD(temp_r2, u8 *, 2) = temp_r0;
    M2C_FIELD(temp_r1, u8 *, 2) = temp_r0;
    temp_r0_2 = M2C_FIELD(arg0, u8 *, 6);
    M2C_FIELD(temp_r2, u8 *, 6) = temp_r0_2;
    M2C_FIELD(temp_r1, u8 *, 6) = temp_r0_2;
    var_r1 = M2C_FIELD(arg0, u8 *, 0x41);
    var_r2 = var_r1;
    if (var_r1 != 0xE) {
        var_r2 = 0xA;
        var_r1 = 0xC;
    }
    M2C_FIELD(M2C_FIELD(arg0, void **, 0xD4), u8 *, 0x41) = var_r2;
    M2C_FIELD(M2C_FIELD(arg0, void **, 0xD0), u8 *, 0x41) = var_r1;
    if (!(4 & M2C_FIELD(arg0, u8 *, 0xF1))) {
        sub_0807B248(arg0);
    }
}

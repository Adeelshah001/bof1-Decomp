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

M2C_UNK sub_0807B248();                             /* extern */
M2C_UNK sub_08083300(void *, s32);                  /* extern */
M2C_UNK sub_08088CC4(void *);                       /* extern */

void sub_08088438(void *arg0) {
    s32 var_r1;
    u8 temp_r1;

    sub_0807B248();
    temp_r1 = M2C_FIELD(arg0, u8 *, 0x54) - 1;
    M2C_FIELD(arg0, u8 *, 0x54) = temp_r1;
    if ((temp_r1 << 0x18) == 0) {
        M2C_FIELD(arg0, s8 *, 0x4D) = 8;
        var_r1 = 0xC;
        if (M2C_FIELD(arg0, u8 *, 0xD8) != 0x62) {
            var_r1 = 0xE;
        }
        sub_08083300(arg0, var_r1);
        sub_08088CC4(arg0);
        return;
    }
    if (temp_r1 & 1) {
        M2C_FIELD(arg0, s8 *, 0x41) = 0xE;
        return;
    }
    sub_08088CC4(arg0);
}

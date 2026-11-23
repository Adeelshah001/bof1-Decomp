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

M2C_UNK sub_080189B8(s8, s32, u8);                  /* extern */

void sub_08019A10(s8 arg0, u8 arg1) {
    s8 temp_r2;
    s8 temp_r3;
    u8 temp_r4;

    temp_r4 = arg1;
    temp_r2 = arg0;
    temp_r3 = *(u8 *)0x0300485C & temp_r2;
    if (temp_r3 != 0) {
        sub_080189B8(temp_r2, 0x20, temp_r4);
        return;
    }
    *(s8 *)0x03002B11 = temp_r3;
    *(s8 *)0x03002C35 = temp_r3;
    *(s8 *)0x03002D59 = temp_r3;
    *(s8 *)0x03002E7D = temp_r3;
    sub_080189B8(temp_r2, 0x20, temp_r4);
}

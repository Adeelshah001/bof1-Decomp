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

M2C_UNK sub_08030B28(s32);                          /* extern */

void sub_0802FEE0(void) {
    s32 temp_r3;
    s32 temp_r4;
    s32 temp_r4_2;

    *(s8 *)0x030043BC = 0;
    sub_08030B28(0x03002AB0);
    if (*(u8 *)0x03002C0E != 0) {
        temp_r3 = 0x50 & *(u8 *)0x03002CC4;
        if (temp_r3 == 0) {
            *(u8 *)0x03002C8C &= 0xFB;
            *(s32 *)0x03002C5C = temp_r3;
            *(s16 *)0x03002C20 = 2;
            *(s16 *)0x03002C24 = (s16) temp_r3;
        }
    }
    if (*(u8 *)0x03002D32 != 0) {
        temp_r4 = 0x50 & *(u8 *)0x03002DE8;
        if (temp_r4 == 0) {
            *(u8 *)0x03002DB0 &= 0xFB;
            *(s32 *)0x03002D80 = temp_r4;
            *(s16 *)0x03002D44 = 2;
            *(s16 *)0x03002D48 = (s16) temp_r4;
        }
    }
    if (*(u8 *)0x03002E56 != 0) {
        temp_r4_2 = 0x50 & *(u8 *)0x03002F0C;
        if (temp_r4_2 == 0) {
            *(u8 *)0x03002ED4 &= 0xFB;
            *(s32 *)0x03002EA4 = temp_r4_2;
            *(s16 *)0x03002E68 = 2;
            *(s16 *)0x03002E6C = (s16) temp_r4_2;
        }
    }
}

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

void sub_08007A38(void) {
    s8 temp_r1;

    temp_r1 = *(s8 *)0x0300485C;
    if (temp_r1 == 0) {
        *(s8 *)0x0300178C = temp_r1;
        *(s32 *)0x030040F0 = (s32) temp_r1;
        *(s32 *)0x03003FB0 = (s32) temp_r1;
        *(s32 *)0x03002500 = (s32) temp_r1;
        *(s8 *)0x03003410 = 0xA3;
        *(s8 *)0x0300485C = 4;
        *(u8 *)0x0300485B += 1;
    }
}

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

void sub_08017E10(void) {
    u16 temp_r0;

    temp_r0 = M2C_FIELD((void *)0x03002AB0, u16 *, 6) + 0x30;
    *(u16 *)0x0300413C = temp_r0;
    M2C_FIELD((void *)0x03002AB0, u16 *, 6) = temp_r0;
    M2C_FIELD((void *)0x03002AB0, u16 *, 0x2C) = temp_r0;
    M2C_FIELD((void *)0x03001870, s16 *, 6) = 0x38;
    *(s16 *)0x03003674 = 0x1001;
    *(s16 *)0x030036F4 = 0x1001;
    *(s16 *)0x0300367C = 1;
    *(s16 *)0x030036FC = 1;
    *(s8 *)0x03003696 = 0;
    *(s8 *)0x03003716 = 0;
    *(s8 *)0x0300485C = 0x60;
    *(u8 *)0x0300485B += 1;
}

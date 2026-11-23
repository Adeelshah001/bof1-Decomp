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

M2C_UNK sub_0803414C(s32);                          /* extern */

void sub_080339F4(void) {
    M2C_FIELD((void *)0x03002AFC, s16 *, 0) = 0;
    M2C_FIELD((void *)0x03002AFC, s16 *, 4) = 0;
    sub_0803414C(0x03002AB0);
    *(u8 *)0x03002B68 &= 0xFB;
    *(s16 *)0x03002C20 = 0;
    *(s16 *)0x03002C24 = 0;
    sub_0803414C(0x03002BD4);
    *(s16 *)0x03002D44 = 0;
    *(s16 *)0x03002D48 = 0;
    sub_0803414C(0x03002CF8);
    *(s16 *)0x03002E68 = 0;
    *(s16 *)0x03002E6C = 0;
    sub_0803414C(0x03002E1C);
    *(s16 *)0x03002F8C = 0;
    *(s16 *)0x03002F90 = 0;
    sub_0803414C(0x03002F40);
}

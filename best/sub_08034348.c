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

M2C_UNK sub_08003528(s32, s32, s32, s32, s32);      /* extern */
M2C_UNK sub_0807E3CC(s32, u8);                      /* extern */

void sub_08034348(void *arg0) {
    *(u8 *)0x03002C35 = M2C_FIELD(arg0, u8 *, 0x61);
    sub_0807E3CC(0x03002BD4, *(u8 *)0x03002C35);
    *(u8 *)0x03002D59 = M2C_FIELD(arg0, u8 *, 0x61);
    sub_0807E3CC(0x03002CF8, *(u8 *)0x03002D59);
    *(u8 *)0x03002E7D = M2C_FIELD(arg0, u8 *, 0x61);
    sub_0807E3CC(0x03002E1C, *(u8 *)0x03002E7D);
    if (*(u16 *)0x03002484 == 0x1B1) {
        sub_08003528(0, 0xE0, 0, 0xFF00, 0);
    }
    M2C_FIELD(arg0, s32 *, 0x88) = (s32) (M2C_FIELD(arg0, s32 *, 0x88) + 2);
}

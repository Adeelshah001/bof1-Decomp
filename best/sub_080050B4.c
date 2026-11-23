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

M2C_UNK sub_08001F80(s32, s32, s32);                /* extern */
M2C_UNK sub_0800312C(s32, s32);                     /* extern */
M2C_UNK sub_080033B8(u16);                          /* extern */

void sub_080050B4(s32 arg0, u16 arg1, s16 arg2, s16 arg3) {
    *(u16 *)0x03002484 = arg1;
    *(s8 *)0x03004863 = 0x80;
    *(s16 *)0x030023D4 = arg2;
    *(s16 *)0x030040E0 = arg3;
    if ((arg0 << 0x18) == 0) {
        sub_080033B8(*(u16 *)0x03002484);
        *(u16 *)0x03002488 |= 0x80;
    }
    if (*(u8 *)0x030023DC != 0xFF) {
        sub_0800312C(0x10, 0);
        sub_08001F80(0, 0, 0);
    }
}

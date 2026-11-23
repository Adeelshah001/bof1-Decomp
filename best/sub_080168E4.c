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

s32 sub_08001770(s32);                              /* extern */
M2C_UNK sub_0803EE88(s32);                          /* extern */

void sub_080168E4(void) {
    if ((sub_08001770(0xBA) << 0x18) != 0) {
        if ((sub_08001770(0x56) << 0x18) == 0) {
            sub_0803EE88(0x03003420);
        }
    } else {
        M2C_FIELD((void *)0x0300348D, u8 *, 0) = (u8) (M2C_FIELD((void *)0x0300348D, u8 *, 0) | 8);
        M2C_FIELD((void *)0x0300348D, u8 *, 0x80) = (u8) (M2C_FIELD((void *)0x0300348D, u8 *, 0x80) | 8);
        *(u8 *)0x0300358D |= 8;
        *(u8 *)0x0300360D |= 8;
        *(u8 *)0x0300368D |= 8;
        *(u8 *)0x0300370D |= 8;
        if ((sub_08001770(0xB6) << 0x18) != 0) {
            *(u8 *)0x0300370D &= 0xF7;
        }
    }
}

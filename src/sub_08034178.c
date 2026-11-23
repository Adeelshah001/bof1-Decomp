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

M2C_UNK sub_080332F8(void *);                       /* extern */

void sub_08034178(void *arg0) {
    if ((M2C_FIELD(arg0, u8 *, 0x3A) != 0) && !(0x40 & M2C_FIELD(arg0, u8 *, 0xF0)) && ((u32) M2C_FIELD(arg0, u8 *, 0x3B) <= 3U)) {
        sub_080332F8(arg0);
    }
}

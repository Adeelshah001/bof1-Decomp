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

s32 sub_0803EBB0(s32);                              /* extern */
M2C_UNK sub_0803F764();                             /* extern */
M2C_UNK sub_0803F7B0();                             /* extern */
s32 sub_0805CF40(s32, M2C_UNK *);                   /* extern */

s32 sub_0803F0C4(void **arg0) {
    M2C_UNK sp0;

    if (((sub_0805CF40(M2C_FIELD(*arg0, u8 *, 1) | 0x100, &sp0) << 0x18) != 0) && ((sub_0803EBB0(M2C_FIELD(*arg0, u8 *, 1) | 0x100) << 0x18) == 0)) {
        sub_0803F764();
    } else {
        sub_0803F7B0();
    }
    *arg0 += 2;
    return 0;
}

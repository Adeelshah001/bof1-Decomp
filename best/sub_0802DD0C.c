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

M2C_UNK sub_08003378(s32);                          /* extern */
M2C_UNK sub_08032690(void *);                       /* extern */

void sub_0802DD0C(void *arg0) {
    u8 temp_r0;

    temp_r0 = M2C_FIELD(arg0, u8 *, 0x54) - 1;
    M2C_FIELD(arg0, u8 *, 0x54) = temp_r0;
    if ((temp_r0 << 0x18) == 0) {
        sub_08003378(0x2A);
        *(u8 *)0x0202DE88 |= 4;
        M2C_FIELD(arg0, s8 *, 0x3D) = 2;
        M2C_FIELD(arg0, u8 *, 0x41) = 8U;
        M2C_FIELD(arg0, s16 *, 0x2A) = 0xA4;
        M2C_FIELD(arg0, s16 *, 0x1C) = 0x1B0;
        sub_08032690(arg0);
        M2C_FIELD(arg0, u8 *, 0x41) = (u8) (M2C_FIELD(arg0, u8 *, 0x41) | 0x30);
        M2C_FIELD(arg0, s8 *, 0x50) = 8;
        M2C_FIELD(arg0, u8 *, 0x54) = 0x10U;
    }
}

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

u8 sub_0802C3B0(void *, u8, M2C_UNK *);             /* extern */
M2C_UNK sub_08032644(void *);                       /* extern */
M2C_UNK sub_08037C98(void *, s32);                  /* extern */

void sub_0802D934(void *arg0) {
    M2C_UNK sp0;
    u8 temp_r0;

    sub_08037C98(arg0, 0);
    temp_r0 = sub_0802C3B0(arg0, *(u8 *)0x030040E8, &sp0);
    if ((temp_r0 != 0) && (temp_r0 != 0xFF)) {
        sub_08032644(arg0);
        M2C_FIELD(arg0, s8 *, 0x50) = 8;
        return;
    }
    if (1 & M2C_FIELD((void *)0x030016E0, u16 *, 6)) {
        M2C_FIELD(arg0, s8 *, 0x50) = 0xA;
        M2C_FIELD(arg0, s16 *, 0x10) = 0x8000;
        M2C_FIELD(arg0, s16 *, 0x12) = 0;
        M2C_FIELD(arg0, u16 *, 0x16) = (u16) M2C_FIELD(arg0, u16 *, 0x2C);
    }
}

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

s32 sub_08003104();                                 /* extern */
M2C_UNK sub_0807C600(void *, s32);                  /* extern */

void sub_080888AC(void *arg0) {
    if (M2C_FIELD(M2C_FIELD(arg0, void **, 0xD4), u8 *, 0x4D) == 0) {
        if (!(4 & M2C_FIELD(arg0, u8 *, 0xF1)) && ((u32) ((u32) (0x0F000000 & (sub_08003104() << 0x18)) >> 0x18) > 3U)) {
            sub_0807C600(arg0, 2);
            return;
        }
        M2C_FIELD(arg0, s8 *, 0x4D) = 0xC;
        M2C_FIELD(arg0, s8 *, 0x50) = 0;
    }
}

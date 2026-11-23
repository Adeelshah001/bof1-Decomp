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

M2C_UNK sub_0805B568(s32, s32, s32, s32, s32);      /* extern */

void sub_0804515C(void *arg0) {
    u16 temp_r0;
    u16 temp_r0_2;

    temp_r0 = ((u16) (M2C_FIELD(arg0, u16 *, 6) - 0x11) - M2C_FIELD((void *)0x030023E0, u16 *, 6)) - *(u8 *)0x030016A4;
    if ((u32) ((temp_r0 << 0x10) + 0xFF5F0000) > 0xFF4E0000U) {
        temp_r0_2 = ((u16) (M2C_FIELD(arg0, u16 *, 2) - 8) - M2C_FIELD((void *)0x030023E0, u16 *, 2)) - *(u8 *)0x03001674;
        if ((u32) ((temp_r0_2 << 0x10) + 0xFF0F0000) > 0xFEEE0000U) {
            sub_0805B568((temp_r0_2 & 0x1FF) | 0x8000, (0xFF & temp_r0) | 0x4000, 7, 0, 0x200);
        }
    }
}

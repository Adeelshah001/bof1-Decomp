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

M2C_UNK sub_080332C0(void *);                       /* extern */
M2C_UNK sub_08078234(void *);                       /* extern */
M2C_UNK sub_080A0A4C(s32, s32);                     /* extern */
M2C_UNK sub_080A0A68(s32, s32, s32);                /* extern */

void sub_0807B8AC(void *arg0, s32 arg1) {
    s32 temp_r4;
    s32 temp_r5;

    temp_r5 = M2C_FIELD(arg0, u8 *, 0x3B) << 5;
    if (0x10 & M2C_FIELD((arg0 + 0x3B), u8 *, 0xB5)) {
        sub_080A0A4C(temp_r5 + 0x020210C0, 0x20);
        sub_080A0A4C(temp_r5 + 0x020212C0, 0x20);
        M2C_FIELD(arg0, s8 *, 0x7D) = (s8) (M2C_FIELD(arg0, u8 *, 0x41) * 0x10);
    } else {
        temp_r4 = (arg1 << 5) + 0x081A0E7C;
        sub_080A0A68(temp_r5 + 0x020210C0, temp_r4, 0x20);
        sub_080A0A68(temp_r5 + 0x020212C0, temp_r4, 0x20);
    }
    sub_080332C0(arg0);
    sub_08078234(arg0);
}

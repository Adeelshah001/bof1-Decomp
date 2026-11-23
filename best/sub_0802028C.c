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

u8 sub_080A0914(u8, s32);                           /* extern */
s32 sub_080A098C(u8, s32);                          /* extern */

void sub_0802028C(void) {
    s16 var_r2;
    s32 temp_r3;
    u8 temp_r0;
    u8 temp_r0_2;
    u8 temp_r4;

    temp_r0 = *(u8 *)0x030046D6 + 1;
    *(u8 *)0x030046D6 = temp_r0;
    if (temp_r0 == 0x3C) {
        *(u8 *)0x030046D6 = 0;
    }
    *(s16 *)0x030033D4 = 0;
    *(s16 *)0x030040F4 = 0;
    temp_r4 = *(u8 *)0x030046D6;
    if ((sub_080A098C(temp_r4, 6) << 0x18) == 0) {
        temp_r0_2 = sub_080A0914(temp_r4, 6);
        temp_r3 = 1 & temp_r0_2;
        M2C_FIELD((void *)0x040000D4, s32 *, 0) = (s32) ((temp_r0_2 * 0x5000) + 0x0824B768);
        M2C_FIELD((void *)0x040000D4, s32 *, 4) = (s32) ((temp_r3 << 0xF) + 0x06003000);
        M2C_FIELD((void *)0x040000D4, s32 *, 8) = 0x80002800;
        if (temp_r3 != 0) {
            var_r2 = 0x1200;
        } else {
            var_r2 = 0x1100;
        }
        *(s16 *)0x03001670 = var_r2;
    }
}

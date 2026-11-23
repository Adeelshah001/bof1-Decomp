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

M2C_UNK sub_08080D24(void *, void *, s32);          /* extern */
M2C_UNK sub_08080F9C(void *, void *);               /* extern */
s32 sub_080A07AC(s32, s32);                         /* extern */

void sub_08080F10(void *arg0, void *arg1) {
    s32 temp_r6;
    s32 temp_r6_2;
    s32 var_r6;
    u16 temp_r0;
    u8 temp_r4;

    temp_r4 = M2C_FIELD(arg0, u8 *, 0xE);
    temp_r6 = sub_080A07AC(M2C_FIELD(arg0, u16 *, 0x40) * temp_r4, 0x14);
    M2C_FIELD(arg0, u8 *, 0xE) = (u8) (temp_r4 + 1);
    temp_r6_2 = sub_080A07AC(M2C_FIELD(arg0, u8 *, 0xE) * M2C_FIELD(arg0, u16 *, 0x40), 0x14) - temp_r6;
    if (temp_r6_2 != 0) {
        var_r6 = temp_r6_2 + M2C_FIELD(arg1, u16 *, 0xF6);
        temp_r0 = M2C_FIELD(arg1, u16 *, 0xF4);
        if (var_r6 > (s32) temp_r0) {
            var_r6 = (s32) temp_r0;
        }
        M2C_FIELD(arg1, u16 *, 0xF6) = (u16) var_r6;
    }
    sub_08080D24(arg0, arg1, *(s32 *)0x030010FC + sub_080A07AC(M2C_FIELD(arg0, u8 *, 0xE) * M2C_FIELD(arg0, u8 *, 0x3C), 0x14));
    if ((u32) M2C_FIELD(arg0, u8 *, 0xE) > 0x13U) {
        M2C_FIELD(arg0, u16 *, 0x40) = 0U;
        sub_08080F9C(arg0, arg1);
    }
}

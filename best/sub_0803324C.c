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
M2C_UNK sub_080A0A68(M2C_UNK *, s32, s32);          /* extern */

void sub_0803324C(void *arg0) {
    M2C_UNK sp0;
    M2C_UNK sp10;
    u8 *var_r0;
    u8 temp_r1;
    u8 var_r2;

    sub_080A0A68(&sp0, 0x080A640C, 0xF);
    sub_080A0A68(&sp10, 0x080A641B, 0x19);
    var_r2 = M2C_FIELD(arg0, u8 *, 0x3C);
    if (var_r2 == 5) {
        temp_r1 = *(u8 *)0x0202DE88;
        if (0xF0 & temp_r1) {
            var_r2 = (temp_r1 >> 4) + 0xA;
        }
    }
    M2C_FIELD(arg0, s16 *, 0x2A) = 0;
    if (*(u8 *)0x0300169C == 0) {
        var_r0 = &sp0 + var_r2;
    } else {
        var_r0 = &sp10 + var_r2;
    }
    M2C_FIELD(arg0, s16 *, 0x2A) = (s16) *var_r0;
    sub_080332C0(arg0);
}

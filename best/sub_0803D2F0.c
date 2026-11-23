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

M2C_UNK sub_0803D630();                             /* extern */

void sub_0803D2F0(void) {
    s32 var_r0;
    u16 temp_r0_2;
    u8 temp_r0;

    temp_r0 = *(u8 *)0x0300097A - 1;
    *(u8 *)0x0300097A = temp_r0;
    if ((temp_r0 << 0x18) == 0) {
        *(u8 *)0x0300097A = 0xB4;
        temp_r0_2 = *(u16 *)0x03004E0C + 0xFFFFFC00;
        *(u16 *)0x03004E0C = temp_r0_2;
        if ((temp_r0_2 << 0x10) == 0x10A00000) {
            *(u8 *)0x0202E0CE += 1;
        }
        var_r0 = *(u16 *)0x03004E1C - 1;
        if (var_r0 < 0) {
            var_r0 = 0;
        }
        *(u16 *)0x03004E1C = (u16) var_r0;
        *(u16 *)0x0202DE5E = *(u16 *)0x03004E0C;
        sub_0803D630();
    }
}

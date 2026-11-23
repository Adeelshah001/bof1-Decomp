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

u16 sub_0803CC64(u16, u32);                         /* extern */
u16 sub_0803CD00(u16, u32);                         /* extern */
u16 sub_0803D610(u16, u32);                         /* extern */

void sub_0803CAF0(s32 arg0, u16 arg1, u16 arg2) {
    u16 var_r0;
    u16 var_r0_2;
    u32 var_r4;
    u8 var_r5;
    u8 var_r5_2;
    u8 var_r5_3;

    var_r4 = (u32) (arg0 << 0x18) >> 0x17;
    if (*(u16 *)0x03004E14 != 0) {
        var_r5 = 0;
        do {
            if ((arg1 << var_r5) & 0x8000) {
                var_r0 = sub_0803CC64(*(u16 *)0x03004E14, var_r4);
            } else {
                var_r0 = sub_0803D610(*(u16 *)0x03004E14, var_r4);
            }
            var_r4 = (u32) var_r0;
            var_r5 += 1;
        } while ((u32) var_r5 <= 0xFU);
        return;
    }
    if (*(u16 *)0x03004E0C != 0) {
        var_r5_2 = 0;
        do {
            if ((arg2 << var_r5_2) & 0x8000) {
                var_r0_2 = sub_0803CD00(*(u16 *)0x03004E0C, var_r4);
            } else {
                var_r0_2 = sub_0803D610(*(u16 *)0x03004E0C, var_r4);
            }
            var_r4 = (u32) var_r0_2;
            var_r5_2 += 1;
        } while ((u32) var_r5_2 <= 0xFU);
        return;
    }
    var_r5_3 = 0;
    do {
        sub_0803D610(0U, var_r4);
        var_r5_3 += 1;
    } while ((u32) var_r5_3 <= 0xFU);
}

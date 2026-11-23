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

M2C_UNK sub_0805B15C(s32);                          /* extern */
M2C_UNK sub_0805DB10(s32, u16);                     /* extern */
M2C_UNK sub_0805DB2C(s32, u16);                     /* extern */
M2C_UNK sub_08064E90();                             /* extern */
M2C_UNK sub_080674B8(s32);                          /* extern */

void sub_08065050(void) {
    s16 sp0;
    s32 temp_r7;
    s32 var_r5;
    u16 var_r0;
    u16 var_r4;

    sub_080674B8(2);
    sp0 = 0x140;
    M2C_FIELD((void *)0x040000D4, s16 **, 0) = &sp0;
    M2C_FIELD((void *)0x040000D4, s32 *, 4) = 0x0201A7C0;
    M2C_FIELD((void *)0x040000D4, s32 *, 8) = 0x81000400;
    sub_0805B15C(M2C_FIELD((void *)0x040000D4, s32 *, 8));
    sub_08064E90();
    temp_r7 = (*(u8 *)0x030046E4 * 0x124) + 0x03002AB0;
    var_r4 = 0xD0;
    var_r5 = 0;
    do {
        if (M2C_FIELD((void *)0x03004620, u8 *, 2) == 0x18) {
            sub_0805DB10(temp_r7, var_r4);
        } else {
            sub_0805DB2C(temp_r7, var_r4);
        }
        if (1 & var_r5) {
            var_r0 = var_r4 + 0x6A;
        } else {
            var_r0 = var_r4 + 0x16;
        }
        var_r4 = var_r0;
        var_r5 += 1;
    } while (var_r5 <= 0xF);
    M2C_FIELD((void *)0x03004620, s8 *, 3) = 6;
}

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

M2C_UNK sub_0808505C();                             /* extern */

s32 sub_080854DC(u16 arg0) {
    s32 temp_r1;
    s32 temp_r1_2;
    s32 temp_r2_2;
    s32 temp_r2_3;
    s32 var_r0;
    s32 var_r0_2;
    s32 var_r3;
    s32 var_r6;
    u16 temp_r2;

    temp_r2 = arg0;
    if (*(s32 *)0x0300110C == 0) {
        *(s32 *)0x0300110C = 0x03002AB0;
    }
    var_r6 = 0;
    var_r3 = 0;
    switch (temp_r2) {                              /* irregular */
    case 0x200:
        var_r3 = 0xFFFFFE00;
        break;
    case 0x100:
        var_r3 = 0x200;
        break;
    case 0x40:
        var_r3 = -0x10;
        break;
    case 0x80:
        var_r3 = 0x10;
        break;
    case 0x20:
        var_r3 = -1;
        break;
    case 0x10:
        var_r3 = 1;
        break;
    case 0x4:
        var_r6 = 3;
        break;
    case 0x1:
        var_r6 = 2;
        break;
    case 0x2:
        var_r6 = 1;
        break;
    }
    temp_r1 = *(s32 *)0x03001110 + var_r3;
    *(s32 *)0x03001110 = temp_r1;
    if (temp_r1 < 0) {
        var_r0 = (0 - temp_r1) + 0xF;
        if (var_r0 < 0) {
            var_r0 += 0xF;
        }
        temp_r2_2 = (var_r0 >> 4) * 8;
        *(s32 *)0x0300110C -= temp_r2_2;
        *(s32 *)0x03001110 = temp_r1 + (temp_r2_2 * 2);
    }
    temp_r1_2 = *(s32 *)0x03001110;
    if (temp_r1_2 > 0xFF) {
        var_r0_2 = temp_r1_2 - 0xF0;
        if (var_r0_2 < 0) {
            var_r0_2 += 0xF;
        }
        temp_r2_3 = (var_r0_2 >> 4) * 8;
        *(s32 *)0x0300110C += temp_r2_3;
        *(s32 *)0x03001110 = temp_r1_2 - (temp_r2_3 * 2);
    }
    sub_0808505C();
    return var_r6;
}

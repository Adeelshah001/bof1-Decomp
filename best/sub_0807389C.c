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

M2C_UNK sub_08071F60();                             /* extern */

void sub_0807389C(s32 arg0) {
    s32 var_r5;

    var_r5 = 0;
    switch (arg0) {                                 /* irregular */
    case 0x98:
    case 0x42:
        var_r5 = 0x08150F02;
        break;
    case 0xA4:
    case 0x46:
        var_r5 = 0x08150F07;
        break;
    case 0x9C:
    case 0x4C:
        var_r5 = 0x08150F0C;
        break;
    case 0x9A:
    case 0x8E:
        var_r5 = 0x08150F11;
        break;
    case 0xB6:
        var_r5 = 0x08150F16;
        break;
    }
    *(s32 *)0x03000F84 = var_r5;
    *(s32 *)0x03000F74 = 0x18;
    *(s32 *)0x03000F78 = 2;
    *(s32 *)0x03000F7C = 4;
    *(s32 *)0x03000F80 = 1;
    *(s32 *)0x03000F70 = 0x3C;
    sub_08071F60();
}

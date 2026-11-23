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

M2C_UNK sub_08004EA0(s32);                          /* extern */

void sub_080224A0(void) {
    s32 temp_r3;
    u8 var_r4;
    void *temp_r2;

    *(s32 *)0x03001694 |= 0x80;
    *(s16 *)0x03001864 = 0x10;
    var_r4 = 1;
    do {
        temp_r3 = var_r4 * 0x124;
        temp_r2 = temp_r3 + 0x03002AB0;
        if ((M2C_FIELD(temp_r2, u8 *, 0x3A) != 0) && !(0x40 & M2C_FIELD(temp_r2, u8 *, 0xF0))) {
            M2C_FIELD(temp_r2, s16 *, 2) = (s16) (M2C_FIELD((temp_r3 + 0x10300298C), u16 *, 2) + 0x20);
        }
        var_r4 += 1;
    } while ((u32) var_r4 <= 3U);
    sub_08004EA0(0x8293);
    *(u8 *)0x03004870 += 1;
}

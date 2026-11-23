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

M2C_UNK sub_080017EC(s32);                          /* extern */
M2C_UNK sub_0805C9A0(s32, s32);                     /* extern */

void sub_08025B88(void *arg0) {
    s32 var_r1;
    u8 temp_r2;
    u8 temp_r6;

    temp_r2 = *(u8 *)0x03004872;
    if (temp_r2 != 0) {
        temp_r6 = 0x80 & *(u8 *)0x03004573;
        if (temp_r6 == 0) {
            var_r1 = 0xE7;
            if (!(2 & temp_r2)) {
                var_r1 = 0xE6;
            }
            sub_080017EC(var_r1);
            *(s8 *)0x0300486F = 4;
            *(u8 *)0x03004870 = temp_r6;
            sub_0805C9A0(0x0202DBD0, 0x4E20);
        }
        M2C_FIELD(arg0, s32 *, 0x68) = (s32) (M2C_FIELD(arg0, s32 *, 0x68) + 2);
    }
}

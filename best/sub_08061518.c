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

M2C_UNK sub_0805B328(s32, s32, s32, s32, s8 *, s32); /* extern */
M2C_UNK sub_0805D5E4(s32, s8 *, s32);               /* extern */
M2C_UNK sub_0805D84C(s32, s32, s32, s32, s32);      /* extern */
u8 sub_0805D8F4();                                  /* extern */
s32 sub_0805D910(u16, u16 *);                       /* extern */

void sub_08061518(u16 arg0) {
    s8 sp8;
    u16 sp14;
    s32 var_r5;
    s32 var_r8;
    u16 temp_r0;
    u16 temp_r1;
    u16 var_r6;

    temp_r0 = arg0;
    var_r8 = 0;
    var_r6 = 0;
    if (*(u8 *)0x0300169C == 0) {
        var_r5 = 0;
loop_6:
        if (var_r5 < (s32) sub_0805D8F4()) {
            if ((sub_0805D910(var_r6, &sp14) << 0x18) == 0) {
                temp_r1 = sp14;
                if ((temp_r0 & 0xF0FF) == (0xF0FF & temp_r1)) {
                    var_r8 += (u32) (0xF00 & temp_r1) >> 8;
                }
            }
            var_r6 += 1;
            var_r5 += 1;
            goto loop_6;
        }
    }
    sub_0805B328(2, 1, 1, 0, (s8 *)0x081006A0, 8);
    sub_0805B328(2, 2, 3, 0, (s8 *)0x081006A0, 8);
    if (var_r8 != 0) {
        sub_0805D84C(2, 1, 1, 0, (s32) temp_r0);
        sp8 = 0x41;
        sub_0805D5E4(var_r8, &sp8 + 1, 3);
        sub_0805B328(2, 6, 3, 0, &sp8, 4);
    }
}

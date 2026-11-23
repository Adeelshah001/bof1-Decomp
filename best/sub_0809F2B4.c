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

M2C_UNK sub_0809F210(s32);                          /* extern */
M2C_UNK sub_0809F3A0();                             /* extern */

void sub_0809F2B4(s32 arg0) {
    s32 temp_r1;
    s32 temp_r4;
    s32 temp_r4_4;
    s32 temp_r4_5;
    s32 var_r4;
    s8 *var_r0;
    u32 temp_r4_2;
    u32 temp_r4_3;
    void *temp_r5;

    temp_r5 = *(void **)0x03007FF0;
    temp_r1 = M2C_FIELD(temp_r5, s32 *, 0);
    if (temp_r1 == 0x68736D53) {
        M2C_FIELD(temp_r5, s32 *, 0) = (s32) (temp_r1 + 1);
        temp_r4 = 0xFF & arg0;
        if (temp_r4 != 0) {
            M2C_FIELD(temp_r5, s8 *, 5) = (s8) (temp_r4 & 0x7F);
        }
        temp_r4_2 = 0xF00 & arg0;
        if (temp_r4_2 != 0) {
            M2C_FIELD(temp_r5, s8 *, 6) = (s8) (temp_r4_2 >> 8);
            var_r4 = 0xC;
            var_r0 = temp_r5 + 0x50;
            do {
                *var_r0 = 0;
                var_r4 -= 1;
                var_r0 += 0x40;
            } while (var_r4 != 0);
        }
        temp_r4_3 = 0xF000 & arg0;
        if (temp_r4_3 != 0) {
            M2C_FIELD(temp_r5, s8 *, 7) = (s8) (temp_r4_3 >> 0xC);
        }
        temp_r4_4 = 0xB00000 & arg0;
        if (temp_r4_4 != 0) {
            *(u8 *)0x04000089 = (0x3F & *(u8 *)0x04000089) | ((u32) (0x300000 & temp_r4_4) >> 0xE);
        }
        temp_r4_5 = 0xF0000 & arg0;
        if (temp_r4_5 != 0) {
            sub_0809F3A0();
            sub_0809F210(temp_r4_5);
        }
        M2C_FIELD(temp_r5, s32 *, 0) = 0x68736D53;
    }
}

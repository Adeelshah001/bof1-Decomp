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

M2C_UNK sub_080050B4(s32, s32, u32, u32);           /* extern */
M2C_UNK sub_08039108();                             /* extern */

void sub_08022520(void) {
    u32 temp_r2;
    u32 temp_r2_2;
    u32 var_r4;
    u32 var_r5;

    var_r5 = 0;
    temp_r2 = ((u16) M2C_FIELD((void *)0x03002AB0, u16 *, 2) >> 4) + 0x50;
    if (temp_r2 <= 0xABU) {
        var_r4 = 0xAB;
    } else {
        var_r4 = temp_r2;
        if (var_r4 > 0x149U) {
            var_r4 = 0x149;
        }
    }
    temp_r2_2 = (u16) M2C_FIELD((void *)0x03002AB0, u16 *, 6) >> 4;
    if (temp_r2_2 <= 0x8EU) {
        var_r5 = 0x8E;
    } else if (temp_r2_2 <= 0x14CU) {
        var_r5 = temp_r2_2;
    }
    sub_08039108();
    sub_080050B4(1, 0x189, var_r4, var_r5);
    *(s8 *)0x03001698 = 0;
    *(s8 *)0x03001674 = 0;
    *(s8 *)0x0300166C = 0;
    *(s8 *)0x030016A4 = 0;
    *(u8 *)0x03004870 += 1;
}

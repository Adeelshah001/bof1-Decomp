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

M2C_UNK sub_0803EE6C(void *);                       /* extern */

void sub_08052A8C(void *arg0) {
    u16 var_r0;
    u16 var_r0_2;
    u16 var_r3;
    u16 var_r4;
    u8 temp_r0_2;
    u8 temp_r1;
    u8 var_r2;
    void *temp_r0;

    var_r4 = M2C_FIELD((void *)0x03002AB0, u16 *, 2);
    var_r3 = M2C_FIELD((void *)0x03002AB0, u16 *, 6);
    temp_r1 = M2C_FIELD(arg0, u8 *, 0x61);
    switch (temp_r1) {                              /* irregular */
    case 0:
        var_r0 = var_r3 - 1;
block_10:
        var_r3 = var_r0;
        break;
    case 1:
        var_r0_2 = var_r4 + 1;
block_12:
        var_r4 = var_r0_2;
        break;
    case 2:
        var_r0 = var_r3 + 1;
        goto block_10;
    case 3:
        var_r0_2 = var_r4 - 1;
        goto block_12;
    }
    var_r2 = 0;
    do {
        if (*(u8 *)0x03002AEA != 0) {
            temp_r0 = (var_r2 * 0x124) + 0x03002AB0;
            M2C_FIELD(temp_r0, u16 *, 0x82) = var_r4;
            M2C_FIELD((temp_r0 + 0x82), u16 *, 4) = var_r3;
            M2C_FIELD(temp_r0, u16 *, 2) = var_r4;
            M2C_FIELD(temp_r0, u16 *, 6) = var_r3;
        }
        var_r2 += 1;
    } while ((u32) var_r2 <= 3U);
    temp_r0_2 = M2C_FIELD(arg0, u8 *, 0x54) - 1;
    M2C_FIELD(arg0, u8 *, 0x54) = temp_r0_2;
    if ((temp_r0_2 << 0x18) == 0) {
        *(u8 *)0x03004870 += 1;
        sub_0803EE6C(arg0);
    }
}

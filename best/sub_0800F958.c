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

void sub_0800F958(void *arg0, s32 arg1) {
    u16 temp_r1;
    u16 temp_r1_2;
    u16 temp_r3;
    u16 temp_r3_2;
    u16 var_r2;
    u16 var_r2_2;
    u32 temp_r4;

    *(u16 *)0x030040F8 = 0;
    *(s16 *)0x03004114 = 0;
    temp_r4 = (u32) ((arg1 << 0x10) + 0x10000) >> 0x10;
    temp_r1 = M2C_FIELD(arg0, u16 *, 2);
    temp_r3 = M2C_FIELD((void *)0x03002AB0, u16 *, 2);
    var_r2 = temp_r1 - temp_r3;
    if (var_r2 == 0) {
        *(u16 *)0x030040F8 = 1;
    }
    if ((u32) (temp_r1 << 0x10) < (u32) (temp_r3 << 0x10)) {
        var_r2 = ~var_r2 + 1;
    }
    if ((u32) var_r2 < temp_r4) {
        temp_r1_2 = M2C_FIELD(arg0, u16 *, 6);
        temp_r3_2 = M2C_FIELD((void *)0x03002AB0, u16 *, 6);
        var_r2_2 = temp_r1_2 - temp_r3_2;
        if (var_r2_2 == 0) {
            *(u16 *)0x030040F8 += 1;
        }
        if ((u32) (temp_r1_2 << 0x10) < (u32) (temp_r3_2 << 0x10)) {
            var_r2_2 = ~var_r2_2 + 1;
        }
        if ((u32) var_r2_2 >= temp_r4) {
            goto block_10;
        }
    } else {
block_10:
        *(s16 *)0x03004114 = 1;
    }
}

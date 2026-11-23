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

s32 sub_08001770(s32);                              /* extern */
M2C_UNK sub_080292A8(s32, s32, s32);                /* extern */
s32 sub_080292EC(s32, s32);                         /* extern */
s32 sub_08029318(s32, s32);                         /* extern */

void sub_08029008(u16 arg0) {
    s32 var_r0;
    s32 var_r0_2;
    s32 var_r1;
    s32 var_r5;
    u16 temp_r4;
    u8 temp_r4_2;
    u8 var_r6;
    void *temp_r2;

    temp_r4 = arg0;
    var_r5 = 0;
    var_r6 = 0;
    switch (temp_r4) {                              /* irregular */
    case 0x0:
        if ((s8) *(u8 *)0x03004861 == 2) {
            var_r0 = 0x7A;
            var_r1 = 2;
block_8:
            var_r0_2 = sub_080292EC(var_r0, var_r1);
block_9:
            var_r5 = var_r0_2;
        }
        break;
    case 0x199:
        if ((sub_08001770(0xD2) << 0x18) == 0) {
            var_r0_2 = sub_08029318(2, 4);
            goto block_9;
        }
        if (temp_r4 == 0xD8) {
        case 0xD8:
            var_r0 = 0x6B;
            var_r1 = 0;
            goto block_8;
        }
        break;
    }
    if (var_r5 != 0) {
        do {
            temp_r2 = var_r5 + var_r6;
            temp_r4_2 = M2C_FIELD(temp_r2, u8 *, 1);
            sub_080292A8(M2C_FIELD(temp_r2, u8 *, 0) + 0x180, M2C_FIELD(temp_r2, u8 *, 2) | (M2C_FIELD(temp_r2, u8 *, 3) << 8), 0x7F & temp_r4_2);
            var_r6 += 4;
        } while (temp_r4_2 & 0x80);
    }
}

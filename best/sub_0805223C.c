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

void sub_0805223C(void *arg0) {
    s16 *var_r3;
    s16 *var_r4;
    s16 var_r0;
    s32 var_r1;
    u16 *var_r5;
    u16 var_r2;
    u8 temp_r0;
    u8 temp_r0_2;
    u8 temp_r1;

    if (M2C_FIELD(arg0, u8 *, 0x55) != 0) {
        temp_r0 = M2C_FIELD(arg0, u8 *, 0x54) - 1;
        M2C_FIELD(arg0, u8 *, 0x54) = temp_r0;
        if ((temp_r0 << 0x18) == 0) {
            M2C_FIELD(arg0, u8 *, 0x54) = 8U;
            M2C_FIELD(arg0, u16 *, 0xBC) = (u16) ((M2C_FIELD(arg0, u16 *, 0xBC) + 1) & 0x1F);
            var_r2 = M2C_FIELD(arg0, u16 *, 0xBC);
            var_r1 = 0;
            var_r3 = (s16 *)0x0202173E;
            var_r4 = (s16 *)0x0200C1FE;
            var_r5 = (u16 *)0x080FDF84;
            do {
                var_r2 += *var_r5;
                if ((u32) (u16) (var_r2 + var_r1) <= 0x1FU) {
                    var_r0 = var_r2 + 0x10;
                } else if (var_r2 & 0x8000) {
                    var_r0 = var_r2 + 0x30;
                } else {
                    var_r0 = var_r2 - 0x10;
                }
                *var_r4 = var_r0;
                *var_r3 = var_r0;
                var_r3 += 8;
                var_r4 += 8;
                var_r5 += 2;
                var_r1 += 1;
            } while (var_r1 <= 0x1F);
        }
    } else {
        temp_r0_2 = M2C_FIELD(arg0, u8 *, 0xC4) - 1;
        M2C_FIELD(arg0, u8 *, 0xC4) = temp_r0_2;
        if ((temp_r0_2 << 0x18) == 0) {
            M2C_FIELD(arg0, u8 *, 0xC4) = 0xFU;
            temp_r1 = *(u8 *)0x030016A8 + 1;
            if ((u32) temp_r1 <= 0x10U) {
                *(u8 *)0x030016A8 = (s16) ((u16) ((0x10 - temp_r1) << 8) | temp_r1);
            }
        }
    }
}

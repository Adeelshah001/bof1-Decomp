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

void sub_08029EF4(u16 *arg0) {
    u32 sp0;
    u32 sp8;
    u16 *temp_r3;
    u16 temp_r1_2;
    u16 temp_r2;
    u32 temp_r1;
    u8 var_r0;
    u8 var_r5;
    void *temp_r4;
    void *var_r4;

    sp0 = (u32) *arg0;
    var_r4 = arg0 + 2;
    var_r0 = 0;
    if (sp0 > 0U) {
        do {
            temp_r2 = M2C_FIELD(var_r4, u16 *, 2);
            temp_r4 = var_r4 + 2 + 4;
            var_r5 = 0;
            temp_r1 = temp_r2 >> 1;
            if (temp_r1 > 0U) {
                M2C_FIELD(&sp0, u8 *, 4) = (u8) *(u8 *)0x0300418C;
                sp8 = temp_r1;
                do {
                    temp_r3 = (var_r5 * 2) + temp_r4;
                    temp_r1_2 = *temp_r3;
                    *temp_r3 = (temp_r1_2 & 0x3FF) | ((u32) ((((u32) (temp_r1_2 & 0x1C00) >> 0xA) + M2C_FIELD(&sp0, u8 *, 4)) << 0x18) >> 0xC) | ((u32) (temp_r1_2 & 0xC000) >> 4);
                    var_r5 += 1;
                } while ((u32) var_r5 < sp8);
            }
            var_r4 = temp_r4 + ((temp_r2 >> 1) * 2);
            var_r0 += 1;
        } while ((u32) var_r0 < sp0);
    }
}

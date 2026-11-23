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

u8 sub_08002FAC(void) {
    u16 temp_r2;
    u16 temp_r3;
    u16 var_r0;
    u16 var_r0_2;
    u32 var_r3;
    u32 var_r3_2;
    u32 var_r4;
    u8 temp_r0;
    u8 temp_r0_2;
    u8 temp_r0_3;

    var_r4 = 0;
    temp_r0 = *(u8 *)0x03004874;
    if (temp_r0 == 0) {

    } else {
        if (temp_r0 == 2) {
            var_r0 = M2C_FIELD((void *)0x03004830, u16 *, 0x1E);
        } else {
            var_r0 = M2C_FIELD((void *)0x03004830, u16 *, 0x22);
        }
        var_r3 = var_r0 >> 8;
        if (0x80 & var_r3) {
            var_r3 |= 0xFF00;
        }
        if (M2C_FIELD((void *)0x03004830, u8 *, 0x44) == 2) {
            if (M2C_FIELD((void *)0x03004830, u8 *, 0x4E) != ((u16) M2C_FIELD((void *)0x03004830, u16 *, 0x22) >> 8)) {
                temp_r0_2 = *(u8 *)0x03001698 + var_r3;
                *(u8 *)0x03001698 = temp_r0_2;
                *(u8 *)0x03001674 = temp_r0_2;
            }
        } else {
            *(s16 *)0x030023D4 = var_r3 + M2C_FIELD((void *)0x03002AB0, u16 *, 2);
        }
        if (M2C_FIELD((void *)0x03004830, u8 *, 0x44) == 2) {
            var_r0_2 = M2C_FIELD((void *)0x03004830, u16 *, 0x20);
        } else {
            var_r0_2 = M2C_FIELD((void *)0x03004830, u16 *, 0x24);
        }
        var_r3_2 = var_r0_2 >> 8;
        if (0x80 & var_r3_2) {
            var_r3_2 |= 0xFF00;
        }
        if (M2C_FIELD((void *)0x03004830, u8 *, 0x44) == 2) {
            if (M2C_FIELD((void *)0x03004830, u8 *, 0x4F) != ((u16) M2C_FIELD((void *)0x03004830, u16 *, 0x24) >> 8)) {
                temp_r0_3 = *(u8 *)0x0300166C + var_r3_2;
                *(u8 *)0x0300166C = temp_r0_3;
                *(u8 *)0x030016A4 = temp_r0_3;
            }
        } else {
            *(s16 *)0x030040E0 = var_r3_2 + M2C_FIELD((void *)0x03002AB0, u16 *, 6);
        }
        temp_r3 = M2C_FIELD((void *)0x03004830, u16 *, 0x22);
        if (M2C_FIELD((void *)0x03004830, u8 *, 0x4E) != (temp_r3 >> 8)) {
            M2C_FIELD((void *)0x03004830, u16 *, 0x22) = (u16) (temp_r3 + M2C_FIELD((void *)0x03004830, u16 *, 0x1E));
            var_r4 = 0x01000000U >> 0x18;
        }
        temp_r2 = M2C_FIELD((void *)0x03004830, u16 *, 0x24);
        if (M2C_FIELD((void *)0x03004830, u8 *, 0x4F) != (temp_r2 >> 8)) {
            M2C_FIELD((void *)0x03004830, u16 *, 0x24) = (u16) (temp_r2 + M2C_FIELD((void *)0x03004830, u16 *, 0x20));
            var_r4 = (u32) (u8) (var_r4 + 1);
        }
    }
    return (u8) var_r4;
}
